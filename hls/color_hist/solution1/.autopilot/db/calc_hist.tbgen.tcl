set moduleName calc_hist
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {calc_hist}
set C_modelType { void 0 }
set C_modelArgList {
	{ image_buffer_0 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_1 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_2 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_3 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_4 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_5 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_6 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_7 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_8 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_9 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_10 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_11 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_12 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_13 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_14 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ image_buffer_15 int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ rst int 16 regular {array 36 { 1 0 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "image_buffer_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "image_buffer_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "rst", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 61
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ image_buffer_0_address0 sc_out sc_lv 7 signal 0 } 
	{ image_buffer_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ image_buffer_0_q0 sc_in sc_lv 8 signal 0 } 
	{ image_buffer_1_address0 sc_out sc_lv 7 signal 1 } 
	{ image_buffer_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ image_buffer_1_q0 sc_in sc_lv 8 signal 1 } 
	{ image_buffer_2_address0 sc_out sc_lv 7 signal 2 } 
	{ image_buffer_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ image_buffer_2_q0 sc_in sc_lv 8 signal 2 } 
	{ image_buffer_3_address0 sc_out sc_lv 7 signal 3 } 
	{ image_buffer_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ image_buffer_3_q0 sc_in sc_lv 8 signal 3 } 
	{ image_buffer_4_address0 sc_out sc_lv 7 signal 4 } 
	{ image_buffer_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ image_buffer_4_q0 sc_in sc_lv 8 signal 4 } 
	{ image_buffer_5_address0 sc_out sc_lv 7 signal 5 } 
	{ image_buffer_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ image_buffer_5_q0 sc_in sc_lv 8 signal 5 } 
	{ image_buffer_6_address0 sc_out sc_lv 7 signal 6 } 
	{ image_buffer_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ image_buffer_6_q0 sc_in sc_lv 8 signal 6 } 
	{ image_buffer_7_address0 sc_out sc_lv 7 signal 7 } 
	{ image_buffer_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ image_buffer_7_q0 sc_in sc_lv 8 signal 7 } 
	{ image_buffer_8_address0 sc_out sc_lv 7 signal 8 } 
	{ image_buffer_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ image_buffer_8_q0 sc_in sc_lv 8 signal 8 } 
	{ image_buffer_9_address0 sc_out sc_lv 7 signal 9 } 
	{ image_buffer_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ image_buffer_9_q0 sc_in sc_lv 8 signal 9 } 
	{ image_buffer_10_address0 sc_out sc_lv 7 signal 10 } 
	{ image_buffer_10_ce0 sc_out sc_logic 1 signal 10 } 
	{ image_buffer_10_q0 sc_in sc_lv 8 signal 10 } 
	{ image_buffer_11_address0 sc_out sc_lv 7 signal 11 } 
	{ image_buffer_11_ce0 sc_out sc_logic 1 signal 11 } 
	{ image_buffer_11_q0 sc_in sc_lv 8 signal 11 } 
	{ image_buffer_12_address0 sc_out sc_lv 7 signal 12 } 
	{ image_buffer_12_ce0 sc_out sc_logic 1 signal 12 } 
	{ image_buffer_12_q0 sc_in sc_lv 8 signal 12 } 
	{ image_buffer_13_address0 sc_out sc_lv 7 signal 13 } 
	{ image_buffer_13_ce0 sc_out sc_logic 1 signal 13 } 
	{ image_buffer_13_q0 sc_in sc_lv 8 signal 13 } 
	{ image_buffer_14_address0 sc_out sc_lv 7 signal 14 } 
	{ image_buffer_14_ce0 sc_out sc_logic 1 signal 14 } 
	{ image_buffer_14_q0 sc_in sc_lv 8 signal 14 } 
	{ image_buffer_15_address0 sc_out sc_lv 7 signal 15 } 
	{ image_buffer_15_ce0 sc_out sc_logic 1 signal 15 } 
	{ image_buffer_15_q0 sc_in sc_lv 8 signal 15 } 
	{ rst_address0 sc_out sc_lv 6 signal 16 } 
	{ rst_ce0 sc_out sc_logic 1 signal 16 } 
	{ rst_q0 sc_in sc_lv 16 signal 16 } 
	{ rst_address1 sc_out sc_lv 6 signal 16 } 
	{ rst_ce1 sc_out sc_logic 1 signal 16 } 
	{ rst_we1 sc_out sc_logic 1 signal 16 } 
	{ rst_d1 sc_out sc_lv 16 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "image_buffer_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_0", "role": "address0" }} , 
 	{ "name": "image_buffer_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_0", "role": "ce0" }} , 
 	{ "name": "image_buffer_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_0", "role": "q0" }} , 
 	{ "name": "image_buffer_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_1", "role": "address0" }} , 
 	{ "name": "image_buffer_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_1", "role": "ce0" }} , 
 	{ "name": "image_buffer_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_1", "role": "q0" }} , 
 	{ "name": "image_buffer_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_2", "role": "address0" }} , 
 	{ "name": "image_buffer_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_2", "role": "ce0" }} , 
 	{ "name": "image_buffer_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_2", "role": "q0" }} , 
 	{ "name": "image_buffer_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_3", "role": "address0" }} , 
 	{ "name": "image_buffer_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_3", "role": "ce0" }} , 
 	{ "name": "image_buffer_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_3", "role": "q0" }} , 
 	{ "name": "image_buffer_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_4", "role": "address0" }} , 
 	{ "name": "image_buffer_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_4", "role": "ce0" }} , 
 	{ "name": "image_buffer_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_4", "role": "q0" }} , 
 	{ "name": "image_buffer_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_5", "role": "address0" }} , 
 	{ "name": "image_buffer_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_5", "role": "ce0" }} , 
 	{ "name": "image_buffer_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_5", "role": "q0" }} , 
 	{ "name": "image_buffer_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_6", "role": "address0" }} , 
 	{ "name": "image_buffer_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_6", "role": "ce0" }} , 
 	{ "name": "image_buffer_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_6", "role": "q0" }} , 
 	{ "name": "image_buffer_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_7", "role": "address0" }} , 
 	{ "name": "image_buffer_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_7", "role": "ce0" }} , 
 	{ "name": "image_buffer_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_7", "role": "q0" }} , 
 	{ "name": "image_buffer_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_8", "role": "address0" }} , 
 	{ "name": "image_buffer_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_8", "role": "ce0" }} , 
 	{ "name": "image_buffer_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_8", "role": "q0" }} , 
 	{ "name": "image_buffer_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_9", "role": "address0" }} , 
 	{ "name": "image_buffer_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_9", "role": "ce0" }} , 
 	{ "name": "image_buffer_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_9", "role": "q0" }} , 
 	{ "name": "image_buffer_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_10", "role": "address0" }} , 
 	{ "name": "image_buffer_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_10", "role": "ce0" }} , 
 	{ "name": "image_buffer_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_10", "role": "q0" }} , 
 	{ "name": "image_buffer_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_11", "role": "address0" }} , 
 	{ "name": "image_buffer_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_11", "role": "ce0" }} , 
 	{ "name": "image_buffer_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_11", "role": "q0" }} , 
 	{ "name": "image_buffer_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_12", "role": "address0" }} , 
 	{ "name": "image_buffer_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_12", "role": "ce0" }} , 
 	{ "name": "image_buffer_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_12", "role": "q0" }} , 
 	{ "name": "image_buffer_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_13", "role": "address0" }} , 
 	{ "name": "image_buffer_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_13", "role": "ce0" }} , 
 	{ "name": "image_buffer_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_13", "role": "q0" }} , 
 	{ "name": "image_buffer_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_14", "role": "address0" }} , 
 	{ "name": "image_buffer_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_14", "role": "ce0" }} , 
 	{ "name": "image_buffer_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_14", "role": "q0" }} , 
 	{ "name": "image_buffer_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "image_buffer_15", "role": "address0" }} , 
 	{ "name": "image_buffer_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_buffer_15", "role": "ce0" }} , 
 	{ "name": "image_buffer_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_buffer_15", "role": "q0" }} , 
 	{ "name": "rst_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "rst", "role": "address0" }} , 
 	{ "name": "rst_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rst", "role": "ce0" }} , 
 	{ "name": "rst_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "rst", "role": "q0" }} , 
 	{ "name": "rst_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "rst", "role": "address1" }} , 
 	{ "name": "rst_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rst", "role": "ce1" }} , 
 	{ "name": "rst_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rst", "role": "we1" }} , 
 	{ "name": "rst_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "rst", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "calc_hist",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "image_buffer_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_buffer_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rst", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_mux_16bkb_U1", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	calc_hist {
		image_buffer_0 {Type I LastRead 3 FirstWrite -1}
		image_buffer_1 {Type I LastRead 3 FirstWrite -1}
		image_buffer_2 {Type I LastRead 3 FirstWrite -1}
		image_buffer_3 {Type I LastRead 3 FirstWrite -1}
		image_buffer_4 {Type I LastRead 3 FirstWrite -1}
		image_buffer_5 {Type I LastRead 3 FirstWrite -1}
		image_buffer_6 {Type I LastRead 3 FirstWrite -1}
		image_buffer_7 {Type I LastRead 3 FirstWrite -1}
		image_buffer_8 {Type I LastRead 3 FirstWrite -1}
		image_buffer_9 {Type I LastRead 3 FirstWrite -1}
		image_buffer_10 {Type I LastRead 3 FirstWrite -1}
		image_buffer_11 {Type I LastRead 3 FirstWrite -1}
		image_buffer_12 {Type I LastRead 3 FirstWrite -1}
		image_buffer_13 {Type I LastRead 3 FirstWrite -1}
		image_buffer_14 {Type I LastRead 3 FirstWrite -1}
		image_buffer_15 {Type I LastRead 3 FirstWrite -1}
		rst {Type IO LastRead 7 FirstWrite 8}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1544", "Max" : "1544"}
	, {"Name" : "Interval", "Min" : "1544", "Max" : "1544"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	image_buffer_0 { ap_memory {  { image_buffer_0_address0 mem_address 1 7 }  { image_buffer_0_ce0 mem_ce 1 1 }  { image_buffer_0_q0 mem_dout 0 8 } } }
	image_buffer_1 { ap_memory {  { image_buffer_1_address0 mem_address 1 7 }  { image_buffer_1_ce0 mem_ce 1 1 }  { image_buffer_1_q0 mem_dout 0 8 } } }
	image_buffer_2 { ap_memory {  { image_buffer_2_address0 mem_address 1 7 }  { image_buffer_2_ce0 mem_ce 1 1 }  { image_buffer_2_q0 mem_dout 0 8 } } }
	image_buffer_3 { ap_memory {  { image_buffer_3_address0 mem_address 1 7 }  { image_buffer_3_ce0 mem_ce 1 1 }  { image_buffer_3_q0 mem_dout 0 8 } } }
	image_buffer_4 { ap_memory {  { image_buffer_4_address0 mem_address 1 7 }  { image_buffer_4_ce0 mem_ce 1 1 }  { image_buffer_4_q0 mem_dout 0 8 } } }
	image_buffer_5 { ap_memory {  { image_buffer_5_address0 mem_address 1 7 }  { image_buffer_5_ce0 mem_ce 1 1 }  { image_buffer_5_q0 mem_dout 0 8 } } }
	image_buffer_6 { ap_memory {  { image_buffer_6_address0 mem_address 1 7 }  { image_buffer_6_ce0 mem_ce 1 1 }  { image_buffer_6_q0 mem_dout 0 8 } } }
	image_buffer_7 { ap_memory {  { image_buffer_7_address0 mem_address 1 7 }  { image_buffer_7_ce0 mem_ce 1 1 }  { image_buffer_7_q0 mem_dout 0 8 } } }
	image_buffer_8 { ap_memory {  { image_buffer_8_address0 mem_address 1 7 }  { image_buffer_8_ce0 mem_ce 1 1 }  { image_buffer_8_q0 mem_dout 0 8 } } }
	image_buffer_9 { ap_memory {  { image_buffer_9_address0 mem_address 1 7 }  { image_buffer_9_ce0 mem_ce 1 1 }  { image_buffer_9_q0 mem_dout 0 8 } } }
	image_buffer_10 { ap_memory {  { image_buffer_10_address0 mem_address 1 7 }  { image_buffer_10_ce0 mem_ce 1 1 }  { image_buffer_10_q0 mem_dout 0 8 } } }
	image_buffer_11 { ap_memory {  { image_buffer_11_address0 mem_address 1 7 }  { image_buffer_11_ce0 mem_ce 1 1 }  { image_buffer_11_q0 mem_dout 0 8 } } }
	image_buffer_12 { ap_memory {  { image_buffer_12_address0 mem_address 1 7 }  { image_buffer_12_ce0 mem_ce 1 1 }  { image_buffer_12_q0 mem_dout 0 8 } } }
	image_buffer_13 { ap_memory {  { image_buffer_13_address0 mem_address 1 7 }  { image_buffer_13_ce0 mem_ce 1 1 }  { image_buffer_13_q0 mem_dout 0 8 } } }
	image_buffer_14 { ap_memory {  { image_buffer_14_address0 mem_address 1 7 }  { image_buffer_14_ce0 mem_ce 1 1 }  { image_buffer_14_q0 mem_dout 0 8 } } }
	image_buffer_15 { ap_memory {  { image_buffer_15_address0 mem_address 1 7 }  { image_buffer_15_ce0 mem_ce 1 1 }  { image_buffer_15_q0 mem_dout 0 8 } } }
	rst { ap_memory {  { rst_address0 mem_address 1 6 }  { rst_ce0 mem_ce 1 1 }  { rst_q0 mem_dout 0 16 }  { rst_address1 mem_address 1 6 }  { rst_ce1 mem_ce 1 1 }  { rst_we1 mem_we 1 1 }  { rst_d1 mem_din 1 16 } } }
}
