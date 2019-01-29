############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project rf_hls
set_top calc_randomforest
add_files rf_hls/src/rf.hpp
add_files rf_hls/src/main.cpp
add_files -tb rf_hls/window.png
add_files -tb rf_hls/src/main_tb.cpp
add_files -tb rf_hls/src/feature.h
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./rf_hls/solution1/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design -compiler gcc
export_design -rtl vhdl -format ip_catalog
