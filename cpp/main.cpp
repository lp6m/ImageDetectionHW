#include <iostream>
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
  Mat img = cv::imread("../crop_test/crop/image106.png", 1);

  // 画像の読み込みに失敗したらエラー終了する
  if(img.empty())
  {
    std::cerr << "Failed to open image file." << std::endl;
    return -1; 
  }
  //row is height
  //cols is width
  //calculate features
  cv::Size spatial_size(8, 8);
  Mat resized_rgb, resized_hls;
  cv::resize(img, resized_rgb, spatial_size);
  cv::cvtColor(resized_rgb, resized_hls, CV_RGB2HLS);
  
  vector<int> spatial_hls_feature = ravel(resized_hls);
  vector<int> spatial_rgb_feature = ravel(resized_rgb);

  cv::Mat hls;
  cv::cvtColor(img, hls, CV_RGB2HLS);
  vector<int> rgb_hist = hist(img);
  vector<int> hls_hist = hist(hls);

  vector<int> single_feature;
  single_feature.insert(single_feature.end(), spatial_hls_feature.begin(), spatial_hls_feature.end());
  single_feature.insert(single_feature.end(), spatial_rgb_feature.begin(), spatial_rgb_feature.end());
  single_feature.insert(single_feature.end(), hls_hist.begin(), hls_hist.end());
  single_feature.insert(single_feature.end(), rgb_hist.begin(), rgb_hist.end());
  
  int a[456];
  for(int i = 0; i < 456; i++) a[i] = single_feature[i];
  clf_res res = randomforest_classifier(a);
  cout << res.not_red << ", " << res.red << endl;


  // forest();
  

  // cv::imwrite("red.png", img);
  //predict
  /*cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
  cv::imshow("image", img);
  cv::waitKey(0);
  cv::destroyAllWindows();*/

  return 0;
}