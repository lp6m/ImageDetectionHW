#include "hls_video.h"
#include <iostream>
#include <string.h>

#define ORIGINAL_WIDTH 64
#define ORIGINAL_HEIGHT 32

#define WIDTH 64
#define HEIGHT 32
#define CELL_SIZE_ROW 8
#define CELL_SIZE_COL 8
#define BLOCK_SIZE_ROW 2
#define BLOCK_SIZE_COL 2
#define N_CELLS_ROW HEIGHT/CELL_SIZE_ROW //4
#define N_CELLS_COL WIDTH/CELL_SIZE_COL //8
#define N_BLOCK_ROW HEIGHT/(CELL_SIZE_ROW * BLOCK_SIZE_ROW) //2
#define N_BLOCK_COL WIDTH/(CELL_SIZE_COL * BLOCK_SIZE_COL) //4
#define HISTOGRAMSIZE N_CELLS_ROW * N_CELLS_COL * 9 //4*8*9
#define RAVEL_SIZE 192//8*8*3

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

inline unsigned short my_min(unsigned short a, unsigned short b){
	return a < b ? a : b;
}

inline unsigned short my_max(unsigned short a, unsigned short b){
	return a < b ? b : a;
}

inline unsigned char bgr2gray(unsigned char b, unsigned char g, unsigned char r){
	//return (char)(0.299 * (float)r + 0.587 * (float)g + 0.114 * (float)b);
	return (unsigned char)((299 * (int)r + 587 * (int)g + 114 * (int)b)/1000);
}


