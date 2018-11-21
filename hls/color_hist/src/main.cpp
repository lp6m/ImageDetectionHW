#include "ap_int.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define hist_bins 12
#define WIDTH 32
#define HEIGHT 16
const unsigned char thresh[hist_bins] = {0, 21, 42, 64, 85,106, 128, 149, 170, 192, 213, 234};


inline void calc_hist(unsigned char image_buffer[HEIGHT][WIDTH*3], unsigned int rst[hist_bins * 3]){
	loop_y:for(int y = 0; y < HEIGHT; y++){
		loop_x:for(int x = 0; x < WIDTH; x++){
			loop_i:for(int i = 0; i < 3; i++){
#pragma HLS pipeline
				unsigned char pix = image_buffer[y][x*3+i];
				if(thresh[0] <= pix && pix < thresh[1]) rst[i * hist_bins + 0]++;
				else if(thresh[1] <= pix && pix < thresh[2]) rst[i * hist_bins + 1]++;
				else if(thresh[2] <= pix && pix < thresh[3]) rst[i * hist_bins + 2]++;
				else if(thresh[3] <= pix && pix < thresh[4]) rst[i * hist_bins + 3]++;
				else if(thresh[4] <= pix && pix < thresh[5]) rst[i * hist_bins + 4]++;
				else if(thresh[5] <= pix && pix < thresh[6]) rst[i * hist_bins + 5]++;
				else if(thresh[6] <= pix && pix < thresh[7]) rst[i * hist_bins + 6]++;
				else if(thresh[7] <= pix && pix < thresh[8]) rst[i * hist_bins + 7]++;
				else if(thresh[8] <= pix && pix < thresh[9]) rst[i * hist_bins + 8]++;
				else if(thresh[9] <= pix && pix < thresh[10]) rst[i * hist_bins + 9]++;
				else if(thresh[10] <= pix && pix < thresh[11]) rst[i * hist_bins + 10]++;
				else rst[i * hist_bins + 11]++;
			}
		}
	}
}

void color_hist(int specs[3], unsigned char *imageptr, unsigned int* feature){
#pragma HLS INTERFACE s_axilite depth=16 port=specs bundle=SPECS
#pragma HLS INTERFACE s_axilite port=return bundle=CONTROL_BUS
#pragma HLS INTERFACE m_axi port=imageptr offset=slave bundle=INPUT_IMAGE
#pragma HLS INTERFACE m_axi port=feature offset=slave bundle=FEATURE
	int y = specs[0]; //y coordinate of window left corner
	int x = specs[1]; //x coordinate of window left corner
	int original_width = specs[2];// original image width
	unsigned char image_buffer[HEIGHT][WIDTH*3];
#pragma HLS ARRAY_PARTITION variable=image_buffer complete dim=1
	read_input:for(int i = 0; i < HEIGHT; i++){
		int offset = ((y + i) * original_width + x) * 3;
		memcpy(image_buffer[i], imageptr + offset, WIDTH * sizeof(unsigned char) * 3);
	}
	unsigned int rst[hist_bins*3] = {0};
	calc_hist(image_buffer, rst);
	memcpy(feature, rst, hist_bins * 3 * sizeof(unsigned int));
}
