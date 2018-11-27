############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hog_hls2
set_top calc_hog
add_files hog_hls2/src/main.cpp
add_files -tb hog_hls2/src/calc_hog.hpp
add_files -tb ../sw/src/frame.png
add_files -tb hog_hls2/src/main_tb.cpp
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 6 -name default
#source "./hog_hls2/solution1/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -rtl vhdl -format ip_catalog