void computeHog(unsigned char image_buffer_B[32][64], unsigned char image_buffer_G[32][64], unsigned char image_buffer_R[32][64], ap_int<15> descriptor[32][9], int sum_of_block[8]){
	//Lookup tables for tan(20)*Gx
	int lut0[256] = {0,0,0,1,1,1,2,2,2,3,3,3,4,4,5,5,5,6,6,6,7,7,7,8,8,9,9,9,10,10,10,11,11,11,12,12,13,13,13,14,14,14,15,15,15,16,16,17,17,17,18,18,18,19,19,19,20,20,21,21,21,22,22,22,23,23,23,24,24,25,25,25,26,26,26,27,27,27,28,28,29,29,29,30,30,30,31,31,31,32,32,33,33,33,34,34,34,35,35,35,36,36,37,37,37,38,38,38,39,39,39,40,40,41,41,41,42,42,42,43,43,43,44,44,45,45,45,46,46,46,47,47,47,48,48,49,49,49,50,50,50,51,51,51,52,52,53,53,53,54,54,54,55,55,55,56,56,57,57,57,58,58,58,59,59,59,60,60,61,61,61,62,62,62,63,63,63,64,64,65,65,65,66,66,66,67,67,67,68,68,69,69,69,70,70,70,71,71,71,72,72,73,73,73,74,74,74,75,75,75,76,76,77,77,77,78,78,78,79,79,79,80,80,81,81,81,82,82,82,83,83,83,84,84,85,85,85,86,86,86,87,87,87,88,88,89,89,89,90,90,90,91,91,91,92,92};
#pragma HLS RESOURCE variable=lut0 core=ROM_1P_BRAM
	//Lookup tables for tan(40)*Gx
	int lut1[256] = {0,0,1,2,3,4,5,5,6,7,8,9,10,10,11,12,13,14,15,15,16,17,18,19,20,20,21,22,23,24,25,26,26,27,28,29,30,31,31,32,33,34,35,36,36,37,38,39,40,41,41,42,43,44,45,46,46,47,48,49,50,51,52,52,53,54,55,56,57,57,58,59,60,61,62,62,63,64,65,66,67,67,68,69,70,71,72,72,73,74,75,76,77,78,78,79,80,81,82,83,83,84,85,86,87,88,88,89,90,91,92,93,93,94,95,96,97,98,98,99,100,101,102,103,104,104,105,106,107,108,109,109,110,111,112,113,114,114,115,116,117,118,119,119,120,121,122,123,124,124,125,126,127,128,129,130,130,131,132,133,134,135,135,136,137,138,139,140,140,141,142,143,144,145,145,146,147,148,149,150,150,151,152,153,154,155,156,156,157,158,159,160,161,161,162,163,164,165,166,166,167,168,169,170,171,171,172,173,174,175,176,177,177,178,179,180,181,182,182,183,184,185,186,187,187,188,189,190,191,192,192,193,194,195,196,197,197,198,199,200,201,202,203,203,204,205,206,207,208,208,209,210,211,212,213,213};
#pragma HLS RESOURCE variable=lut1 core=ROM_1P_BRAM
	//Lookup tables for tan(60)*Gx
	int lut2[256] = {0,1,3,5,6,8,10,12,13,15,17,19,20,22,24,25,27,29,31,32,34,36,38,39,41,43,44,46,48,50,51,53,55,57,58,60,62,63,65,67,69,70,72,74,76,77,79,81,83,84,86,88,89,91,93,95,96,98,100,102,103,105,107,108,110,112,114,115,117,119,121,122,124,126,127,129,131,133,134,136,138,140,141,143,145,147,148,150,152,153,155,157,159,160,162,164,166,167,169,171,172,174,176,178,179,181,183,185,186,188,190,191,193,195,197,198,200,202,204,205,207,209,210,212,214,216,217,219,221,223,224,226,228,230,231,233,235,236,238,240,242,243,245,247,249,250,252,254,255,257,259,261,262,264,266,268,269,271,273,274,276,278,280,281,283,285,287,288,290,292,294,295,297,299,300,302,304,306,307,309,311,313,314,316,318,319,321,323,325,326,328,330,332,333,335,337,338,340,342,344,345,347,349,351,352,354,356,358,359,361,363,364,366,368,370,371,373,375,377,378,380,382,383,385,387,389,390,392,394,396,397,399,401,402,404,406,408,409,411,413,415,416,418,420,421,423,425,427,428,430,432,434,435,437,439,441};
#pragma HLS RESOURCE variable=lut2 core=ROM_1P_BRAM
	//Lookup tables for tan(80)*Gx
	int lut3[256] = {0,5,11,17,22,28,34,39,45,51,56,62,68,73,79,85,90,96,102,107,113,119,124,130,136,141,147,153,158,164,170,175,181,187,192,198,204,209,215,221,226,232,238,243,249,255,260,266,272,277,283,289,294,300,306,311,317,323,328,334,340,345,351,357,362,368,374,379,385,391,396,402,408,413,419,425,430,436,442,447,453,459,464,470,476,481,487,493,498,504,510,515,521,527,532,538,544,549,555,561,566,572,578,584,589,595,601,606,612,618,623,629,635,640,646,652,657,663,669,674,680,686,691,697,703,708,714,720,725,731,737,742,748,754,759,765,771,776,782,788,793,799,805,810,816,822,827,833,839,844,850,856,861,867,873,878,884,890,895,901,907,912,918,924,929,935,941,946,952,958,963,969,975,980,986,992,997,1003,1009,1014,1020,1026,1031,1037,1043,1048,1054,1060,1065,1071,1077,1082,1088,1094,1099,1105,1111,1116,1122,1128,1133,1139,1145,1150,1156,1162,1168,1173,1179,1185,1190,1196,1202,1207,1213,1219,1224,1230,1236,1241,1247,1253,1258,1264,1270,1275,1281,1287,1292,1298,1304,1309,1315,1321,1326,1332,1338,1343,1349,1355,1360,1366,1372,1377,1383,1389,1394,1400,1406,1411,1417,1423,1428,1434,1440,1445};
#pragma HLS RESOURCE variable=lut3 core=ROM_1P_BRAM

	hls::LineBuffer<3, 64, unsigned char> linebuf;
	hls::Window<9,8,int> bin_winbuf; //hist_bins9 * cell_index_x8
	int tmp_binsum[9];
#pragma HLS ARRAY_PARTITION variable=tmp_binsum complete dim=1

	//fill line buffer (0,0) ... (0, 63)
	for(int x = 0; x < 64; x++){
		unsigned char pix = bgr2gray(image_buffer_B[0][x], image_buffer_G[0][x], image_buffer_R[0][x]);
		linebuf.insert_bottom_row(pix, x);
	}

	linebuf.shift_pixels_up(0);
	unsigned char pix = bgr2gray(image_buffer_B[1][0], image_buffer_G[1][0], image_buffer_R[1][0]);
	linebuf.insert_bottom_row(pix, 0);
	for(int x = 1; x < 64; x++){
		linebuf.shift_pixels_up(x);
	}

	//clear window buffer
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 8; j++){
			bin_winbuf.insert_pixel(0, i, j);
		}
	}
	for(int i = 0; i < 9; i++) tmp_binsum[i] = 0;

	//calculate magnitude using shift register
	loop_cy:for(int cy = 0; cy < 4; cy++){
		loop_yy:for(int yy = 0; yy < 8; yy++){
			loop_cx:for(int cx = 0; cx < 8; cx++){
				loop_xx:for(int xx = 0; xx < 8; xx++){
	#pragma HLS PIPELINE II=1
					bool isedge = ((cx == 0 && xx == 0) || (cx == 7 && xx == 7) || (cy == 0 && yy == 0)|| (cy == 3 && yy == 7));
					int x = cx * 8 + xx;
					int Gx = (isedge ? 0 : (linebuf.getval(1, x+1) - linebuf.getval(1, x-1)));
					int Gy = (isedge ? 0 : (linebuf.getval(2, x) - linebuf.getval(0, x)));
					//test_gx[y*64+x] = Gx;
					//test_gy[y*64+x] = Gy;

					int bin_index;
					int mag = isedge? 0 : approx_distance(Gx, Gy);
					//int ci = 8 * (y / 8) + cx;
					int ci = 8 * cy + cx;
					if((Gx >= 0 && Gy >= 0) || (Gx <= 0 && Gy <= 0)){
						if 		(abs(Gy) < lut0[abs(Gx)]) 	{ bin_index = 0;
						}else if (abs(Gy) < lut1[abs(Gx)]) 	{ bin_index = 1;
						}else if (abs(Gy) < lut2[abs(Gx)]) 	{ bin_index = 2;
						}else if (abs(Gy) < lut3[abs(Gx)]) 	{ bin_index = 3;
						}else{ 								  bin_index = 4;
						}
					} else{
						if 		(abs(Gy) <  lut0[abs(Gx)])	{ bin_index = 4;
						}else if (abs(Gy) <  lut1[abs(Gx)]) { bin_index = 5;
						}else if (abs(Gy) <  lut2[abs(Gx)]) { bin_index = 6;
						}else if (abs(Gy) <  lut3[abs(Gx)]) { bin_index = 7;
						}else 								{ bin_index = 8;
						}
					}
					tmp_binsum[bin_index] += mag;
					int block_index = (cy / 2) * 4 + (cx / 2);
					sum_of_block[block_index] += mag;

					if(xx == 7){
						for(int i = 0; i < 9; i++) tmp_binsum[i] += bin_winbuf.getval(i, 7);
						//shift window register
						bin_winbuf.shift_pixels_right();
						//save newer patial sum
						for(int i = 0; i < 9; i++) bin_winbuf.insert_pixel(tmp_binsum[i], i, 0);
						for(int i = 0; i < 9; i++) tmp_binsum[i] = 0;
					}
					if(yy == 7 && xx == 7){
						//save descriptor
						for(int i = 0; i < 9; i++){
							//descriptor[ci * 9 + i] = bin_winbuf.getval(i, 0);
							descriptor[ci][i] = bin_winbuf.getval(i, 0);
						}

					}
					//reset window buffer
					if(cx == 7 && yy == 7 && xx == 7){
						for(int i = 0; i < 9; i++){
							for(int j = 0; j < 8; j++){
								bin_winbuf.insert_pixel(0, i, j);
							}
						}
					}

					//update linebuffer
					linebuf.shift_pixels_up((x == 0 ? 63 : x - 1));
					int y = cy * 8 + yy;
					if(y < 31){
						int py = (x == 63 ? y + 2 : y + 1);
						int px = (x == 63 ? 0 : x + 1);
						unsigned char pix = bgr2gray(image_buffer_B[py][px], image_buffer_G[py][px], image_buffer_R[py][px]);
						linebuf.insert_bottom_row(pix, (x == 63 ? 0 : x + 1));
					}
	#pragma HLS DEPENDENCE variable=descriptor inter false
				}
			}
		}
	}
}


