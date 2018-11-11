#include <iostream>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include "forest.h"
using namespace std;
using namespace cv;

const int hist_bins = 10;

vector<unsigned char> ravel(cv::Mat img){
  vector<unsigned char> rst;
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
      rst.push_back(pix[0]);
      rst.push_back(pix[1]);
      rst.push_back(pix[2]);
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

int main(int argc, const char* argv[])
{
  Mat img = cv::imread("../data/red/image_0001.png", 1);

  // 画像の読み込みに失敗したらエラー終了する
  if(img.empty())
  {
    std::cerr << "Failed to open image file." << std::endl;
    return -1; 
  }
  //row is height
  //cols is width
  //calculate features
  /*cv::Size spatial_size(8, 8);
  cv::resize(img, img, spatial_size);

  */
  cv::Mat hls;
  cv::cvtColor(img, hls, CV_RGB2HLS);
  vector<unsigned char> spatial_hls_feature = ravel(hls);
  vector<unsigned char> spatial_rgb_feature = ravel(img);

  /*for(int i = 0; i < spatial_rgb_feature.size(); i++){
    cout << int(spatial_rgb_feature[i]) << ", ";
  }

  cout << endl;
  
  for(int i = 0; i < spatial_hls_feature.size(); i++){
    cout << int(spatial_hls_feature[i]) << ", ";
  }

  cout << endl;
  */
  vector<int> rgb_hist = hist(img);

  for(int i = 0; i < rgb_hist.size(); i++){
    cout << rgb_hist[i] << ", ";
    if(i % 10 == 9) cout << endl;
  }
  cout << endl;

  vector<int> hls_hist = hist(hls);

  for(int i = 0; i < hls_hist.size(); i++){
    cout << hls_hist[i] << ", ";
    if(i % 10 == 9) cout << endl;
  }
  cout << endl;
  // forest();
  

  // cv::imwrite("red.png", img);
  //predict
  /*cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
  cv::imshow("image", img);
  cv::waitKey(0);
  cv::destroyAllWindows();*/

  return 0;
}