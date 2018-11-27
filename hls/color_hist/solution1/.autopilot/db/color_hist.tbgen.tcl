set C_TypeInfoList {{ 
"color_hist" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"specs": [[], {"array": [ {"scalar": "int"}, [3]]}] }, {"imageptr": [[],{ "pointer":  {"scalar": "unsigned char"}}] }, {"feature": [[],{ "pointer":  {"scalar": "unsigned short"}}] }],[],""]
}}
set moduleName color_hist
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {color_hist}
set C_modelType { void 0 }
set C_modelArgList {
	{ INPUT_IMAGE int 8 regular {axi_master 0}  }
	{ FEATURE int 16 regular {axi_master 1}  }
	{ specs int 32 regular {axi_slave 0}  }
	{ imageptr int 32 regular {axi_slave 0}  }
	{ feature_r int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "INPUT_IMAGE", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "imageptr","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "imageptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "FEATURE", "interface" : "axi_master", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "feature","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"offset": { "type": "dynamic","port_name": "feature","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "specs", "interface" : "axi_slave", "bundle":"SPECS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "specs","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 2,"step" : 1}]}]}], "offset" : {"in":16}, "offset_end" : {"in":31}} , 
 	{ "Name" : "imageptr", "interface" : "axi_slave", "bundle":"CONTROL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "feature_r", "interface" : "axi_slave", "bundle":"CONTROL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} ]}
