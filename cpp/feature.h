#include <iostream>
#include <cmath>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

const int hist_bins = 12;
const unsigned char thresh[hist_bins] = {0, 21, 42, 64, 85,106, 128, 149, 170, 192, 213, 234};

void hog(cv::Mat img, double *dst){
  const int s_row = 32;//img.rows;
  const int s_col = 64;//img.cols;
  const int c_row = 12;
  const int c_col = 12;
  const int b_row = 2;
  const int b_col = 2;
  int n_cells_row = s_row / c_row; // number of cells along row-axis //2
  int n_cells_col = s_col / c_col; // number of cells along col-axis //5
  const int orientations = 8;

  //calculate gradient
  double g_col[32][64] = {0};
  double g_row[32][64] = {0};
  // cout << img.cols << " " << img.rows << endl;//64, 32
  for(int x = 0; x < img.cols; x++){
    for(int y = 2; y < img.rows; y++){
      g_row[y-1][x] = double(img.ptr<uchar>(y)[x]) - double(img.ptr<uchar>(y-2)[x]);
    }
  }
  for(int x = 2; x < img.cols; x++){
    for(int y = 0; y < img.rows; y++){
      g_col[y][x-1] = double(img.ptr<uchar>(y)[x]) - double(img.ptr<uchar>(y)[x-2]);
    }
  }
  //calculate magnitude and orient
  double magnitude[32][64];
  int orient[32][64];
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      magnitude[y][x] = sqrt(g_row[y][x] * g_row[y][x] + g_col[y][x] * g_col[y][x]);
      double tmporient = fmod(atan2(g_row[y][x], g_col[y][x]) * 180.0 / M_PI, 180.0);
      orient[y][x] = tmporient < 0 ? tmporient + 180.0 : tmporient;
    }
  }
  // cout << orient[10][10] << endl;
  double threshold[orientations+1] = {0, 22.5, 45.0, 67.5, 90.0, 112.5, 135.0, 157.5, 180.0};
  //make histogram for each block
  double orientation_histogram[n_cells_row][n_cells_col][orientations] = {0};
  for(int i = 0; i < orientations; i++){
    //iteration for each cell
    for(int y = 0; y < n_cells_row; y++){
      for(int x = 0; x < n_cells_col; x++){
        double total = 0;
        for(int yy = 0; yy < c_row; yy++){
          for(int xx = 0; xx < c_col; xx++){
            int ny = y * c_row + yy;
            int nx = x * c_col + xx;
            if(threshold[i] <= orient[ny][nx] && orient[ny][nx] < threshold[i+1]) total += magnitude[ny][nx];
          }
        }
        orientation_histogram[y][x][i] = (double)total / (double)(c_row * c_col);
      }
    }
  }

  //normalize for each block
  int n_blocks_row = (n_cells_row - b_row) + 1;
  int n_blocks_col = (n_cells_col - b_col) + 1;
  double normalized_blocks[n_blocks_row][n_blocks_col][b_row][b_col][orientations] = {0};
  const double eps = 1e-5;
  for(int y = 0; y < n_blocks_row; y++){
    for(int x = 0; x < n_blocks_col; x++){
      //set unnormalized initial value
      for(int yy = 0; yy < b_row; yy++){
        for(int xx = 0; xx < b_col; xx++){
          for(int i = 0; i < orientations; i++){
            int cell_y = y + yy;
            int cell_x = x + xx;
            normalized_blocks[y][x][cell_y][cell_x][i] = orientation_histogram[cell_y][cell_x][i];
          }
        }
      }
      //calculate square sum and root_sum_with_eps
      double square_sum = 0;
      for(int yy = 0; yy < b_row; yy++){
        for(int xx = 0; xx < b_col; xx++){
          for(int i = 0; i < orientations; i++){
          int cell_y = y + yy;
          int cell_x = x + xx;
            double val = normalized_blocks[y][x][cell_y][cell_x][i];
            square_sum += val * val;
          }
        }
      }
      double root_sum_with_eps = sqrt(square_sum + eps * eps);

      //divide with root_sum_with_eps and clamp value
      for(int yy = 0; yy < b_row; yy++){
        for(int xx = 0; xx < b_col; xx++){
          for(int i = 0; i < orientations; i++){
            int cell_y = y + yy;
            int cell_x = x + xx;
            normalized_blocks[y][x][cell_y][cell_x][i] = min(normalized_blocks[y][x][cell_y][cell_x][i] / root_sum_with_eps, 0.2);
          }
        }
      }

      //recalculate root_sum_with_eps
      double square_sum2 = 0;
      for(int yy = 0; yy < b_row; yy++){
        for(int xx = 0; xx < b_col; xx++){
          for(int i = 0; i < orientations; i++){
            int cell_y = y + yy;
            int cell_x = x + xx;
            double val = normalized_blocks[y][x][cell_y][cell_x][i];
            square_sum2 += val * val;
          }
        }
      }
      double root_sum_with_eps2 = sqrt(square_sum2 + eps * eps);
      
      //divide with root_sum_with_eps2
      for(int yy = 0; yy < b_row; yy++){
        for(int xx = 0; xx < b_col; xx++){
          for(int i = 0; i < orientations; i++){
            int cell_y = y + yy;
            int cell_x = x + xx;
            normalized_blocks[y][x][cell_y][cell_x][i] /= root_sum_with_eps2;
          }
        }
      }
    }
  }

  //ravel each feature value
  // double hog_feature[n_blocks_row * n_blocks_col * b_row * b_col* orientations];
  int cnt = 0;
  for(int y = 0; y < n_blocks_row; y++){
    for(int x = 0; x < n_blocks_col; x++){
      for(int yy = 0; yy < b_row; yy++){
        for(int xx = 0; xx < b_col; xx++){
          for(int i = 0; i < orientations; i++){
            int cell_y = y + yy;
            int cell_x = x + xx;
            dst[cnt++] = normalized_blocks[y][x][cell_y][cell_x][i];
          }
        }
      }
    }
  }
}
// void ravel(cv::Mat img, int* dst){
void ravel(cv::Mat img, double* dst){
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

// void hist(cv::Mat img, int* dst){
void hist(cv::Mat img, double* dst){
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
        if(thresh[0] <= pix[0] && pix[0] < thresh[1]) dst[0]++;
        else if(thresh[1] <= pix[0] && pix[0] < thresh[2]) dst[1]++;
        else if(thresh[2] <= pix[0] && pix[0] < thresh[3]) dst[2]++;
        else if(thresh[3] <= pix[0] && pix[0] < thresh[4]) dst[3]++;
        else if(thresh[4] <= pix[0] && pix[0] < thresh[5]) dst[4]++;
        else if(thresh[5] <= pix[0] && pix[0] < thresh[6]) dst[5]++;
        else if(thresh[6] <= pix[0] && pix[0] < thresh[7]) dst[6]++;
        else if(thresh[7] <= pix[0] && pix[0] < thresh[8]) dst[7]++;
        else if(thresh[8] <= pix[0] && pix[0] < thresh[9]) dst[8]++;
        else if(thresh[9] <= pix[0] && pix[0] < thresh[10]) dst[9]++;
        else if(thresh[10] <= pix[0] && pix[0] < thresh[11]) dst[10]++;
        else dst[11]++;

        if(thresh[0] <= pix[1] && pix[1] < thresh[1]) dst[hist_bins + 0]++;
        else if(thresh[1] <= pix[1] && pix[1] < thresh[2]) dst[hist_bins + 1]++;
        else if(thresh[2] <= pix[1] && pix[1] < thresh[3]) dst[hist_bins + 2]++;
        else if(thresh[3] <= pix[1] && pix[1] < thresh[4]) dst[hist_bins + 3]++;
        else if(thresh[4] <= pix[1] && pix[1] < thresh[5]) dst[hist_bins + 4]++;
        else if(thresh[5] <= pix[1] && pix[1] < thresh[6]) dst[hist_bins + 5]++;
        else if(thresh[6] <= pix[1] && pix[1] < thresh[7]) dst[hist_bins + 6]++;
        else if(thresh[7] <= pix[1] && pix[1] < thresh[8]) dst[hist_bins + 7]++;
        else if(thresh[8] <= pix[1] && pix[1] < thresh[9]) dst[hist_bins + 8]++;
        else if(thresh[9] <= pix[1] && pix[1] < thresh[10]) dst[hist_bins + 9]++;
        else if(thresh[10] <= pix[1] && pix[1] < thresh[11]) dst[hist_bins + 10]++;
        else dst[hist_bins + 11]++;

        if(thresh[0] <= pix[2] && pix[2] < thresh[1]) dst[hist_bins * 2 + 0]++;
        else if(thresh[1] <= pix[2] && pix[2] < thresh[2]) dst[hist_bins * 2 + 1]++;
        else if(thresh[2] <= pix[2] && pix[2] < thresh[3]) dst[hist_bins * 2 + 2]++;
        else if(thresh[3] <= pix[2] && pix[2] < thresh[4]) dst[hist_bins * 2 + 3]++;
        else if(thresh[4] <= pix[2] && pix[2] < thresh[5]) dst[hist_bins * 2 + 4]++;
        else if(thresh[5] <= pix[2] && pix[2] < thresh[6]) dst[hist_bins * 2 + 5]++;
        else if(thresh[6] <= pix[2] && pix[2] < thresh[7]) dst[hist_bins * 2 + 6]++;
        else if(thresh[7] <= pix[2] && pix[2] < thresh[8]) dst[hist_bins * 2 + 7]++;
        else if(thresh[8] <= pix[2] && pix[2] < thresh[9]) dst[hist_bins * 2 + 8]++;
        else if(thresh[9] <= pix[2] && pix[2] < thresh[10]) dst[hist_bins * 2 + 9]++;
        else if(thresh[10] <= pix[2] && pix[2] < thresh[11]) dst[hist_bins * 2 + 10]++;
        else dst[hist_bins * 2 + 11]++;
      }
    }
  }
}

