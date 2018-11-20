#include <iostream>
#include <chrono>
#include <map>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include "feature.h"
#include "forest.h"
#include "window_candidate.h"
using namespace std;
using namespace cv;

float test_one_image(Mat img){
  cv::Size spatial_size(8, 8);
  Mat resized_rgb, resized_hls;
  cv::resize(img, resized_rgb, spatial_size);
  cv::cvtColor(resized_rgb, resized_hls, CV_RGB2HLS);
  
  double feature[584] = {0};
  ravel(resized_hls, feature);
  ravel(resized_rgb, feature + 192);

  cv::Mat hls;
  cv::cvtColor(img, hls, CV_RGB2HLS);
  hist(img, feature + 192 * 2);
  hist(hls, feature + 192 * 2 + 36);

  Mat resized_rgb2, gray;
  cv::resize(img, resized_rgb2, cv::Size(64 ,32)); //height = yrange = 64, width = xrange = 32
  cv::cvtColor(resized_rgb2, gray, CV_RGB2GRAY);
  hog(gray, feature + 192 * 2 + 36 * 2);
  for(int i = 0; i < 584; i ++){
    // cout << feature[i] << ", ";
  }
  // cout << endl;
  clf_res res = randomforest_classifier(feature);
  float red_proba = (float)res.red / (res.not_red + res.red);
  // cout << red_proba << endl;
  return red_proba;
}

map<int, vector<pair<int, int> > > mp;
set<int> widthkind;

int sx_min = 999;
int sy_min = 999;
int ex_max = -1;
int ey_max = -1;
#define WINDOW_WIDTH 64
#define WINDOW_HEIGHT 32
bool imgout = true;
float proba_thresh = 0.65;

void check_window(){
  
  for(int i = 0; i < 126; i++){
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
    cout << ex-sx << " ";
  }
  cout << "sx_min " << sx_min << endl;
  cout << "sy_min " << sy_min << endl;
  cout << "ex_max " << ex_max << endl;
  cout << "ey_max " << ey_max << endl;
  for(int i = 0; i < 126; i++){
    //(old_x - sx_min) * ratio
    int sy = w[i][0][0];
    int sx = w[i][1][0];
    int ey = w[i][0][1];
    int ex = w[i][1][1];

    int original_width = ex - sx;
    sy = (int)((float) (sy - sy_min) * (float)WINDOW_WIDTH/original_width);
    sx = (int)((float) (sx - sx_min) * (float)WINDOW_WIDTH/original_width);
    mp[original_width].push_back(make_pair(sx, sy));
  }
}

float test_one_window(Mat rgb, Mat hls, Mat gray){
  cv::Size spatial_size(8, 8);
  Mat resized_rgb, resized_hls;
  cv::resize(rgb, resized_rgb, spatial_size);
  cv::cvtColor(resized_rgb, resized_hls, CV_RGB2HLS);
  
  double feature[584] = {0};
  ravel(resized_hls, feature);
  ravel(resized_rgb, feature + 192);

  hist(rgb, feature + 192 * 2);
  hist(hls, feature + 192 * 2 + 36);

  // Mat resized_rgb2, gray;
  // cv::resize(img, resized_rgb2, cv::Size(64 ,32)); //height = yrange = 64, width = xrange = 32
  // cv::cvtColor(resized_rgb2, gray, CV_RGB2GRAY);
  hog(gray, feature + 192 * 2 + 36 * 2);
  for(int i = 0; i < 584; i ++){
    // cout << feature[i] << ", ";
  }
  // cout << endl;
  clf_res res = randomforest_classifier(feature);
  float red_proba = (float)res.red / (res.not_red + res.red);
  // cout << red_proba << endl;
  return red_proba;
}
void test_one_frame(Mat frame){
  std::chrono::system_clock::time_point  t1, t2, t3, t4, t5, t6, t7;

  t1 = std::chrono::system_clock::now();
  //1. crop use frame 
  Mat rgb(frame, cv::Rect(sx_min, sy_min, ex_max - sx_min, ey_max - sy_min));
  //2. convert to HLS image
  Mat hls;
  cv::cvtColor(rgb, hls, CV_RGB2HLS);
  Mat gray;
  cv::cvtColor(rgb, gray, CV_RGB2GRAY);
  Mat rgb_each_window[4];
  Mat hls_each_window[4];
  Mat gray_each_window[4];
  //3. resize for each window kind
  int cnt = 0;
  for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
    int width = *itr;
    cout << (float)WINDOW_WIDTH/(float)width << endl;
    //TODO:crop use frame
    cv::resize(rgb, rgb_each_window[cnt++], cv::Size(), (float)WINDOW_WIDTH/(float)width , (float)WINDOW_WIDTH/(float)width);
  }
  cnt = 0;
  for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
    int width = *itr;
    //TODO:crop use frame
    cv::resize(hls, hls_each_window[cnt++], cv::Size(), (float)WINDOW_WIDTH/(float)width , (float)WINDOW_WIDTH/(float)width);
  }
  cnt = 0;
  for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
    int width = *itr;
    //TODO:crop use frame
    cv::resize(gray, gray_each_window[cnt++], cv::Size(), (float)WINDOW_WIDTH/(float)width , (float)WINDOW_WIDTH/(float)width);
  }
  t2 = std::chrono::system_clock::now();
  //4.crop for each window and classify for each window
  int test_count = 0;
  cnt = 0;
  for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
    int width = *itr;
    auto windows = mp[width];
    for(int i = 0; i < windows.size(); i++){
      Mat rgb_test(rgb_each_window[cnt], cv::Rect(windows[i].first, windows[i].second, WINDOW_WIDTH, WINDOW_HEIGHT));
      Mat hls_test(hls_each_window[cnt], cv::Rect(windows[i].first, windows[i].second, WINDOW_WIDTH, WINDOW_HEIGHT));
      Mat gray_test(gray_each_window[cnt], cv::Rect(windows[i].first, windows[i].second, WINDOW_WIDTH, WINDOW_HEIGHT));
      float result = test_one_window(rgb_test, hls_test, gray_test);
      // imwrite("wind/img" + to_string(test_count) + ".png", rgb_test);
      if(result >= proba_thresh && imgout){
        cout << "found: " << proba_thresh << endl;
      }
      test_count++;
    }
    cnt++;
  }
  t3 = std::chrono::system_clock::now();
  // cout << "test_count" << test_count << endl;

  double tmp1 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count()/1000;
  double tmp2 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t3-t2).count()/1000;
  double all = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t3-t1).count()/1000;
  cout << "preprocessing time : " << tmp1 << "[milisec]" << endl;
  cout << "classify time : " << tmp2 << "[milisec]" << endl;
  cout << "all time : " << all << "[milisec]" << endl;
}
int main(int argc, const char* argv[]){

  check_window();

  for(auto itr = widthkind.begin(); itr != widthkind.end(); ++itr) {
    int width = *itr;
    cout << width << ":" << mp[width].size() << endl;
  }
  Mat img = imread("frame.png");
  cout << img.cols << endl;
  test_one_frame(img);
  return 0;
}