# RTL Port declarations: 
set portNum 127
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_INPUT_IMAGE_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_IMAGE_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_INPUT_IMAGE_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_IMAGE_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_INPUT_IMAGE_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_INPUT_IMAGE_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_INPUT_IMAGE_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_INPUT_IMAGE_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_INPUT_IMAGE_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_FEATURE_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_FEATURE_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_FEATURE_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_FEATURE_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_FEATURE_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_FEATURE_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_FEATURE_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_FEATURE_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_FEATURE_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_FEATURE_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_FEATURE_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_FEATURE_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_FEATURE_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_FEATURE_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_FEATURE_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_FEATURE_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_FEATURE_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_FEATURE_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_FEATURE_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_FEATURE_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_FEATURE_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_FEATURE_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_FEATURE_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_FEATURE_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_FEATURE_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_FEATURE_BUSER sc_in sc_lv 1 signal 1 } 
	{ s_axi_CONTROL_BUS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_CONTROL_BUS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_BUS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_BUS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_CONTROL_BUS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_BUS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CONTROL_BUS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
	{ s_axi_SPECS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_SPECS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_SPECS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_SPECS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_SPECS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_SPECS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_SPECS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_SPECS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_SPECS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_SPECS_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_SPECS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_SPECS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_SPECS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_SPECS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_SPECS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_SPECS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_SPECS_BRESP sc_out sc_lv 2 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_CONTROL_BUS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWADDR" },"address":[{"name":"color_hist","role":"start","value":"0","valid_bit":"0"},{"name":"color_hist","role":"continue","value":"0","valid_bit":"4"},{"name":"color_hist","role":"auto_start","value":"0","valid_bit":"7"},{"name":"imageptr","role":"data","value":"16"},{"name":"feature_r","role":"data","value":"24"}] },
	{ "name": "s_axi_CONTROL_BUS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWVALID" } },
	{ "name": "s_axi_CONTROL_BUS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWREADY" } },
	{ "name": "s_axi_CONTROL_BUS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WVALID" } },
	{ "name": "s_axi_CONTROL_BUS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WREADY" } },
	{ "name": "s_axi_CONTROL_BUS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WDATA" } },
	{ "name": "s_axi_CONTROL_BUS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WSTRB" } },
	{ "name": "s_axi_CONTROL_BUS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARADDR" },"address":[{"name":"color_hist","role":"start","value":"0","valid_bit":"0"},{"name":"color_hist","role":"done","value":"0","valid_bit":"1"},{"name":"color_hist","role":"idle","value":"0","valid_bit":"2"},{"name":"color_hist","role":"ready","value":"0","valid_bit":"3"},{"name":"color_hist","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_CONTROL_BUS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARVALID" } },
	{ "name": "s_axi_CONTROL_BUS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARREADY" } },
	{ "name": "s_axi_CONTROL_BUS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RVALID" } },
	{ "name": "s_axi_CONTROL_BUS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RREADY" } },
	{ "name": "s_axi_CONTROL_BUS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RDATA" } },
	{ "name": "s_axi_CONTROL_BUS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RRESP" } },
	{ "name": "s_axi_CONTROL_BUS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BVALID" } },
	{ "name": "s_axi_CONTROL_BUS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BREADY" } },
	{ "name": "s_axi_CONTROL_BUS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "interrupt" } },
	{ "name": "s_axi_SPECS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "SPECS", "role": "AWADDR" },"address":[{"name":"specs","role":"data","value":"16"}] },
	{ "name": "s_axi_SPECS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "AWVALID" } },
	{ "name": "s_axi_SPECS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "AWREADY" } },
	{ "name": "s_axi_SPECS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "WVALID" } },
	{ "name": "s_axi_SPECS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "WREADY" } },
	{ "name": "s_axi_SPECS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "SPECS", "role": "WDATA" } },
	{ "name": "s_axi_SPECS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "SPECS", "role": "WSTRB" } },
	{ "name": "s_axi_SPECS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "SPECS", "role": "ARADDR" },"address":[] },
	{ "name": "s_axi_SPECS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "ARVALID" } },
	{ "name": "s_axi_SPECS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "ARREADY" } },
	{ "name": "s_axi_SPECS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "RVALID" } },
	{ "name": "s_axi_SPECS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "RREADY" } },
	{ "name": "s_axi_SPECS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "SPECS", "role": "RDATA" } },
	{ "name": "s_axi_SPECS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "SPECS", "role": "RRESP" } },
	{ "name": "s_axi_SPECS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "BVALID" } },
	{ "name": "s_axi_SPECS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "SPECS", "role": "BREADY" } },
	{ "name": "s_axi_SPECS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "SPECS", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWVALID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWREADY" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWADDR" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWLEN" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWBURST" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWPROT" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWQOS" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWREGION" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "AWUSER" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "WVALID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "WREADY" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "WDATA" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "WSTRB" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "WLAST" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "WID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "WUSER" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARVALID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARREADY" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARADDR" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARLEN" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARBURST" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARPROT" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARQOS" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARREGION" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "ARUSER" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "RVALID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "RREADY" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "RDATA" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "RLAST" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "RID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "RUSER" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "RRESP" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "BVALID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "BREADY" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "BRESP" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "BID" }} , 
 	{ "name": "m_axi_INPUT_IMAGE_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_IMAGE", "role": "BUSER" }} , 
 	{ "name": "m_axi_FEATURE_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWVALID" }} , 
 	{ "name": "m_axi_FEATURE_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWREADY" }} , 
 	{ "name": "m_axi_FEATURE_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWADDR" }} , 
 	{ "name": "m_axi_FEATURE_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWID" }} , 
 	{ "name": "m_axi_FEATURE_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWLEN" }} , 
 	{ "name": "m_axi_FEATURE_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_FEATURE_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWBURST" }} , 
 	{ "name": "m_axi_FEATURE_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_FEATURE_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_FEATURE_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWPROT" }} , 
 	{ "name": "m_axi_FEATURE_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWQOS" }} , 
 	{ "name": "m_axi_FEATURE_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWREGION" }} , 
 	{ "name": "m_axi_FEATURE_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "AWUSER" }} , 
 	{ "name": "m_axi_FEATURE_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "WVALID" }} , 
 	{ "name": "m_axi_FEATURE_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "WREADY" }} , 
 	{ "name": "m_axi_FEATURE_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "FEATURE", "role": "WDATA" }} , 
 	{ "name": "m_axi_FEATURE_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FEATURE", "role": "WSTRB" }} , 
 	{ "name": "m_axi_FEATURE_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "WLAST" }} , 
 	{ "name": "m_axi_FEATURE_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "WID" }} , 
 	{ "name": "m_axi_FEATURE_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "WUSER" }} , 
 	{ "name": "m_axi_FEATURE_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARVALID" }} , 
 	{ "name": "m_axi_FEATURE_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARREADY" }} , 
 	{ "name": "m_axi_FEATURE_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARADDR" }} , 
 	{ "name": "m_axi_FEATURE_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARID" }} , 
 	{ "name": "m_axi_FEATURE_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARLEN" }} , 
 	{ "name": "m_axi_FEATURE_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_FEATURE_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARBURST" }} , 
 	{ "name": "m_axi_FEATURE_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_FEATURE_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_FEATURE_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARPROT" }} , 
 	{ "name": "m_axi_FEATURE_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARQOS" }} , 
 	{ "name": "m_axi_FEATURE_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARREGION" }} , 
 	{ "name": "m_axi_FEATURE_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "ARUSER" }} , 
 	{ "name": "m_axi_FEATURE_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "RVALID" }} , 
 	{ "name": "m_axi_FEATURE_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "RREADY" }} , 
 	{ "name": "m_axi_FEATURE_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "FEATURE", "role": "RDATA" }} , 
 	{ "name": "m_axi_FEATURE_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "RLAST" }} , 
 	{ "name": "m_axi_FEATURE_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "RID" }} , 
 	{ "name": "m_axi_FEATURE_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "RUSER" }} , 
 	{ "name": "m_axi_FEATURE_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "FEATURE", "role": "RRESP" }} , 
 	{ "name": "m_axi_FEATURE_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "BVALID" }} , 
 	{ "name": "m_axi_FEATURE_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "BREADY" }} , 
 	{ "name": "m_axi_FEATURE_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "FEATURE", "role": "BRESP" }} , 
 	{ "name": "m_axi_FEATURE_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "BID" }} , 
 	{ "name": "m_axi_FEATURE_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "FEATURE", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "24", "25", "26", "27", "28"],
		"CDFG" : "color_hist",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_calc_hist_fu_580"}],
		"Port" : [
			{"Name" : "INPUT_IMAGE", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "INPUT_IMAGE_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "INPUT_IMAGE_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "FEATURE", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "FEATURE_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "FEATURE_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "FEATURE_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "specs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "imageptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "feature_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_CONTROL_BUS_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_SPECS_s_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_INPUT_IMAGE_m_axi_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_FEATURE_m_axi_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_1_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_2_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_4_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_5_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_6_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_7_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_8_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_9_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_10_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_11_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_12_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_13_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_14_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_buffer_15_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rst_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_calc_hist_fu_580", "Parent" : "0", "Child" : ["23"],
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
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calc_hist_fu_580.color_hist_mux_16bkb_U1", "Parent" : "22"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_urem_1sc4_U20", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_mul_32tde_U21", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_mul_32tde_U22", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_urem_1udo_U23", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.color_hist_mul_muvdy_U24", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	color_hist {
		INPUT_IMAGE {Type I LastRead 26 FirstWrite -1}
		FEATURE {Type O LastRead 16 FirstWrite 17}
		specs {Type I LastRead 2 FirstWrite -1}
		imageptr {Type I LastRead 3 FirstWrite -1}
		feature_r {Type I LastRead 3 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "3188", "Max" : "3188"}
	, {"Name" : "Interval", "Min" : "3189", "Max" : "3189"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	INPUT_IMAGE { m_axi {  { m_axi_INPUT_IMAGE_AWVALID VALID 1 1 }  { m_axi_INPUT_IMAGE_AWREADY READY 0 1 }  { m_axi_INPUT_IMAGE_AWADDR ADDR 1 32 }  { m_axi_INPUT_IMAGE_AWID ID 1 1 }  { m_axi_INPUT_IMAGE_AWLEN LEN 1 8 }  { m_axi_INPUT_IMAGE_AWSIZE SIZE 1 3 }  { m_axi_INPUT_IMAGE_AWBURST BURST 1 2 }  { m_axi_INPUT_IMAGE_AWLOCK LOCK 1 2 }  { m_axi_INPUT_IMAGE_AWCACHE CACHE 1 4 }  { m_axi_INPUT_IMAGE_AWPROT PROT 1 3 }  { m_axi_INPUT_IMAGE_AWQOS QOS 1 4 }  { m_axi_INPUT_IMAGE_AWREGION REGION 1 4 }  { m_axi_INPUT_IMAGE_AWUSER USER 1 1 }  { m_axi_INPUT_IMAGE_WVALID VALID 1 1 }  { m_axi_INPUT_IMAGE_WREADY READY 0 1 }  { m_axi_INPUT_IMAGE_WDATA DATA 1 32 }  { m_axi_INPUT_IMAGE_WSTRB STRB 1 4 }  { m_axi_INPUT_IMAGE_WLAST LAST 1 1 }  { m_axi_INPUT_IMAGE_WID ID 1 1 }  { m_axi_INPUT_IMAGE_WUSER USER 1 1 }  { m_axi_INPUT_IMAGE_ARVALID VALID 1 1 }  { m_axi_INPUT_IMAGE_ARREADY READY 0 1 }  { m_axi_INPUT_IMAGE_ARADDR ADDR 1 32 }  { m_axi_INPUT_IMAGE_ARID ID 1 1 }  { m_axi_INPUT_IMAGE_ARLEN LEN 1 8 }  { m_axi_INPUT_IMAGE_ARSIZE SIZE 1 3 }  { m_axi_INPUT_IMAGE_ARBURST BURST 1 2 }  { m_axi_INPUT_IMAGE_ARLOCK LOCK 1 2 }  { m_axi_INPUT_IMAGE_ARCACHE CACHE 1 4 }  { m_axi_INPUT_IMAGE_ARPROT PROT 1 3 }  { m_axi_INPUT_IMAGE_ARQOS QOS 1 4 }  { m_axi_INPUT_IMAGE_ARREGION REGION 1 4 }  { m_axi_INPUT_IMAGE_ARUSER USER 1 1 }  { m_axi_INPUT_IMAGE_RVALID VALID 0 1 }  { m_axi_INPUT_IMAGE_RREADY READY 1 1 }  { m_axi_INPUT_IMAGE_RDATA DATA 0 32 }  { m_axi_INPUT_IMAGE_RLAST LAST 0 1 }  { m_axi_INPUT_IMAGE_RID ID 0 1 }  { m_axi_INPUT_IMAGE_RUSER USER 0 1 }  { m_axi_INPUT_IMAGE_RRESP RESP 0 2 }  { m_axi_INPUT_IMAGE_BVALID VALID 0 1 }  { m_axi_INPUT_IMAGE_BREADY READY 1 1 }  { m_axi_INPUT_IMAGE_BRESP RESP 0 2 }  { m_axi_INPUT_IMAGE_BID ID 0 1 }  { m_axi_INPUT_IMAGE_BUSER USER 0 1 } } }
	FEATURE { m_axi {  { m_axi_FEATURE_AWVALID VALID 1 1 }  { m_axi_FEATURE_AWREADY READY 0 1 }  { m_axi_FEATURE_AWADDR ADDR 1 32 }  { m_axi_FEATURE_AWID ID 1 1 }  { m_axi_FEATURE_AWLEN LEN 1 8 }  { m_axi_FEATURE_AWSIZE SIZE 1 3 }  { m_axi_FEATURE_AWBURST BURST 1 2 }  { m_axi_FEATURE_AWLOCK LOCK 1 2 }  { m_axi_FEATURE_AWCACHE CACHE 1 4 }  { m_axi_FEATURE_AWPROT PROT 1 3 }  { m_axi_FEATURE_AWQOS QOS 1 4 }  { m_axi_FEATURE_AWREGION REGION 1 4 }  { m_axi_FEATURE_AWUSER USER 1 1 }  { m_axi_FEATURE_WVALID VALID 1 1 }  { m_axi_FEATURE_WREADY READY 0 1 }  { m_axi_FEATURE_WDATA DATA 1 32 }  { m_axi_FEATURE_WSTRB STRB 1 4 }  { m_axi_FEATURE_WLAST LAST 1 1 }  { m_axi_FEATURE_WID ID 1 1 }  { m_axi_FEATURE_WUSER USER 1 1 }  { m_axi_FEATURE_ARVALID VALID 1 1 }  { m_axi_FEATURE_ARREADY READY 0 1 }  { m_axi_FEATURE_ARADDR ADDR 1 32 }  { m_axi_FEATURE_ARID ID 1 1 }  { m_axi_FEATURE_ARLEN LEN 1 8 }  { m_axi_FEATURE_ARSIZE SIZE 1 3 }  { m_axi_FEATURE_ARBURST BURST 1 2 }  { m_axi_FEATURE_ARLOCK LOCK 1 2 }  { m_axi_FEATURE_ARCACHE CACHE 1 4 }  { m_axi_FEATURE_ARPROT PROT 1 3 }  { m_axi_FEATURE_ARQOS QOS 1 4 }  { m_axi_FEATURE_ARREGION REGION 1 4 }  { m_axi_FEATURE_ARUSER USER 1 1 }  { m_axi_FEATURE_RVALID VALID 0 1 }  { m_axi_FEATURE_RREADY READY 1 1 }  { m_axi_FEATURE_RDATA DATA 0 32 }  { m_axi_FEATURE_RLAST LAST 0 1 }  { m_axi_FEATURE_RID ID 0 1 }  { m_axi_FEATURE_RUSER USER 0 1 }  { m_axi_FEATURE_RRESP RESP 0 2 }  { m_axi_FEATURE_BVALID VALID 0 1 }  { m_axi_FEATURE_BREADY READY 1 1 }  { m_axi_FEATURE_BRESP RESP 0 2 }  { m_axi_FEATURE_BID ID 0 1 }  { m_axi_FEATURE_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ INPUT_IMAGE { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ FEATURE { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ INPUT_IMAGE 1 }
	{ FEATURE 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ INPUT_IMAGE 1 }
	{ FEATURE 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
