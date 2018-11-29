#include <iostream>
#include <chrono>
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

int main(int argc, const char* argv[]){
  Mat img, resized_img, gray;
  img = cv::imread("../crop_test/crop/image83.png");
  cv::resize(img, resized_img, cv::Size(64 ,32));

  cv::Size spatial_size(8, 8);
  Mat spatial_rgb, spatial_hls;
  cv::resize(img, spatial_rgb, spatial_size);
  cv::cvtColor(spatial_rgb, spatial_hls, CV_RGB2HLS);
  
  double feature[744] = {0};
  ravel(spatial_hls, feature);
  ravel(spatial_rgb, feature + 192);

  cv::Mat resized_hls;
  cv::cvtColor(resized_img, resized_hls, CV_RGB2HLS);
  hist(resized_img, feature + 192 * 2);
  hist(resized_hls, feature + 192 * 2 + 36);

  cv::cvtColor(resized_img, gray, CV_RGB2GRAY);
  lite_hog(gray, feature + 192 * 2 + 36 * 2);

  for(int j = 0; j < 744; j++){
      cout << feature[j] << endl;
  }
}
 