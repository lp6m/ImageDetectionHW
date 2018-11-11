#include <iostream>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

const int hist_bins = 12;
const float thresh[hist_bins] = {0, 256.0/12.0, 2.0*256.0/12.0, 3.0*256.0/12.0, 4.0*256.0/12.0, 5.0*256.0/12.0, 6.0*256.0/12.0,
7.0*256.0/12.0, 8.0*256.0/12.0, 9.0*256.0/12.0, 10.0*256.0/12.0, 11.0*256.0/12.0};

void ravel(cv::Mat img, int* dst){
  vector<int> rst;
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
      dst[3 * (y * img.cols + x)] = int(pix[0]);
      dst[3 * (y * img.cols + x) + 1] = int(pix[1]);
      dst[3 * (y * img.cols + x) + 2] = int(pix[2]);
    }
  }
}

void hist(cv::Mat img, int* dst){
  // vector<int> rst(hist_bins*3);
  // int range_min = 0;
  // int range_max = 256;//[0,256)
  // vector<float> thresh;
  // vector<int> channel1_hist(hist_bins), channel2_hist(hist_bins), channel3_hist(hist_bins);
  //for(int i = 0; i < hist_bins; i++) thresh.push_back((float)((float)i*(range_max - range_min)/hist_bins));
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      for(int i = 0; i < hist_bins; i++){
        cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
        //channel1
        if(i != hist_bins - 1 && thresh[i] <= (int)pix[0] && (int)pix[0] < thresh[i+1]) dst[i]++;
        else if(i == hist_bins - 1 && thresh[i] <= (int)pix[0]) dst[i]++;
        //channel2
        if(i != hist_bins - 1 && thresh[i] <= (int)pix[1] && (int)pix[1] < thresh[i+1]) dst[i+hist_bins]++;
        else if(i == hist_bins - 1 && thresh[i] <= (int)pix[1]) dst[i+hist_bins]++;
        //channel3
        if(i != hist_bins - 1 && thresh[i] <= (int)pix[2] && (int)pix[2] < thresh[i+1]) dst[i+hist_bins*2]++;
        else if(i == hist_bins - 1 && thresh[i] <= (int)pix[2]) dst[i+hist_bins*2]++;
        
      }
    }
  }
}
