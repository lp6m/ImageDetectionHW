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
  Mat img = cv::imread("../crop_test/crop/image83.png", 1);
  Mat resized_rgb;
  cv::resize(img, resized_rgb, cv::Size(64 ,32)); //height = yrange = 64, width = xrange = 32
  cout << "width" << " " <<  resized_rgb.size().width << endl;
  Mat gray;
  cv::cvtColor(resized_rgb, gray, CV_RGB2GRAY);
  hog(gray);
  return 0;
}