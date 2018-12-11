#include <iostream>
#include <iostream>
#include <chrono>
#include <utility>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include "feature.h"
#include "forest.h"
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

  float proba = randomforest_classifier(feature);
  // float red_proba = (float)res.red / (res.not_red + res.red);
  return proba;
}

int windcnt = 0;
vector<pair<pair<int, int>, pair<int, int>>> windowvec;

int cross_signal_range_sx = 180;
int cross_signal_range_sy = 297;
int cross_signal_range_ex = 430;
int cross_signal_range_ey = 327;

// int cross_signal_range_sx = 180;
// int cross_signal_range_sy = 345;
// int cross_signal_range_ex = 440;
// int cross_signal_range_ey = 380;
int cross_signal_x_step = 15;
int cross_signal_y_step = 5;
int cross_signal_height_upper = 31;
int cross_signal_height_step = 5;
//sx, sy, ex, ey indicates the coordinate of the left upper point of each window
int left_upper_x = 999;
int left_upper_y = 999;
int right_lower_x = -1;
int right_lower_y = -1;

void makewindow(){
    for(int height = 20; height < cross_signal_height_upper; height+=cross_signal_height_step){
        int width = height * 2;
        for(int y = cross_signal_range_sy; y <= cross_signal_range_ey; y+=cross_signal_y_step){
            for(int x = cross_signal_range_sx; x <= cross_signal_range_ex; x+=cross_signal_x_step){
            	left_upper_x = min(x, left_upper_x);
            	left_upper_y = min(y, left_upper_y);
            	right_lower_x = max(x + width, right_lower_x);
            	right_lower_y = max(y + height, right_lower_y);
				windowvec.push_back(make_pair(make_pair(x, y), make_pair(x+width, y+height)));			
			}
		}
	}
	windcnt++;
}
int main(){
	cv::VideoCapture cap(1);
	if(!cap.isOpened()){
		cout << "failed" << endl;
		return -1;
	}

	makewindow();

	while(1){
		cv::Mat frame;
		cap >> frame; // get a new frame from camera
		cv::Mat frame_copy = frame.clone();
		for(int i = 0; i < windowvec.size(); i++){
			int sx = windowvec[i].first.first;
			int sy = windowvec[i].first.second;
			int ex = windowvec[i].second.first;
			int ey = windowvec[i].second.second;
			Mat test_img = frame(cv::Rect(sx, sy, ex-sx, ey-sy));
			float proba = test_one_image(test_img);
			if(proba >= 0.65){
				cout << proba << " " << sx << sy << " " << ex << " " << ey << endl;
				rectangle(frame_copy, Point(sx, sy), Point(ex, ey), Scalar(0,0,200), 2); //x,y //Scaler = B,G,R
		        cv::putText(frame_copy, to_string(proba), cv::Point(sx+5,sy+5), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255,0,0), 1, CV_AA);
			}
		}
		rectangle(frame_copy, Point(left_upper_x, left_upper_y), Point(right_lower_x, right_lower_y), Scalar(0,200,0), 1); //x,y //Scaler = B,G,R
		cout << "window_num : " << windowvec.size() << endl;
		imshow("result", frame_copy);
		waitKey(1);


		// // BGRからHSVへ変換
		// Mat hsv_image, mask_image1, mask_image2, output_image;
		// Mat mask_combined;
		// cvtColor(frame, hsv_image, CV_BGR2HSV_FULL);

		// inRange(hsv_image, Scalar(0, 80, 0, 0), Scalar(20, 255, 255, 0), mask_image1);
		// inRange(hsv_image, Scalar(200, 80, 0, 0), Scalar(255, 255, 255, 0), mask_image2);
		// // cv::Vec<unsigned char, 3> pix = 	hsv_image.ptr<cv::Vec3b>(362)[386];
		// // cout << int(pix[0]) << " " << int(pix[1]) << " " << int(pix[2]) << endl;
		// mask_combined = mask_image1 + mask_image2;

		// imshow("mask1", mask_combined);
		// waitKey(1);


	}
	
	return 0;
}