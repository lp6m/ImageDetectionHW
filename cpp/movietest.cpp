#include <iostream>
#include <chrono>
#include <vector>
#include <string>
#include <sstream>

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
  Mat resized_img, gray;
  cv::resize(img, resized_img, cv::Size(64 ,32), INTER_NEAREST);
  cv::Mat resized_hls;
  cv::cvtColor(resized_img, resized_hls, CV_BGR2HSV);

  cv::Size spatial_size(8, 8);
  Mat spatial_rgb, spatial_hls;
  cv::resize(resized_img, spatial_rgb, spatial_size, INTER_LINEAR);
  cv::resize(resized_hls, spatial_hls, spatial_size, INTER_LINEAR);
  
  unsigned short feature[672] = {0};
  ravel(spatial_hls, feature);
  ravel(spatial_rgb, feature + 192);
  // hist(resized_hls, feature + 192 * 2);
  // hist(resized_img, feature + 192 * 2 + 36);

  cv::cvtColor(resized_img, gray, CV_BGR2GRAY);
  lite_hog(gray, feature + 192 * 2);

  float red_proba = randomforest_classifier(feature);
  return red_proba;
}

int main(int argc, const char* argv[])
{

  std::chrono::system_clock::time_point  t1, t2, t3, t4, t5, t6, t7;
  int candidate_max = -1;
  for(int i = 1; i < 515; i++){
      t1 = std::chrono::system_clock::now();

      ostringstream sout;
      sout << std::setfill('0') << std::setw(4) << i;
      string s = sout.str();
      string filepath = "../video/outtest4/image_" + s + ".png";
      string resultpath = "./ans/outtest4_2/image_" + s + ".png";
      cout << filepath << endl;
      cv::Mat frame;
      frame = cv::imread(filepath);
      cv::Mat frame_copy = frame.clone();

      //prepare for removing arienai
      cv::Mat hls;
      cv::cvtColor(frame, hls, CV_RGB2HLS);
      int d[480][640];
      int sum = 0;
      for(int y = 0; y < frame.rows; y++){
        int tmpsum = 0;
        for(int x = 0; x < frame.cols; x++){
          cv::Vec<unsigned char, 3> pix = hls.ptr<cv::Vec3b>(y)[x];
          if((pix[0] < 20 || pix[0] > 200) && pix[1] > 128){
            tmpsum++;
          }
          if(y == 0) d[y][x] = tmpsum;
          else d[y][x] = d[y-1][x] + tmpsum;
        }
      }

      int candidate_count = 0;
      for(int i = 0; i < window_num; i++){
        cv::Mat out;
        int sy = w[i][0][0];
        int sx = w[i][1][0];
        int ey = w[i][0][1];
        int ex = w[i][1][1];
        //remove arienai
        int satisfy_num = d[ey-1][ex-1] - d[ey-1][sx-1] - d[sy-1][ex-1] + d[sy-1][sx-1];
        // if(satisfy_num < (ey - sy) * (ex - sx) * 2 / 100) continue;
        // cout << "satisfy num" << satisfy_num << endl;
        candidate_count++;
        cv::Mat cropped(frame, cv::Rect(sx, sy, ex - sx, ey - sy));
        // cv::imwrite("crop.png", cropped);
        float proba = test_one_image(cropped);

        if(proba >= 0.65){
          rectangle(frame_copy, Point(sx, sy), Point(ex, ey), Scalar(0,0,200), 2); //x,y //Scaler = B,G,R
          cv::putText(frame_copy, to_string(proba), cv::Point(sx+5,sy+5), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255,0,0), 1, CV_AA);
        }
      }
      candidate_max = max(candidate_count, candidate_max);
      cout << "candidate :" << candidate_count << " , max_candidate :" << candidate_max << endl; 
      // cv::imshow("window", frame_copy);
      cv::imwrite(resultpath, frame_copy);

      // int key = cv::waitKey(1);
      // if(key == 113)//qボタンが押されたとき
      // {
      //     break;//whileループから抜ける．
      // }
      t2 = std::chrono::system_clock::now();
      //show fps
      double elapsed = (double)std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count();
      cout << "elapsed:" << elapsed << "[milisec]" << endl;
      cout << "fps:" << 1000.0/elapsed << "[fps]" << endl;
  }
  cv::destroyAllWindows();
  return 0;
}