void normalizeBlock(int sum_of_block[8], ap_int<15> descriptor[32][9], unsigned short normalized[HISTOGRAMSIZE]){
	//int  average;
	unsigned int blkSize = 36;
	loop_by:for(int by = 0; by < N_BLOCK_ROW; by++){//2
		loop_bx:for(int bx = 0; bx < N_BLOCK_COL; bx++){//4
			int blkIdx = by * N_BLOCK_COL + bx;
			int average = sum_of_block[blkIdx]/blkSize;
			loop_i:for (int i = 0; i < 36; i++) {
#pragma HLS PIPELINE II=1
				int dindex0 = (blkIdx*36+i)/9;
				int dindex1 = (blkIdx*36+i)%9;
				if (descriptor[dindex0][dindex1] > 2*average){
					normalized[blkIdx*36+i] = 409;
				}else if (descriptor[dindex0][dindex1]*4 > 7*average){
					normalized[blkIdx*36+i] = 358;
				}else if (descriptor[dindex0][dindex1]*4 > 6*average){
					normalized[blkIdx*36+i] = 307;
				}else if (descriptor[dindex0][dindex1]*4 > 5*average){
					normalized[blkIdx*36+i] = 256;
				}else if (descriptor[dindex0][dindex1] > average){
					normalized[blkIdx*36+i] = 204;
				}else if (descriptor[dindex0][dindex1]*4 > 3*average){
					normalized[blkIdx*36+i] = 153;
				}else if (descriptor[dindex0][dindex1]*2 > average){
					normalized[blkIdx*36+i] = 102;
				}else if (descriptor[dindex0][dindex1]*4 > average){
					normalized[blkIdx*36+i] = 51;
				}else {
					normalized[blkIdx*36+i] = 0;
				}
			}
		}
	}
}


