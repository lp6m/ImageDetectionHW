############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project color_hist
set_top color_hist
add_files color_hist/src/main.cpp
add_files -tb color_hist/src/main_tb.cpp
add_files -tb ../sw/src/frame.png
add_files -tb color_hist/src/calc_hist.hpp
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 6 -name default
#source "./color_hist/solution1/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design -compiler gcc
export_design -rtl vhdl -format ip_catalog
