#include <iostream>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>
#include <dirent.h>
// #include "svmResults.hpp"
#include <iostream>
#include "xcolor_hist.h" //generated by Vivado HLS
#include "xcalc_hog.h"
#include <stdint.h>
#include <stdexcept>
// #include "xparameters.h" //VDMA
#include "linuxmmap.h"
#include "linuxmisc.h"
// #include "xil_printf.h"
// #include "omp.h" //OpenMP
#include <sys/time.h>
// #include "consts.h"
#include "math.h"


using namespace std;

XColor_hist hist0, hist1, hist2, hist3;
XColor_hist *hist0_ptr = &hist0;
XColor_hist *hist1_ptr = &hist1;
XColor_hist *hist2_ptr = &hist2;
XColor_hist *hist3_ptr = &hist3;

XCalc_hog hog0, hog1, hog2, hog3;
XCalc_hog *hog0_ptr = &hog0;
XCalc_hog *hog1_ptr = &hog1;
XCalc_hog *hog2_ptr = &hog2;
XCalc_hog *hog3_ptr = &hog3;

#define HIST_IMAGEBUFFER 0x06000000 
#define HOG_IMAGEBUFFER  0x06200000

#define HIST_FEATURE0      0x07000000
#define HIST_FEATURE1      0x07300000
#define HIST_FEATURE2      0x07600000
#define HIST_FEATURE3      0x07900000

#define HOG_FEATURE0        0x7A00000
#define HOG_FEATURE1        0x7B00000
#define HOG_FEATURE2        0x7C00000
#define HOG_FEATURE3        0x7D00000

unsigned char *hist_imageBuffer;
unsigned short *hist_feature0, *hist_feature1, *hist_feature2, *hist_feature3;
unsigned char *hog_imageBuffer;
unsigned short *hog_feature0, *hog_feature1, *hog_feature2, *hog_feature3;


void print_accel_status(XColor_hist *hist,char *name){
	int isDone, isIdle, isReady;
	isDone = XColor_hist_IsDone(hist);
	isIdle = XColor_hist_IsIdle(hist);
	isReady = XColor_hist_IsReady(hist);
	printf("%s Status: isDone %d, isIdle %d, isReady%d\r\n",name, isDone, isIdle, isReady);
}

unsigned char *	assignToPhysicalUChar(unsigned long address,unsigned int size){
	int devmem = open("/dev/mem", O_RDWR | O_SYNC);
	off_t PageOffset = (off_t) address % getpagesize();
	off_t PageAddress = (off_t) (address - PageOffset);
	return (unsigned char *) mmap(0, size*sizeof(unsigned char), PROT_READ|PROT_WRITE, MAP_SHARED, devmem, PageAddress);
}

unsigned int *assignToPhysicalUInt(unsigned long address,unsigned int size){
	int devmem = open("/dev/mem", O_RDWR | O_SYNC);
	off_t PageOffset = (off_t) address % getpagesize();
	off_t PageAddress = (off_t) (address - PageOffset);
	return (unsigned int *) mmap(0, size*sizeof(unsigned int), PROT_READ|PROT_WRITE, MAP_SHARED, devmem, PageAddress);
}

unsigned short *assignToPhysicalUInt16(unsigned long address,unsigned int size){
	int devmem = open("/dev/mem", O_RDWR | O_SYNC);
	off_t PageOffset = (off_t) address % getpagesize();
	off_t PageAddress = (off_t) (address - PageOffset);
	return (unsigned short *) mmap(0, size*sizeof(unsigned short), PROT_READ|PROT_WRITE, MAP_SHARED, devmem, PageAddress);
}

int color_hist_init(XColor_hist* hist, char* name){
	int status = XColor_hist_Initialize(hist, name);
	if(status != XST_SUCCESS){ 
        cerr << "XColor_hist_Initialize failed" << endl;
    }  
	XColor_hist_InterruptGlobalDisable(hist);
	cout << "interrupt global disabled" << endl;
    XColor_hist_InterruptDisable(hist, 1); 
    cout << "interrupt disabled" << endl;
    return status;
}


int calc_hog_init(XCalc_hog* hog, char* name){
	int status = XCalc_hog_Initialize(hog, name);
	if(status != XST_SUCCESS){ 
        cerr << "XColor_hist_Initialize failed" << endl;
    }  
	XCalc_hog_InterruptGlobalDisable(hog);
	cout << "interrupt global disabled" << endl;
    XCalc_hog_InterruptDisable(hog, 1); 
    cout << "interrupt disabled" << endl;
    return status;
}

