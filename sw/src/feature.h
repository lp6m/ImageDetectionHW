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

#define HOG_WIDTH 64
#define HOG_HEIGHT 32
#define CELL_SIZE_ROW 8
#define CELL_SIZE_COL 8
#define BLOCK_SIZE_ROW 2
#define BLOCK_SIZE_COL 2
#define N_CELLS_ROW HOG_HEIGHT/CELL_SIZE_ROW //4
#define N_CELLS_COL HOG_WIDTH/CELL_SIZE_COL //8
#define N_BLOCK_ROW HOG_HEIGHT/(CELL_SIZE_ROW * BLOCK_SIZE_ROW) //2
#define N_BLOCK_COL HOG_WIDTH/(CELL_SIZE_COL * BLOCK_SIZE_COL) //4
#define HISTOGRAMSIZE N_CELLS_ROW * N_CELLS_COL * 9 //4*8*9


inline int approx_distance(int dx, int dy){
  int min, max; //uint
  if(dx < 0) dx = -dx;
  if(dy < 0) dy = -dy;

  if(dx < dy){
	min = dx;
	max = dy;
  }else{
	min = dy;
	max = dx;
  }

  //coefficients equivalent to (123/128 * max) and (51/128*min)
  return ((( max << 8 ) + ( max << 3 ) - ( max << 4 ) - ( max << 1 ) +
		   ( min << 7 ) - ( min << 5 ) + ( min << 3 ) - ( min << 1 )) >> 8 );
}

vector<int> descrip_index_test;

