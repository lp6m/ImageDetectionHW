#include <iostream>
#include <map>
#include <vector>
#include <fcntl.h>
#include <errno.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <chrono>
#include <linux/videodev2.h>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include "feature.h"
#include "forest.h"
#include "window_candidate.h"
#include "hw.h"


#define REQUEST_BUFFER_NUM 10

static int xioctl(int fd, int request, void *arg)
{
    int r;
    do {
        r = ioctl (fd, request, arg);
        if (request == VIDIOC_DQBUF) {
            std::cout << "r : " << r << std::endl;
        }
    } while (-1 == r && EINTR == errno);
    return r;
}
unsigned char *buffers[4];

using namespace std;
using namespace cv;

map<int, vector<pair<int, int> > > mp;
map<int, vector<pair<int, int> > > original_mp;
set<int> widthkind;

int got_buffer_num;

int sx_min = 999;
int sy_min = 999;
int ex_max = -1;
int ey_max = -1;
#define WINDOW_WIDTH 64
#define WINDOW_HEIGHT 32
bool imgout = false;
float proba_thresh = 0.65;
#define hwmode false
#define checkmode false
#define showdetailtime true
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
    
void test_four_window(float* result, int num, Mat rgb[4], Mat hls[4], Mat gray[4], double* time0, double* time1, double* time2, double *time3){
    std::chrono::system_clock::time_point  t0, t1, t2, t3, t4, t5, t6, t7;
    cv::Size spatial_size(8, 8);
	Mat spatial_rgb[4], spatial_hls[4];
	t0 = std::chrono::system_clock::now();
    for(int i = 0; i < num; i++){
        cv::resize(rgb[i], spatial_rgb[i], spatial_size);
        cv::resize(hls[i], spatial_hls[i], spatial_size);
    }
    
    if(hwmode){
        memset(hw_feature, 0, sizeof(unsigned short) * FEATURE_SIZE * 4);
        for(int i = 0; i < num; i++){
            ravel(spatial_hls[i], i * FEATURE_SIZE + hw_feature);
            ravel(spatial_rgb[i], i * FEATURE_SIZE + hw_feature + 192);
        }
		t1 = std::chrono::system_clock::now();
        //calculate HOG feature
		t2 = std::chrono::system_clock::now();
        for(int i = 0; i < 32; i++)  memcpy(hog_imageBuffer0 + 64 * i, gray[0].data + gray[0].step * i, gray[0].cols * sizeof(unsigned char));
        if(num > 1) for(int i = 0; i < 32; i++)  memcpy(hog_imageBuffer1 + 64 * i, gray[1].data + gray[1].step * i, gray[1].cols * sizeof(unsigned char));
        if(num > 2) for(int i = 0; i < 32; i++)  memcpy(hog_imageBuffer2 + 64 * i, gray[2].data + gray[2].step * i, gray[2].cols * sizeof(unsigned char));
		if(num > 3) for(int i = 0; i < 32; i++)  memcpy(hog_imageBuffer3 + 64 * i, gray[3].data + gray[3].step * i, gray[3].cols * sizeof(unsigned char));
        calc_hog_hw(num, hw_feature + 192 * 2, hw_feature + 192 * 2 + FEATURE_SIZE, hw_feature + 192 * 2 + FEATURE_SIZE * 2, hw_feature + 192 * 2 + FEATURE_SIZE * 3);
		t3 = std::chrono::system_clock::now();
    }
	//t2 = std::chrono::system_clock::now();
	*time0 += (long double)std::chrono::duration_cast<std::chrono::microseconds>(t1-t0).count()/1000;
	*time1 += (long double)std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000;
	*time2 += (long double)std::chrono::duration_cast<std::chrono::microseconds>(t3-t2).count()/1000;
    if(!hwmode || checkmode){
        memset(sw_feature, 0, sizeof(unsigned short) * FEATURE_SIZE * 4);
        for(int i = 0; i < num; i++){
            ravel(spatial_hls[i], i * FEATURE_SIZE + sw_feature);
            ravel(spatial_rgb[i], i * FEATURE_SIZE + sw_feature + 192);
            lite_hog(gray[i], i * FEATURE_SIZE + sw_feature + 192 * 2);
        }
    }
	if(checkmode) hwresultcheck(sw_feature, hw_feature, 0, FEATURE_SIZE * 4);
    //Classify by Random Forest
	t4 = std::chrono::system_clock::now();
    for(int i = 0; i < 4; i++){
        if(hwmode) result[i] = randomforest_classifier(i * FEATURE_SIZE + hw_feature);
        else       result[i] = randomforest_classifier(i * FEATURE_SIZE + sw_feature);
    }
	t5 = std::chrono::system_clock::now();
	*time3 += (long double)std::chrono::duration_cast<std::chrono::microseconds>(t5-t4).count()/1000;
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
	double time0 = 0;
    double time1 = 0;
    double time2 = 0;
	double time3 = 0;
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
            test_four_window(result, process_window_num, rgb_test, hls_test, gray_test, &time0, &time1, &time2, &time3);
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
    if(showdetailtime){
        cout << "preprocessing color convert time : " << tmp1 << "[milisec]" << endl;
    	cout << "preprocessing resize time : " << tmp2 << "[milisec]" << endl;
        cout << "classify time : " << tmp3 << "[milisec]" << endl;
        cout << "all time : " << all << "[milisec]" << endl;
    	cout << "sw ravel time" << time0 << "[milisec]" << endl;
        cout << "hw hist time" << time1 << "[milisec]" << endl;
        cout << "hw hog time" << time2 << "[milisec]" << endl;
    	cout << "random forest time" << time3 << "[milisec]" << endl;
    }
    return rst;
}

