#include <iostream>
#include <cmath>
#include <vector>
#include <string.h>
#include <opencv2/opencv.hpp>
#include "rf.hpp"
#include "hls_video.h"
#include "feature.h"
using namespace std;
using namespace cv;

int main(){
	//resize image to 64x32
	cv::Mat img = cv::imread("window.png");
	cv::Mat resized_bgr;
	cv::resize(img, resized_bgr, cv::Size(64, 32));
	//convert to GRAY
	cv::Mat resized_gray;
	cv::cvtColor(resized_bgr, resized_gray, CV_BGR2GRAY);

	//execute feature extraction on SW
	cv::Mat resized_hsv;
	cv::Mat spatial_bgr, spatial_hsv;
	cv::cvtColor(resized_bgr, resized_hsv, CV_BGR2HSV);
	cv::resize(resized_bgr, spatial_bgr, cv::Size(8, 8));
	cv::resize(resized_hsv, spatial_hsv, cv::Size(8, 8));
	unsigned short sw_result[672];//8*8*3*2+8*4*9
	ravel(spatial_bgr, sw_result);
	ravel(spatial_hsv, sw_result + 192);
	lite_hog(resized_gray, sw_result + 192*2);

	//make array for HW b.. g.. r..
	unsigned char image_buffer[32*64*3];
	for(int y = 0; y < 32; y++){
		for(int x = 0; x < 64; x++){
			 cv::Vec<unsigned char, 3> pix = resized_bgr.ptr<cv::Vec3b>(y)[x];
			 image_buffer[y * 64 + x] 				= ((unsigned char)(pix[0])); //b
			 image_buffer[y * 64 + x + 32 * 64] 	= ((unsigned char)(pix[1])); //g
			 image_buffer[y * 64 + x + 32 * 64 * 2] = ((unsigned char)(pix[2])); //r
		}
	}
	//execute feature extraction on HW
	unsigned short hw_result[672];
	calc_randomforest(image_buffer, hw_result);

	//compare SW result and HW result
	for(int i = 0; i < 672; i++){
		if(int(sw_result[i]) != int(hw_result[i])){
			cout << i << " : " << int(sw_result[i]) << " " << int(hw_result[i]) << endl;
		}
	}

	//gray scale test
	for(int y = 0; y < 32; y++){
		for(int x = 0; x < 64; x++){
			unsigned char cv_gray_pix = resized_gray.ptr<unsigned char>(y)[x];

			int b = image_buffer[y * 64 + x];
			int g = image_buffer[y * 64 + x + 32 * 64];
			int r = image_buffer[y * 64 + x + 32 * 64 * 2];
			int my_gray_pix = (299 * r + 587 * g + 114 * b)/1000;
			cout << int(cv_gray_pix) << " " << int(my_gray_pix) << " " << int(cv_gray_pix) - int(my_gray_pix) << endl;
		}
	}

	return 0;
}