void calc_ravel_bgr(unsigned char image_buffer_B[32][64], unsigned char image_buffer_G[32][64], unsigned char image_buffer_R[32][64], unsigned short ravel[8*8*3]){
	for(int y = 0; y < 8; y++){
		for(int x = 0; x < 8; x++){
#pragma HLS PIPELINE II=1
			unsigned char pix0_B = image_buffer_B[y*4+1][x*8+3];
			unsigned char pix1_B = image_buffer_B[y*4+1][x*8+4];
			unsigned char pix2_B = image_buffer_B[y*4+2][x*8+3];
			unsigned char pix3_B = image_buffer_B[y*4+2][x*8+4];

			unsigned char pix0_G = image_buffer_G[y*4+1][x*8+3];
			unsigned char pix1_G = image_buffer_G[y*4+1][x*8+4];
			unsigned char pix2_G = image_buffer_G[y*4+2][x*8+3];
			unsigned char pix3_G = image_buffer_G[y*4+2][x*8+4];

			unsigned char pix0_R = image_buffer_R[y*4+1][x*8+3];
			unsigned char pix1_R = image_buffer_R[y*4+1][x*8+4];
			unsigned char pix2_R = image_buffer_R[y*4+2][x*8+3];
			unsigned char pix3_R = image_buffer_R[y*4+2][x*8+4];

			int sumB = (int)pix0_B + (int)pix1_B + (int)pix2_B + (int)pix3_B;
			int sumG = (int)pix0_G + (int)pix1_G + (int)pix2_G + (int)pix3_G;
			int sumR = (int)pix0_R + (int)pix1_R + (int)pix2_R + (int)pix3_R;

			ravel[(y*8+x)*3] = (sumB / 4) + ((sumB % 4 >= 2) ? 1 : 0);
			ravel[(y*8+x)*3+1] = (sumG / 4) + ((sumG % 4 >= 2) ? 1 : 0);
			ravel[(y*8+x)*3+2] = (sumR / 4) + ((sumR % 4 >= 2) ? 1 : 0);
		}
	}
}

