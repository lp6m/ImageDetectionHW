#include <iostream>
#include <chrono>
#include <map>
#include <vector>
#include <sstream>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include "feature.h"
#include "forest.h"
#include "window_candidate.h"
using namespace std;
using namespace cv;

map<int, vector<pair<int, int> > > mp;
map<int, vector<pair<int, int> > > original_mp;
set<int> widthkind;

int sx_min = 999;
int sy_min = 999;
int ex_max = -1;
int ey_max = -1;
#define WINDOW_WIDTH 64
#define WINDOW_HEIGHT 32
bool imgout = false;
float proba_thresh = 0.65;
#define FEATURE_SIZE 672

void check_window(){
    for(int i = 0; i < window_num; i++){
        int sy = w[i][0][0];
        int sx = w[i][1][0];
        int ey = w[i][0][1];
        int ex = w[i][1][1];
        // cv::Mat cropped(frame, cv::Rect(sx, sy, ex - sx, ey - sy));
        widthkind.insert(ex-sx);
        sx_min = min(sx_min, sx);
        sy_min = min(sy_min, sy);
        ex_max = max(ex_max, ex);
        ey_max = max(ey_max, ey);
    }

    for(int i = 0; i < window_num; i++){
    //(old_x - sx_min) * ratio
        int sy = w[i][0][0];
        int sx = w[i][1][0];
        int ey = w[i][0][1];
        int ex = w[i][1][1];

        int original_width = ex - sx;
        int ssy = (int)((float) (sy - sy_min) * (float)WINDOW_WIDTH/original_width);
        int ssx = (int)((float) (sx - sx_min) * (float)WINDOW_WIDTH/original_width);
        mp[original_width].push_back(make_pair(ssx, ssy));
        //store original coordinate
        original_mp[original_width].push_back(make_pair(sx, sy));
    }
}

bool inputdatacheck(unsigned char* ptr, cv::Mat img){
    bool rst = true;
    for(int y = 0; y < img.rows; y++){
        for(int x = 0; x < img.cols; x++){
            cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
            if(ptr[(y*img.cols+x)*3] != pix[0]){
                rst = false;
                cout << y << " " << x << " "  << ptr[(y*img.cols+x)*3] << " " << pix[0];
            }
            if(ptr[(y*img.cols+x)*3+1] != pix[1]){
                rst = false;
                cout << y << " " << x << " "  << ptr[(y*img.cols+x)*3+1] << " " << pix[1];
            }
            if(ptr[(y*img.cols+x)*3+2] != pix[2]){
                rst = false;
                cout << y << " " << x << " "  << ptr[(y*img.cols+x)*3+2] << " " << pix[2];
            }
        }
    }
    return rst;
}

bool inputdatacheck2(unsigned char* ptr, cv::Mat img){
  bool rst = true;
  for(int y = 0; y < img.rows; y++){
	for(int x = 0; x < img.cols; x++){
	  int pix = int(img.ptr<uchar>(y)[x]);
	  if(ptr[y*img.cols+x] != pix){
		rst = false;
		cout << y << " " << x << ptr[y*img.cols+x] << " " << pix << endl;
		//cout << "unko" << endl;
	  }
	}
  }
  if(rst) cout << "input data check2 OK" << endl;
  return rst;
}

bool hwresultcheck(unsigned short* sw_feature, unsigned short* hw_feature, int start, int end){
    bool showmode = true;
    bool flg = true;
    for(int i = start; i < end; i++){
        if(((int) sw_feature[i]) != ((int) hw_feature[i])){
            flg = false;
			cout << i << " is wrong , sw: " << int(sw_feature[i]) << " hw: " << int(hw_feature[i]) << endl;
        }
    }
    if(!flg) cout << "hwresult check NG" << endl;
    return flg;
}

unsigned short sw_feature[FEATURE_SIZE*4] = {0};
unsigned short hw_feature[FEATURE_SIZE*4] = {0};
    
void test_four_window(float* result, int num, Mat rgb[4], Mat hls[4], Mat gray[4]){
    cv::Size spatial_size(8, 8);
	Mat spatial_rgb[4], spatial_hls[4];
    for(int i = 0; i < num; i++){
        cv::resize(rgb[i], spatial_rgb[i], spatial_size);
        cv::resize(hls[i], spatial_hls[i], spatial_size);
    }
    for(int i = 0; i < num; i++){
        ravel(spatial_hls[i], i * FEATURE_SIZE + sw_feature);
        ravel(spatial_rgb[i], i * FEATURE_SIZE + sw_feature + 192);
        lite_hog(gray[i], i * FEATURE_SIZE + sw_feature + 192 * 2);
    }
    for(int i = 0; i < num; i++){
        result[i] = randomforest_classifier(i * FEATURE_SIZE + sw_feature);
    }
}