void lite_hog(cv::Mat img, unsigned short* dst, bool approx_mode=true){
  int descriptor[HISTOGRAMSIZE]={0};
  int sum_of_block[N_BLOCK_ROW * N_BLOCK_COL]={0};
  for(int i = 0; i < HISTOGRAMSIZE; i++) descriptor[i] = 0;
  for(int i = 0; i < N_BLOCK_ROW * N_BLOCK_COL; i++) sum_of_block[i] = 0;
  int lut0[256] = {0,0,0,1,1,1,2,2,2,3,3,3,4,4,5,5,5,6,6,6,7,7,7,8,8,9,9,9,10,10,10,11,11,11,12,12,13,13,13,14,14,14,15,15,15,16,16,17,17,17,18,18,18,19,19,19,20,20,21,21,21,22,22,22,23,23,23,24,24,25,25,25,26,26,26,27,27,27,28,28,29,29,29,30,30,30,31,31,31,32,32,33,33,33,34,34,34,35,35,35,36,36,37,37,37,38,38,38,39,39,39,40,40,41,41,41,42,42,42,43,43,43,44,44,45,45,45,46,46,46,47,47,47,48,48,49,49,49,50,50,50,51,51,51,52,52,53,53,53,54,54,54,55,55,55,56,56,57,57,57,58,58,58,59,59,59,60,60,61,61,61,62,62,62,63,63,63,64,64,65,65,65,66,66,66,67,67,67,68,68,69,69,69,70,70,70,71,71,71,72,72,73,73,73,74,74,74,75,75,75,76,76,77,77,77,78,78,78,79,79,79,80,80,81,81,81,82,82,82,83,83,83,84,84,85,85,85,86,86,86,87,87,87,88,88,89,89,89,90,90,90,91,91,91,92,92};
  int lut1[256] = {0,0,1,2,3,4,5,5,6,7,8,9,10,10,11,12,13,14,15,15,16,17,18,19,20,20,21,22,23,24,25,26,26,27,28,29,30,31,31,32,33,34,35,36,36,37,38,39,40,41,41,42,43,44,45,46,46,47,48,49,50,51,52,52,53,54,55,56,57,57,58,59,60,61,62,62,63,64,65,66,67,67,68,69,70,71,72,72,73,74,75,76,77,78,78,79,80,81,82,83,83,84,85,86,87,88,88,89,90,91,92,93,93,94,95,96,97,98,98,99,100,101,102,103,104,104,105,106,107,108,109,109,110,111,112,113,114,114,115,116,117,118,119,119,120,121,122,123,124,124,125,126,127,128,129,130,130,131,132,133,134,135,135,136,137,138,139,140,140,141,142,143,144,145,145,146,147,148,149,150,150,151,152,153,154,155,156,156,157,158,159,160,161,161,162,163,164,165,166,166,167,168,169,170,171,171,172,173,174,175,176,177,177,178,179,180,181,182,182,183,184,185,186,187,187,188,189,190,191,192,192,193,194,195,196,197,197,198,199,200,201,202,203,203,204,205,206,207,208,208,209,210,211,212,213,213};
  int lut2[256] = {0,1,3,5,6,8,10,12,13,15,17,19,20,22,24,25,27,29,31,32,34,36,38,39,41,43,44,46,48,50,51,53,55,57,58,60,62,63,65,67,69,70,72,74,76,77,79,81,83,84,86,88,89,91,93,95,96,98,100,102,103,105,107,108,110,112,114,115,117,119,121,122,124,126,127,129,131,133,134,136,138,140,141,143,145,147,148,150,152,153,155,157,159,160,162,164,166,167,169,171,172,174,176,178,179,181,183,185,186,188,190,191,193,195,197,198,200,202,204,205,207,209,210,212,214,216,217,219,221,223,224,226,228,230,231,233,235,236,238,240,242,243,245,247,249,250,252,254,255,257,259,261,262,264,266,268,269,271,273,274,276,278,280,281,283,285,287,288,290,292,294,295,297,299,300,302,304,306,307,309,311,313,314,316,318,319,321,323,325,326,328,330,332,333,335,337,338,340,342,344,345,347,349,351,352,354,356,358,359,361,363,364,366,368,370,371,373,375,377,378,380,382,383,385,387,389,390,392,394,396,397,399,401,402,404,406,408,409,411,413,415,416,418,420,421,423,425,427,428,430,432,434,435,437,439,441};
  int lut3[256] = {0,5,11,17,22,28,34,39,45,51,56,62,68,73,79,85,90,96,102,107,113,119,124,130,136,141,147,153,158,164,170,175,181,187,192,198,204,209,215,221,226,232,238,243,249,255,260,266,272,277,283,289,294,300,306,311,317,323,328,334,340,345,351,357,362,368,374,379,385,391,396,402,408,413,419,425,430,436,442,447,453,459,464,470,476,481,487,493,498,504,510,515,521,527,532,538,544,549,555,561,566,572,578,584,589,595,601,606,612,618,623,629,635,640,646,652,657,663,669,674,680,686,691,697,703,708,714,720,725,731,737,742,748,754,759,765,771,776,782,788,793,799,805,810,816,822,827,833,839,844,850,856,861,867,873,878,884,890,895,901,907,912,918,924,929,935,941,946,952,958,963,969,975,980,986,992,997,1003,1009,1014,1020,1026,1031,1037,1043,1048,1054,1060,1065,1071,1077,1082,1088,1094,1099,1105,1111,1116,1122,1128,1133,1139,1145,1150,1156,1162,1168,1173,1179,1185,1190,1196,1202,1207,1213,1219,1224,1230,1236,1241,1247,1253,1258,1264,1270,1275,1281,1287,1292,1298,1304,1309,1315,1321,1326,1332,1338,1343,1349,1355,1360,1366,1372,1377,1383,1389,1394,1400,1406,1411,1417,1423,1428,1434,1440,1445};

  for(int y = 0; y < N_BLOCK_ROW; y++){//2
	for(int x = 0; x < N_BLOCK_COL; x++){//4
	  for(int yy = 0; yy < CELL_SIZE_ROW*BLOCK_SIZE_ROW; yy++){//16
		for(int xx = 0; xx < CELL_SIZE_COL*BLOCK_SIZE_ROW; xx++){//16
		  int ny = (BLOCK_SIZE_ROW * CELL_SIZE_ROW) * y + yy;
		  int nx = (BLOCK_SIZE_COL * CELL_SIZE_COL) * x + xx;
		  //compute gradient
		  int mag = 0;
		  int bin_index;
		  if(ny == 0 || nx == 0 || ny == 31 || nx == 63){
			mag = 0;
			bin_index = 0;
		  }else{
			int Gx = int(img.ptr<uchar>(ny)[nx+1]) - int(img.ptr<uchar>(ny)[nx-1]);
			int Gy = int(img.ptr<uchar>(ny+1)[nx]) - int(img.ptr<uchar>(ny-1)[nx]);
			mag = (approx_mode ? (approx_distance(Gx, Gy)) : sqrt(Gx*Gx + Gy * Gy));
			if((Gx >= 0 && Gy >= 0) || (Gx <= 0 && Gy <= 0)){
			  if (abs(Gy) < lut0[abs(Gx)]) {bin_index = 0;}
			  else if (abs(Gy) < lut1[abs(Gx)]) {bin_index = 1;}
			  else if (abs(Gy) < lut2[abs(Gx)]) {bin_index = 2;}
			  else if (abs(Gy) < lut3[abs(Gx)]) {bin_index = 3;}
			  else {bin_index = 4;}
			} else{
			  if (abs(Gy) <  lut0[abs(Gx)]){bin_index = 4;}
			  else if (abs(Gy) <  lut1[abs(Gx)]) {bin_index = 5;}
			  else if (abs(Gy) <  lut2[abs(Gx)]) {bin_index = 6;}
			  else if (abs(Gy) <  lut3[abs(Gx)]) {bin_index = 7;}
			  else {bin_index = 8;}
			}
		  }
		  int block_index = y * N_BLOCK_COL + x;
		  int cy = yy / CELL_SIZE_ROW;
		  int cx = xx / CELL_SIZE_COL;
		  int cell_index = (ny / 8) * 8 + (nx / 8);
		  int descrip_index = cell_index * 9 + bin_index;
		  descriptor[descrip_index] += mag;
		  sum_of_block[block_index] += mag;}
	  }
	}
  }

  // int normalized[HISTOGRAMSIZE]={0};
  // for(int i = 0; i < HISTOGRAMSIZE; i++) normalized[i] = 0;
  int  average;
  unsigned int blkSize = 36;
  for(int by = 0; by < N_BLOCK_ROW; by++){//2
	for(int bx = 0; bx < N_BLOCK_COL; bx++){//4
	  int blkIdx = by * N_BLOCK_COL + bx;//0, 1.. 7
	  for (int i = 0; i < 36; i++) {
		//Average of block
		average = sum_of_block[blkIdx]/blkSize;
		//Normalization quantization method
		if (descriptor[blkIdx*36+i] > 2*average){
		  dst[blkIdx*36+i] = 409;
		}else if (descriptor[blkIdx*36+i]*4 > 7*average){
		  dst[blkIdx*36+i] = 358;
		}else if (descriptor[blkIdx*36+i]*4 > 6*average){
		  dst[blkIdx*36+i] = 307;
		}else if (descriptor[blkIdx*36+i]*4 > 5*average){
		  dst[blkIdx*36+i] = 256;
		}else if (descriptor[blkIdx*36+i] > average){
		  dst[blkIdx*36+i] = 204;
		}else if (descriptor[blkIdx*36+i]*4 > 3*average){
		  dst[blkIdx*36+i] = 153;
		}else if (descriptor[blkIdx*36+i]*2 > average){
		  dst[blkIdx*36+i] = 102;
		}else if (descriptor[blkIdx*36+i]*4 > average){
		  dst[blkIdx*36+i] = 51;
		}else {
		  dst[blkIdx*36+i] = 0;
		}
	  }
	}
  }
}

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