void rgb2hsv(int g, int b, int r, int* h2, int* s, int* v){
	int pix0_max = my_max(my_max(b, g), r);
	int pix0_min = my_min(my_min(b, g), r);
	int pix0_V = pix0_max;
	int pix0_S;
	int pix0_2H;
	if(pix0_max == pix0_min){
		pix0_2H = 0;
		pix0_S = 0;
	}else{
		if(pix0_max == r) 		pix0_2H = 60 * (g - b) / (pix0_V - pix0_min);
		else if(pix0_max == g) pix0_2H = 60 * (b - r) / (pix0_V - pix0_min) + 120;
		else 						pix0_2H = 60 * (r - g) / (pix0_V - pix0_min) + 240;

		if(pix0_2H > 360) pix0_2H = pix0_2H - 360;
		else if(pix0_2H  < 0) pix0_2H = pix0_2H + 360;
		pix0_S = (pix0_max - pix0_min) * 255 / pix0_max;
	}
	*h2 = pix0_2H;
	*s = pix0_S;
	*v = pix0_V;
}

void calc_ravel_hsv(unsigned char image_buffer_B[32][64], unsigned char image_buffer_G[32][64], unsigned char image_buffer_R[32][64], unsigned short ravel[8*8*3]){
	for(int y = 0; y < 8; y++){
		for(int x = 0; x < 8; x++){
//#pragma HLS PIPELINE II=1
			unsigned short pix0_B = image_buffer_B[y*4+1][x*8+3];
			unsigned short pix1_B = image_buffer_B[y*4+1][x*8+4];
			unsigned short pix2_B = image_buffer_B[y*4+2][x*8+3];
			unsigned short pix3_B = image_buffer_B[y*4+2][x*8+4];

			unsigned short pix0_G = image_buffer_G[y*4+1][x*8+3];
			unsigned short pix1_G = image_buffer_G[y*4+1][x*8+4];
			unsigned short pix2_G = image_buffer_G[y*4+2][x*8+3];
			unsigned short pix3_G = image_buffer_G[y*4+2][x*8+4];

			unsigned short pix0_R = image_buffer_R[y*4+1][x*8+3];
			unsigned short pix1_R = image_buffer_R[y*4+1][x*8+4];
			unsigned short pix2_R = image_buffer_R[y*4+2][x*8+3];
			unsigned short pix3_R = image_buffer_R[y*4+2][x*8+4];

			int pix0_V, pix0_S, pix0_2H;
			int pix1_V, pix1_S, pix1_2H;
			int pix2_V, pix2_S, pix2_2H;
			int pix3_V, pix3_S, pix3_2H;
#pragma HLS allocation instances=rgb2hsv limit=2 function
			rgb2hsv(pix0_G, pix0_B, pix0_R, &pix0_2H, &pix0_S, &pix0_V);
			rgb2hsv(pix1_G, pix1_B, pix1_R, &pix1_2H, &pix1_S, &pix1_V);
			rgb2hsv(pix2_G, pix2_B, pix2_R, &pix2_2H, &pix2_S, &pix2_V);
			rgb2hsv(pix3_G, pix3_B, pix3_R, &pix3_2H, &pix3_S, &pix3_V);

			int sumH = (pix0_2H + pix1_2H + pix2_2H + pix3_2H) / 2;
			int sumS = pix0_S + pix1_S + pix2_S + pix3_S;
			int sumV = pix0_V + pix1_V + pix2_V + pix3_V;

			ravel[(y*8+x)*3] = (unsigned short) (sumH / 4) + ((sumH % 4 >= 2) ? 1 : 0);
			ravel[(y*8+x)*3+1] = (unsigned short) (sumS / 4) + ((sumS % 4 >= 2) ? 1 : 0);
			ravel[(y*8+x)*3+2] = (unsigned short) (sumV / 4) + ((sumV % 4 >= 2) ? 1 : 0);
		}
	}
}

