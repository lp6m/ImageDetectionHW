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
  cout << red_proba << endl;
  return red_proba;
}

int main(int argc, const char* argv[])
{
  cv::VideoCapture cap(1);
  if(!cap.isOpened()){
    cout << "failed" << endl;
    return -1;
  }

  while(1){
      cv::Mat frame;
      cap >> frame; // get a new frame from camera
      cv::Mat frame_copy = frame.clone();
      for(int i = 0; i < 126; i++){
        cv::Mat out;
        int sy = w[i][0][0];
        int sx = w[i][1][0];
        int ey = w[i][0][1];
        int ex = w[i][1][1];
        cv::Mat cropped(frame, cv::Rect(sx, sy, ex - sx, ey - sy));
        cv::imwrite("crop.png", cropped);
        float proba = test_one_image(cropped);

        if(proba >= 0.65) rectangle(frame_copy, Point(sx, sy), Point(ex, ey), Scalar(0,0,200), 3); //x,y //Scaler = B,G,R
      }
      cv::imshow("window", frame_copy);//画像を表示．

      int key = cv::waitKey(1);
      if(key == 113)//qボタンが押されたとき
      {
          break;//whileループから抜ける．
      }
  }
  cv::destroyAllWindows();
  return 0;
}