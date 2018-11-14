#include <iostream>
#include <chrono>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include "feature.h"
#include "forest.h"
using namespace std;
using namespace cv;

int main(int argc, const char* argv[])
{
  //row is height
  //cols is width
  //calculate features
  long double sum1, sum2, sum3, sum4, sum5, sum6, sum7;
  sum1 = sum2 = sum3 = sum4 = sum5 = sum6 = sum7 = 0;
  std::chrono::system_clock::time_point  t1, t2, t3, t4, t5, t6, t7;
  for(int i = 0; i < 126; i++){
    Mat img = cv::imread("../crop_test/crop/image" + to_string(i) + ".png", 1);
    Mat resized_img;
    cv::resize(img, resized_img, cv::Size(64 ,32)); //height = yrange = 64, width = xrange = 32

    t1 = std::chrono::system_clock::now();
    cv::Size spatial_size(8, 8);
    Mat spatial_rgb, spatial_hls;
    cv::resize(resized_img, spatial_rgb, spatial_size);
    cv::cvtColor(spatial_rgb, spatial_hls, CV_RGB2HLS);
    
    t2 = std::chrono::system_clock::now();
    double feature[584] = {0};
    ravel(spatial_hls, feature);
    ravel(spatial_rgb, feature + 192);

    t3 = std::chrono::system_clock::now();
    cv::Mat hls;
    cv::cvtColor(resized_img, hls, CV_RGB2HLS);
    t4 = std::chrono::system_clock::now();
    hist(resized_img, feature + 192 * 2);
    hist(hls, feature + 192 * 2 + 36);

    t5 = std::chrono::system_clock::now();
    cv::Mat gray;
    cv::cvtColor(resized_img, gray, CV_RGB2GRAY);
    hog(gray, feature + 192 * 2 + 36 * 2);
    // cout << feature[583] << endl;
    // vector<int> single_feature;
    // single_feature.insert(single_feature.end(), spatial_hls_feature.begin(), spatial_hls_feature.end());
    // single_feature.insert(single_feature.end(), spatial_rgb_feature.begin(), spatial_rgb_feature.end());
    // single_feature.insert(single_feature.end(), hls_hist.begin(), hls_hist.end());
    // single_feature.insert(single_feature.end(), rgb_hist.begin(), rgb_hist.end());
    
    t6 = std::chrono::system_clock::now();
    // int a[456];
    // for(int j = 0; j < 456; j++){
    //   cout << feature[j] << ", ";
    // } 
    // cout << endl;
    clf_res res = randomforest_classifier(feature);
    float red_proba = (float)res.red / (res.not_red + res.red);
    if(red_proba >= 0.65) cout << i << " : " << red_proba << endl;
    t7 = std::chrono::system_clock::now();

    double tmp1 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count();
    double tmp2 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t3-t2).count();
    double tmp3 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t4-t3).count();
    double tmp4 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t5-t4).count();
    double tmp5 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t6-t5).count();
    double tmp6 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t7-t6).count();
    double tmp7 = (long double)std::chrono::duration_cast<std::chrono::microseconds>(t7-t1).count();
    sum1 += tmp1;
    sum2 += tmp2;
    sum3 += tmp3;
    sum4 += tmp4;
    sum5 += tmp5;
    sum6 += tmp6;
    sum7 += tmp7;
    cout << "tmp1:" << fixed << setprecision(10) << tmp1 << endl;
    cout << "tmp2:" << tmp2 << endl;
    cout << "tmp3:" << tmp3 << endl;
    cout << "tmp4:" << tmp4 << endl;
    cout << "tmp5:" << tmp5 << endl;
    cout << "tmp6:" << tmp6 << endl;
    cout << "tmp7:" << tmp7 << endl;

    cout << endl;
     
  }
  cout << "ravel preprocessing time:" << sum1/1000 << "[milisec]" << endl;
  cout << "ravel time:" << sum2/1000 << "[milisec]" << endl;
  cout << "hist preprocessing time:" << sum3/1000 << "[milisec]" << endl;
  cout << "hist time:" << sum4/1000 << "[milisec]" << endl;
  cout << "hog time:" << sum5/1000 << "[milisec]" << endl;
  cout << "dtree time:" << sum6/1000 << "[milisec]" << endl;
  cout << "all time:" << sum7/1000 << "[milisec]" << endl;

  // forest();
  

  // cv::imwrite("red.png", img);
  //predict
  /*cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
  cv::imshow("image", img);
  cv::waitKey(0);
  cv::destroyAllWindows();*/

  return 0;
}