void calc_randomforest(unsigned char *imageptr, unsigned short* feature){

#pragma HLS INTERFACE s_axilite port=return bundle=CONTROL_BUS
#pragma HLS INTERFACE m_axi port=imageptr depth=561 offset=slave bundle=INPUT_IMAGE
#pragma HLS INTERFACE m_axi port=feature offset=slave depth=72 bundle=FEATURE

	unsigned char image_buffer_B[HEIGHT][WIDTH];
	unsigned char image_buffer_G[HEIGHT][WIDTH];
	unsigned char image_buffer_R[HEIGHT][WIDTH];
	//b... g... r..
#pragma HLS ARRAY_PARTITION variable=image_buffer_B complete dim=1
#pragma HLS ARRAY_PARTITION variable=image_buffer_G complete dim=1
#pragma HLS ARRAY_PARTITION variable=image_buffer_R complete dim=1
	read_input_G:for(int i = 0; i < HEIGHT; i++){
		int offset = i * 64;
		memcpy(image_buffer_B[i], imageptr + offset, (WIDTH) * sizeof(unsigned char));
	}
	read_input_B:for(int i = 0; i < HEIGHT; i++){
		int offset = i * 64 + WIDTH * HEIGHT;
		memcpy(image_buffer_G[i], imageptr + offset, (WIDTH) * sizeof(unsigned char));
	}
	read_input_R:for(int i = 0; i < HEIGHT; i++){
		int offset = i * 64 + WIDTH * HEIGHT * 2;
		memcpy(image_buffer_R[i], imageptr + offset, (WIDTH) * sizeof(unsigned char));
	}
	unsigned short ravel_bgr[192];
#pragma HLS RESOURCE variable=ravel_bgr core=RAM_2P_BRAM
	unsigned short ravel_hsv[192];
#pragma HLS RESOURCE variable=ravel_hsv core=RAM_2P_BRAM
	calc_ravel_bgr(image_buffer_B, image_buffer_G, image_buffer_R, ravel_bgr);
	calc_ravel_hsv(image_buffer_B, image_buffer_G, image_buffer_R, ravel_hsv);

	ap_int<15>  descriptor[32][9]={0};
	unsigned short	  normalized[HISTOGRAMSIZE]={0};
#pragma HLS RESOURCE variable=normalized core=RAM_2P_BRAM
#pragma HLS ARRAY_PARTITION variable=descriptor complete dim=2
#pragma HLS RESOURCE variable=descriptor core=RAM_2P_BRAM

	int sum_of_block[8];

	for(int i=0;i<HISTOGRAMSIZE;i++){
		#pragma HLS PIPELINE II=1
		normalized[i] = 0;
	}
	for(int i=0;i<32;i++){
		for(int j = 0; j < 9; j++){
		#pragma HLS PIPELINE II=1
			descriptor[i][j] = 0;
		}
	}
	for(int i=0;i<8;i++){
#pragma HLS PIPELINE II=1
		sum_of_block[i]=0;
	}
	computeHog(image_buffer_B, image_buffer_G, image_buffer_R, descriptor, sum_of_block);
	normalizeBlock(sum_of_block, descriptor, normalized);
	memcpy(feature, ravel_bgr, RAVEL_SIZE * sizeof(unsigned short));
	memcpy(feature+RAVEL_SIZE, ravel_hsv, RAVEL_SIZE * sizeof(unsigned short));
	memcpy(feature+RAVEL_SIZE*2, normalized, HISTOGRAMSIZE * sizeof(unsigned short));
}