int color_hist_hw(unsigned short *dst){
	memset(hist_feature0, 0, sizeof(unsigned short) * 12 * 3);
	memset(hist_feature1, 0, sizeof(unsigned short) * 12 * 3);
	memset(hist_feature2, 0, sizeof(unsigned short) * 12 * 3);
	memset(hist_feature3, 0, sizeof(unsigned short) * 12 * 3);
  
	int write_specs0[3] = {0, 0, 64};
	XColor_hist_Write_specs_Words(hist0_ptr,0,write_specs0,3); //offset0, length=3
	XColor_hist_Set_imageptr(hist0_ptr,(u32)(HIST_IMAGEBUFFER)); //set physical address
 	XColor_hist_Set_feature_r(hist0_ptr, (u32)(HIST_FEATURE0));

	int write_specs1[3] = {0, 32, 64};
 	XColor_hist_Write_specs_Words(hist1_ptr,0,write_specs1,3); //offset0, length=3
	XColor_hist_Set_imageptr(hist1_ptr,(u32)(HIST_IMAGEBUFFER)); //set physical address
 	XColor_hist_Set_feature_r(hist1_ptr, (u32)(HIST_FEATURE1));

	int write_specs2[3] = {16, 0, 64};
 	XColor_hist_Write_specs_Words(hist2_ptr,0,write_specs2,3); //offset0, length=3
	XColor_hist_Set_imageptr(hist2_ptr,(u32)(HIST_IMAGEBUFFER)); //set physical address
 	XColor_hist_Set_feature_r(hist2_ptr, (u32)(HIST_FEATURE2));
 	
	int write_specs3[3] = {16, 32, 64};
 	XColor_hist_Write_specs_Words(hist3_ptr,0,write_specs3,3); //offset0, length=3
	XColor_hist_Set_imageptr(hist3_ptr,(u32)(HIST_IMAGEBUFFER)); //set physical address
 	XColor_hist_Set_feature_r(hist3_ptr, (u32)(HIST_FEATURE3));
	
	XColor_hist_Start(hist0_ptr);
	XColor_hist_Start(hist1_ptr);
	XColor_hist_Start(hist2_ptr);
	XColor_hist_Start(hist3_ptr);

	bool flg1,flg2,flg3,flg4;
	flg1 = false; flg2 = false; flg3 = false; flg4 = false;
	while(!flg1 || !flg2 || !flg3 || !flg4){
	  if(XColor_hist_IsDone(hist0_ptr)) flg1 = true;
	  if(XColor_hist_IsDone(hist1_ptr)) flg2 = true;
	  if(XColor_hist_IsDone(hist2_ptr)) flg3 = true;
	  if(XColor_hist_IsDone(hist3_ptr)) flg4 = true;
	}
    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 12; j++) dst[i*12+j] = hist_feature0[i*12+j] + hist_feature1[i*12+j] + hist_feature2[i*12+j] + hist_feature3[i*12+j];
	}

	return 1;
}


int calc_hog_hw(unsigned short *dst){
	memset(hog_feature0, 0, sizeof(unsigned short) * 72 * 4);
	/*memset(hog_feature1, 0, sizeof(unsigned short) * 72);
	memset(hog_feature2, 0, sizeof(unsigned short) * 72);
	memset(hog_feature3, 0, sizeof(unsigned short) * 72);*/
  
   	XCalc_hog_Set_imageptr(hog0_ptr,(u32)(HOG_IMAGEBUFFER)); //set physical address
 	XCalc_hog_Set_feature_r(hog0_ptr, (u32)(HOG_FEATURE0));
	XCalc_hog_Start(hog0_ptr);
	bool flg1;
	flg1 = false;
	while(!flg1){
	  if(XCalc_hog_IsDone(hog0_ptr)) flg1 = true;
	}
	memcpy(dst, hog_feature0, sizeof(unsigned short) * 72 * 4);
	//memcpy(dst+72,  hog_feature1, sizeof(unsigned short) * 72);
	//memcpy(dst+72*2,hog_feature2, sizeof(unsigned short) * 72);
	//memcpy(dst+72*3,hog_feature3, sizeof(unsigned short) * 72);

	return 1;
}

int hw_setup(){
	color_hist_init(hist0_ptr, "/amba_pl/color_hist@43c90000");
	color_hist_init(hist1_ptr, "/amba_pl/color_hist@43cb0000");
	color_hist_init(hist2_ptr, "/amba_pl/color_hist@43cd0000");
	color_hist_init(hist3_ptr, "/amba_pl/color_hist@43cf0000");
	hist_feature0 = assignToPhysicalUInt16(HIST_FEATURE0, 12*3);
	hist_feature1 = assignToPhysicalUInt16(HIST_FEATURE1, 12*3);
	hist_feature2 = assignToPhysicalUInt16(HIST_FEATURE2, 12*3);
	hist_feature3 = assignToPhysicalUInt16(HIST_FEATURE3, 12*3);
	hist_imageBuffer = assignToPhysicalUChar(HIST_IMAGEBUFFER,32*16*4*3); //get virtual address

	calc_hog_init(hog0_ptr, "/amba_pl/calc_hog@43d10000");

	hog_feature0 = assignToPhysicalUInt16(HOG_FEATURE0, 72 * 4);

	hog_imageBuffer = assignToPhysicalUChar(HOG_IMAGEBUFFER,64*32*4);
	
	return 1;
}

int hw_release(){
	munmap(hist_feature0, sizeof(unsigned short) * 12*3);
	munmap(hist_feature1, sizeof(unsigned short) * 12*3);
	munmap(hist_feature2, sizeof(unsigned short) * 12*3);
	munmap(hist_feature3, sizeof(unsigned short) * 12*3);
	munmap(hist_imageBuffer, sizeof(unsigned char)*32*16*4*3);

	munmap(hog_feature0, sizeof(unsigned short) * 72*4);
	munmap(hog_imageBuffer, sizeof(unsigned char)*64*32*4);
	return 1;
}