void camera_setup(int fd){
    // 2. Querying video capabilities.
    struct v4l2_capability caps;
    memset(&caps, 0, sizeof(caps));
    if (-1 == xioctl(fd, VIDIOC_QUERYCAP, &caps))
    {
        std::cout << "Failed to query capabilities." << std::endl;
        return 1;
    }
    std::cout << "bus_info  : " << caps.bus_info << std::endl;
    std::cout << "card      : " << caps.card << std::endl;
    std::cout << "driver    : " << caps.driver << std::endl;
    std::cout << "version   : " << caps.version << std::endl;

    // 3. Format Specification.
    {
        struct v4l2_format fmt;
        memset(&(fmt), 0, sizeof(fmt));

        fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        fmt.fmt.pix.width = 640;
        fmt.fmt.pix.height = 480;
        fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_YUYV;
        fmt.fmt.pix.field = V4L2_FIELD_NONE;

        if (-1 == xioctl(fd, VIDIOC_S_FMT, &fmt))
        {
            std::cout << "Failed to set pixel format." << std::endl;
            return 1;
        }
    }

    // 4. Request Buffer
    {
        struct v4l2_requestbuffers req;
        memset(&(req), 0, sizeof(req));
        req.count = REQUEST_BUFFER_NUM;
        req.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        req.memory = V4L2_MEMORY_MMAP;

        if (-1 == xioctl(fd, VIDIOC_REQBUFS, &req))
        {
            std::cout << "Failed to request buffer." << std::endl;
            return 1;
        }
        cout << "we could get " << req.count  << " buffers. " << endl;
        got_buffer_num = req.count;
    }

    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        cout << width << ":" << mp[width].size() << endl;
    }

    // 5. Query Buffer
    {
        for(int bufferindex = 0; bufferindex < got_buffer_num; bufferindex++){
            struct  v4l2_buffer buf;
            memset(&(buf), 0, sizeof(buf));
            buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
            buf.memory = V4L2_MEMORY_MMAP;
            buf.index = bufferindex;
            if(-1 == xioctl(fd, VIDIOC_QUERYBUF, &buf))
            {
                std::cout << "Failed to query buffer." << std::endl;
                return 1;
            }

            std::cout << "buf.length : " << buf.length << std::endl;
            std::cout << "buf.m.offset : " << buf.m.offset << std::endl;

            buffers[bufferindex] = (unsigned char*)mmap (NULL, buf.length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, buf.m.offset);
            if (MAP_FAILED == buffers[bufferindex])
                cerr << "mmap" << endl;
        }
    }

    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        cout << width << ":" << mp[width].size() << endl;
    }

    
    // 5.5 QBUF Request
    {
        for (int i = 0; i < got_buffer_num; ++i) {
            struct v4l2_buffer buf;
            buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
            buf.memory = V4L2_MEMORY_MMAP;
            buf.index = i;
            if (-1 == xioctl(fd, VIDIOC_QBUF, &buf))
                cerr << "VIDIOC_QBUF" << endl;
        }
    }

    // 6. Start Streaming
    {
        struct  v4l2_buffer buf;
        memset(&(buf), 0, sizeof(buf));
        buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        if(-1 == xioctl(fd, VIDIOC_STREAMON, &buf.type))
        {
            std::cout << "Start Capture" << std::endl;
            return 1;
        }
    }
}
int main(int argc, const char* argv[]){

    check_window();

    cout << "hw_setup" << endl;
    if(hwmode) hw_setup();

    int fd;
    fd = open("/dev/video1", O_RDWR, 0);
    if (fd == -1){
        std::cout << "Failed to open video device." << std::endl;
        return 1;
    }
    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        cout << width << ":" << mp[width].size() << endl;
    }
    camera_setup(fd);

    for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
        int width = *itr;
        cout << width << ":" << mp[width].size() << endl;
    }
    std::chrono::system_clock::time_point  t1, t2, t3, t4, t5, t6, t7;
    // cv::VideoCapture cap(1);
    // char camdata[640*480*2];
    cv::Mat rawimg(480, 640, CV_8UC2);
    // cv::Mat bgrimg(480, 640, CV_8UC2);

    while(1){
        t1 = std::chrono::system_clock::now();
        {
            {
                struct v4l2_buffer buf;
                buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
                buf.memory = V4L2_MEMORY_MMAP;
                fd_set fds;
                FD_ZERO(&fds);
                FD_SET(fd, &fds);
                struct timeval tv = {0};
                tv.tv_sec = 2;
                int r = select(fd+1, &fds, NULL, NULL, &tv);

                if(-1 == r){
                    std::cout << "Waiting for Frame" << std::endl;
                    return 1;
                }
        
                memset(&(buf), 0, sizeof(buf));
                buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
                buf.memory = V4L2_MEMORY_MMAP;

                if(-1 == xioctl(fd, VIDIOC_DQBUF, &buf))
                {
                    std::cout << "Retrieving Frame" << std::endl;
                    return 1;
                }

                cout << "buf.index : " << buf.index << endl;
            
                // Connect buffer to queue for next capture.
                if (-1 == xioctl(fd, VIDIOC_QBUF, &buf)) {
                    std::cout << "VIDIOC_QBUF" << std::endl;
                }
                memcpy(rawimg.data, buffers[buf.index], 640 * 480 * 2);
            }

        }

        // memcpy(rawimg.data, camdata, 640 * 480 * 2);
        cv::Mat frame;
        cv::cvtColor(rawimg, frame, cv::COLOR_YUV2BGR_YUYV);
        // cap >> frame; // get a new frame from camera
        cv::Mat frame_copy = frame.clone();

        //process the current frame
		auto rst = test_one_frame(frame);
        //draw rectangle on detecting area
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
        if(!hwmode){
            cv::imshow("result", frame_copy);
            cv::waitKey(1);
        }
		t2 = std::chrono::system_clock::now();
		//show fps
        double elapsed = (double)std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count();
        cout << "elapsed:" << elapsed << "[milisec]" << endl;
        cout << "fps:" << 1000.0/elapsed << "[fps]" << endl;
	}

    if(hwmode) hw_release();

    // 10. Turn off streaming.
    struct v4l2_buffer buf;
    buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    buf.memory = V4L2_MEMORY_MMAP;
    if (-1 == xioctl(fd, VIDIOC_STREAMOFF, &buf.type)) {
        std::cout << "VIDIOC_STREAMOFF" << std::endl;
    }
    std::cout << "unko" << endl;
    // 11. munmap
    for(int i = 0; i < got_buffer_num; i++){
        if(munmap(buffers[i], 480 * 640 * 2) != 0){
            cerr << "munmap failed" << endl;
        }else{
            cout << "munmap success" << endl;
        }
    }
    // 12.close device
    close(fd);

    return 0;
}