void ravel(cv::Mat img, unsigned short* dst){
  vector<int> rst;
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
      dst[3 * (y * img.cols + x)] = ((unsigned short)(pix[0]));
      dst[3 * (y * img.cols + x) + 1] = ((unsigned short)(pix[1]));
      dst[3 * (y * img.cols + x) + 2] = ((unsigned short)(pix[2]));
    }
  }
}

void hist(cv::Mat img, unsigned short* dst){
  for(int y = 0; y < img.rows; y++){
    for(int x = 0; x < img.cols; x++){
      cv::Vec<unsigned char, 3> pix = img.ptr<cv::Vec3b>(y)[x];
      if(thresh[0] <= pix[0] && pix[0] < thresh[1]) dst[0]+=1;
      else if(thresh[1] <= pix[0] && pix[0] < thresh[2]) dst[1]+=1;
      else if(thresh[2] <= pix[0] && pix[0] < thresh[3]) dst[2]+=1;
      else if(thresh[3] <= pix[0] && pix[0] < thresh[4]) dst[3]+=1;
      else if(thresh[4] <= pix[0] && pix[0] < thresh[5]) dst[4]+=1;
      else if(thresh[5] <= pix[0] && pix[0] < thresh[6]) dst[5]+=1;
      else if(thresh[6] <= pix[0] && pix[0] < thresh[7]) dst[6]+=1;
      else if(thresh[7] <= pix[0] && pix[0] < thresh[8]) dst[7]+=1;
      else if(thresh[8] <= pix[0] && pix[0] < thresh[9]) dst[8]+=1;
      else if(thresh[9] <= pix[0] && pix[0] < thresh[10]) dst[9]+=1;
      else if(thresh[10] <= pix[0] && pix[0] < thresh[11]) dst[10]+=1;
      else dst[11]+=1;

      if(thresh[0] <= pix[1] && pix[1] < thresh[1]) dst[hist_bins + 0]+=1;
      else if(thresh[1] <= pix[1] && pix[1] < thresh[2]) dst[hist_bins + 1]+=1;
      else if(thresh[2] <= pix[1] && pix[1] < thresh[3]) dst[hist_bins + 2]+=1;
      else if(thresh[3] <= pix[1] && pix[1] < thresh[4]) dst[hist_bins + 3]+=1;
      else if(thresh[4] <= pix[1] && pix[1] < thresh[5]) dst[hist_bins + 4]+=1;
      else if(thresh[5] <= pix[1] && pix[1] < thresh[6]) dst[hist_bins + 5]+=1;
      else if(thresh[6] <= pix[1] && pix[1] < thresh[7]) dst[hist_bins + 6]+=1;
      else if(thresh[7] <= pix[1] && pix[1] < thresh[8]) dst[hist_bins + 7]+=1;
      else if(thresh[8] <= pix[1] && pix[1] < thresh[9]) dst[hist_bins + 8]+=1;
      else if(thresh[9] <= pix[1] && pix[1] < thresh[10]) dst[hist_bins + 9]+=1;
      else if(thresh[10] <= pix[1] && pix[1] < thresh[11]) dst[hist_bins + 10]+=1;
      else dst[hist_bins + 11]+=1;

      if(thresh[0] <= pix[2] && pix[2] < thresh[1]) dst[hist_bins * 2 + 0]+=1;
      else if(thresh[1] <= pix[2] && pix[2] < thresh[2]) dst[hist_bins * 2 + 1]+=1;
      else if(thresh[2] <= pix[2] && pix[2] < thresh[3]) dst[hist_bins * 2 + 2]+=1;
      else if(thresh[3] <= pix[2] && pix[2] < thresh[4]) dst[hist_bins * 2 + 3]+=1;
      else if(thresh[4] <= pix[2] && pix[2] < thresh[5]) dst[hist_bins * 2 + 4]+=1;
      else if(thresh[5] <= pix[2] && pix[2] < thresh[6]) dst[hist_bins * 2 + 5]+=1;
      else if(thresh[6] <= pix[2] && pix[2] < thresh[7]) dst[hist_bins * 2 + 6]+=1;
      else if(thresh[7] <= pix[2] && pix[2] < thresh[8]) dst[hist_bins * 2 + 7]+=1;
      else if(thresh[8] <= pix[2] && pix[2] < thresh[9]) dst[hist_bins * 2 + 8]+=1;
      else if(thresh[9] <= pix[2] && pix[2] < thresh[10]) dst[hist_bins * 2 + 9]+=1;
      else if(thresh[10] <= pix[2] && pix[2] < thresh[11]) dst[hist_bins * 2 + 10]+=1;
      else dst[hist_bins * 2 + 11]+=1;
      
    }
  }
}