vector<pair<vector<int>, float>> test_one_frame(Mat frame){
    vector<pair<vector<int>, float>> rst;
    std::chrono::system_clock::time_point  t1, t2, t3, t4, t5, t6, t7;

    t1 = std::chrono::system_clock::now();
    //1. crop use frame 
    Mat rgb(frame, cv::Rect(sx_min, sy_min, ex_max - sx_min, ey_max - sy_min));
    //2. convert to HLS image
    Mat hls;
    cv::cvtColor(rgb, hls, CV_BGR2HSV);
    Mat gray;
    cv::cvtColor(rgb, gray, CV_BGR2GRAY);
	t2 = std::chrono::system_clock::now();
    Mat rgb_each_window[4];
    Mat hls_each_window[4];
    Mat gray_each_window[4];
    //3. resize for each window kind
    int cnt = 0;
    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        //TODO:crop use frame
        cv::resize(rgb, rgb_each_window[cnt++], cv::Size(), (float)WINDOW_WIDTH/(float)width , (float)WINDOW_WIDTH/(float)width, INTER_NEAREST);
    }
    cnt = 0;
    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        //TODO:crop use frame
        cv::resize(hls, hls_each_window[cnt++], cv::Size(), (float)WINDOW_WIDTH/(float)width , (float)WINDOW_WIDTH/(float)width, INTER_NEAREST);
    }
    cnt = 0;
    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        //TODO:crop use frame
        cv::resize(gray, gray_each_window[cnt++], cv::Size(), (float)WINDOW_WIDTH/(float)width , (float)WINDOW_WIDTH/(float)width, INTER_NEAREST);
    }
    t3 = std::chrono::system_clock::now();
    //4.crop for each window and classify for each window
    int test_count = 0;
    int widthkind_cnt = 0;
    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        auto windows = mp[width];
        //process 4 window images for each iteration
        for(int i = 0; i*4 < windows.size(); i++){
            int process_window_num = min(i*4+3, (int)windows.size()-1) - (i*4) + 1; //maximum 4
            Mat rgb_test[4], hls_test[4], gray_test[4];
            for(int j = 0; j < process_window_num; j++){
                rgb_test[j]  = rgb_each_window[widthkind_cnt](cv::Rect(windows[i*4+j].first, windows[i*4+j].second, WINDOW_WIDTH, WINDOW_HEIGHT));
                hls_test[j]  = hls_each_window[widthkind_cnt](cv::Rect(windows[i*4+j].first, windows[i*4+j].second, WINDOW_WIDTH, WINDOW_HEIGHT));
                gray_test[j] = gray_each_window[widthkind_cnt](cv::Rect(windows[i*4+j].first, windows[i*4+j].second, WINDOW_WIDTH, WINDOW_HEIGHT));
            }
            float result[4];
            test_four_window(result, process_window_num, rgb_test, hls_test, gray_test);
            // imwrite("wind/img" + to_string(test_count) + ".png", rgb_test);
            for(int j = 0; j < process_window_num; j++){
                if(result[j] >= proba_thresh){
                    int original_window_sx = original_mp[width][i*4+j].first;
                    int original_window_sy = original_mp[width][i*4+j].second;
                    int original_window_ex = original_window_sx + width;
                    int original_window_ey = original_window_sy + width/2;
                    vector<int> coord = {original_window_sx, original_window_sy, original_window_ex, original_window_ey};
                    rst.push_back(make_pair(coord, result[j]));
                }
            }
            test_count+=process_window_num;
        }
        widthkind_cnt++;
    }
    t4 = std::chrono::system_clock::now();
    cout << "test_count" << test_count << endl;

    double tmp1 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000;
    double tmp2 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t3-t2).count()/1000;
	double tmp3 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t4-t3).count()/1000;
    double all = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t4-t1).count()/1000;
    cout << "preprocessing color convert time : " << tmp1 << "[milisec]" << endl;
	cout << "preprocessing resize time : " << tmp2 << "[milisec]" << endl;
    cout << "classify time : " << tmp3 << "[milisec]" << endl;
    cout << "all time : " << all << "[milisec]" << endl;
    return rst;
}

int main(int argc, const char* argv[]){

    check_window();

    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        cout << width << ":" << mp[width].size() << endl;
    }
	std::chrono::system_clock::time_point  t1, t2, t3, t4, t5, t6, t7;
	for(int i = 1; i < 515; i++){
        ostringstream sout;
        sout << std::setfill('0') << std::setw(4) << i;
        string s = sout.str();
        string filepath = "../video/outtest4/image_" + s + ".png";
        string resultpath = "./ans/outtest4_3/image_" + s + ".png";
        cout << filepath << endl;
        cv::Mat frame;
        frame = cv::imread(filepath);
        cv::Mat frame_copy = frame.clone();

        t1 = std::chrono::system_clock::now();
        
		auto rst = test_one_frame(frame);

        for(int j = 0; j < rst.size(); j++){
            vector<int> coord = rst[j].first;
            float proba = rst[j].second;
            int sx = coord[0];
            int sy = coord[1];
            int ex = coord[2];
            int ey = coord[3];
            cout << sx << " " << sy << " " << ex << " " << ey << endl;
            cout << proba << endl;
            rectangle(frame_copy, Point(sx, sy), Point(ex, ey), Scalar(0,0,200), 2); //x,y //Scaler = B,G,R
            cv::putText(frame_copy, to_string(proba), cv::Point(sx+5,sy+5), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255,0,0), 1, CV_AA);
        }
        cv::imwrite(resultpath, frame_copy);
		t2 = std::chrono::system_clock::now();
		//show fps
        double elapsed = (double)std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count();
        cout << "elapsed:" << elapsed << "[milisec]" << endl;
        cout << "fps:" << 1000.0/elapsed << "[fps]" << endl;
	}

    return 0;
}
