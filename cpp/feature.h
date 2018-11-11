#include <iostream>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

const int hist_bins = 12;

vector<int> ravel(cv::Mat img){
  vector<int> rst;
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
      rst.push_back(int(pix[0]));
      rst.push_back(int(pix[1]));
      rst.push_back(int(pix[2]));
    }
  }
  return rst;
}

vector<int> hist(cv::Mat img){
  vector<int> rst(hist_bins*3);
  int range_min = 0;
  int range_max = 256;//[0,256)
  vector<float> thresh;
  // vector<int> channel1_hist(hist_bins), channel2_hist(hist_bins), channel3_hist(hist_bins);
  for(int i = 0; i < hist_bins; i++) thresh.push_back((float)((float)i*(range_max - range_min)/hist_bins));
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      for(int i = 0; i < hist_bins; i++){
        cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
        //channel1
        if(i != hist_bins - 1 && thresh[i] <= (int)pix[0] && (int)pix[0] < thresh[i+1]) rst[i]++;
        else if(i == hist_bins - 1 && thresh[i] <= (int)pix[0]) rst[i]++;
        //channel2
        if(i != hist_bins - 1 && thresh[i] <= (int)pix[1] && (int)pix[1] < thresh[i+1]) rst[i+hist_bins]++;
        else if(i == hist_bins - 1 && thresh[i] <= (int)pix[1]) rst[i+hist_bins]++;
        //channel3
        if(i != hist_bins - 1 && thresh[i] <= (int)pix[2] && (int)pix[2] < thresh[i+1]) rst[i+hist_bins*2]++;
        else if(i == hist_bins - 1 && thresh[i] <= (int)pix[2]) rst[i+hist_bins*2]++;
        
      }
    }
  } 
  return rst;
}
