; ModuleID = '/home/lp6m/Desktop/imagedDetectionHW/hls/color_hist/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@read_input_memcpy_OC = internal unnamed_addr constant [28 x i8] c"read_input_memcpy..imageptr\00"
@mode1 = internal constant [10 x i8] c"s_axilite\00"
@mode = internal constant [10 x i8] c"s_axilite\00"
@memset_rst_str = internal unnamed_addr constant [11 x i8] c"memset_rst\00"
@memcpy_OC_feature_OC = internal unnamed_addr constant [23 x i8] c"memcpy.feature.rst.gep\00"
@memcpy_OC_OC_imagep = internal unnamed_addr constant [17 x i8] c"memcpy..imageptr\00"
@loop_y_loop_x_loop_i = internal unnamed_addr constant [21 x i8] c"loop_y_loop_x_loop_i\00"
@loop_x_loop_i_str = internal unnamed_addr constant [14 x i8] c"loop_x_loop_i\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@color_hist_str = internal unnamed_addr constant [11 x i8] c"color_hist\00"
@burstwrite_OC_region = internal unnamed_addr constant [18 x i8] c"burstwrite.region\00"
@burstread_OC_region_s = internal unnamed_addr constant [17 x i8] c"burstread.region\00"
@bundle2 = internal constant [1 x i8] zeroinitializer
@bundle = internal constant [1 x i8] zeroinitializer
@RAM_1P_str = internal unnamed_addr constant [7 x i8] c"RAM_1P\00"
@p_str8 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str7 = private unnamed_addr constant [8 x i8] c"FEATURE\00", align 1
@p_str6 = private unnamed_addr constant [6 x i8] c"slave\00", align 1
@p_str5 = private unnamed_addr constant [12 x i8] c"INPUT_IMAGE\00", align 1
@p_str4 = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1
@p_str3 = private unnamed_addr constant [12 x i8] c"CONTROL_BUS\00", align 1
@p_str2 = private unnamed_addr constant [6 x i8] c"SPECS\00", align 1
@p_str14 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str13 = private unnamed_addr constant [7 x i8] c"loop_i\00", align 1
@p_str10 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1

declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i30 @llvm.part.select.i30(i30, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define void @color_hist(i8* %INPUT_IMAGE, i16* %FEATURE, [3 x i32]* %specs, i32 %imageptr, i32 %feature_r) {
  %feature_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %feature_r)
  %imageptr_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %imageptr)
  %feature3 = call i31 @_ssdm_op_PartSelect.i31.i32.i32.i32(i32 %feature_read, i32 1, i32 31)
  %tmp_3 = zext i31 %feature3 to i64
  %FEATURE_addr = getelementptr i16* %FEATURE, i64 %tmp_3
  %tmp_10_cast = sext i32 %imageptr_read to i33
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %FEATURE), !map !30
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %INPUT_IMAGE), !map !34
  call void (...)* @_ssdm_op_SpecBitsMap([3 x i32]* %specs) nounwind, !map !38
  %specs_addr = getelementptr [3 x i32]* %specs, i64 0, i64 0
  call void (...)* @_ssdm_op_SpecTopModule([11 x i8]* @color_hist_str) nounwind
  %image_buffer_0 = alloca [96 x i8], align 1
  %image_buffer_1 = alloca [96 x i8], align 1
  %image_buffer_2 = alloca [96 x i8], align 1
  %image_buffer_3 = alloca [96 x i8], align 1
  %image_buffer_4 = alloca [96 x i8], align 1
  %image_buffer_5 = alloca [96 x i8], align 1
  %image_buffer_6 = alloca [96 x i8], align 1
  %image_buffer_7 = alloca [96 x i8], align 1
  %image_buffer_8 = alloca [96 x i8], align 1
  %image_buffer_9 = alloca [96 x i8], align 1
  %image_buffer_10 = alloca [96 x i8], align 1
  %image_buffer_11 = alloca [96 x i8], align 1
  %image_buffer_12 = alloca [96 x i8], align 1
  %image_buffer_13 = alloca [96 x i8], align 1
  %image_buffer_14 = alloca [96 x i8], align 1
  %image_buffer_15 = alloca [96 x i8], align 1
  %rst = alloca [36 x i16], align 16
  %empty = call i32 (...)* @_ssdm_op_SpecMemCore([3 x i32]* %specs, [1 x i8]* @p_str8, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str8, i32 -1, [1 x i8]* @p_str8, [1 x i8]* @p_str8, [1 x i8]* @p_str8, [1 x i8]* @p_str8, [1 x i8]* @p_str8)
  call void (...)* @_ssdm_op_SpecInterface([3 x i32]* %specs, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 16, [6 x i8]* @p_str2, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str3, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i8* %INPUT_IMAGE, [6 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str5, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 %imageptr, [10 x i8]* @mode, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @bundle, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i16* %FEATURE, [6 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str7, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 %feature_r, [10 x i8]* @mode1, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @bundle2, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  %y = load i32* %specs_addr, align 4
  %specs_addr_1 = getelementptr [3 x i32]* %specs, i64 0, i64 1
  %x = load i32* %specs_addr_1, align 4
  %specs_addr_2 = getelementptr [3 x i32]* %specs, i64 0, i64 2
  %original_width = load i32* %specs_addr_2, align 4
  br label %burst.rd.header

burst.rd.header:                                  ; preds = %0, %burst.rd.body21
  %indvar_flatten = phi i11 [ 0, %0 ], [ %indvar_flatten_next, %burst.rd.body21 ]
  %i = phi i5 [ 0, %0 ], [ %i_mid2, %burst.rd.body21 ]
  %indvar = phi i7 [ 0, %0 ], [ %indvar_next, %burst.rd.body21 ]
  %i_cast7 = zext i5 %i to i32
  %tmp = add nsw i32 %i_cast7, %y
  %tmp_1 = mul nsw i32 %tmp, %original_width
  %tmp_2 = add nsw i32 %tmp_1, %x
  %tmp_7 = shl i32 %tmp_2, 2
  %offset = sub i32 %tmp_7, %tmp_2
  %tmp_10 = trunc i5 %i to i4
  %p_shl3 = call i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4 %tmp_10, i7 0)
  %p_shl3_cast = zext i11 %p_shl3 to i12
  %p_shl4 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_10, i5 0)
  %p_shl4_cast = zext i9 %p_shl4 to i12
  %tmp_8 = sub i12 %p_shl3_cast, %p_shl4_cast
  %exitcond_flatten = icmp eq i11 %indvar_flatten, -512
  %indvar_flatten_next = add i11 1, %indvar_flatten
  br i1 %exitcond_flatten, label %meminst.preheader, label %burst.rd.end

meminst.preheader:                                ; preds = %burst.rd.header
  br label %meminst

burst.rd.body21:                                  ; preds = %branch15, %branch14, %branch13, %branch12, %branch11, %branch10, %branch9, %branch8, %branch7, %branch6, %branch5, %branch4, %branch3, %branch2, %branch1, %branch0
  %burstread_rend = call i32 (...)* @_ssdm_op_SpecRegionEnd([17 x i8]* @burstread_OC_region_s, i32 %burstread_rbegin) nounwind
  br label %burst.rd.header

burst.rd.end:                                     ; preds = %burst.rd.header
  call void (...)* @_ssdm_op_SpecLoopName([28 x i8]* @read_input_memcpy_OC)
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1536, i64 1536, i64 1536) nounwind
  %exitcond = icmp eq i7 %indvar, -32
  %indvar_mid2 = select i1 %exitcond, i7 0, i7 %indvar
  %i_s = add i5 1, %i
  %i_cast7_mid1 = zext i5 %i_s to i32
  %tmp_mid1 = add nsw i32 %i_cast7_mid1, %y
  %tmp_1_mid1 = mul nsw i32 %tmp_mid1, %original_width
  %tmp_2_mid1 = add nsw i32 %tmp_1_mid1, %x
  %tmp_12 = shl i32 %tmp_2_mid1, 2
  %offset_mid1 = sub i32 %tmp_12, %tmp_2_mid1
  %tmp_13 = select i1 %exitcond, i32 %offset_mid1, i32 %offset
  %tmp_3_mid2_cast = sext i32 %tmp_13 to i33
  %tmp_14 = trunc i5 %i_s to i4
  %p_shl3_mid1 = call i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4 %tmp_14, i7 0)
  %p_shl3_cast_mid1 = zext i11 %p_shl3_mid1 to i12
  %p_shl4_mid1 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_14, i5 0)
  %p_shl4_cast_mid1 = zext i9 %p_shl4_mid1 to i12
  %tmp_8_mid1 = sub i12 %p_shl3_cast_mid1, %p_shl4_cast_mid1
  %tmp_8_cast_cast_mid2_1 = select i1 %exitcond, i12 %tmp_8_mid1, i12 %tmp_8
  %tmp_8_cast_cast_mid2 = sext i12 %tmp_8_cast_cast_mid2_1 to i14
  %i_mid2 = select i1 %exitcond, i5 %i_s, i5 %i
  %indvar_cast4_cast = zext i7 %indvar_mid2 to i14
  %burstread_rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin([17 x i8]* @burstread_OC_region_s) nounwind
  %imageptr2_sum = add i33 %tmp_10_cast, %tmp_3_mid2_cast
  %imageptr2_sum_cast = sext i33 %imageptr2_sum to i64
  %INPUT_IMAGE_addr = getelementptr inbounds i8* %INPUT_IMAGE, i64 %imageptr2_sum_cast
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str10)
  call void (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memcpy_OC_OC_imagep)
  %indvar_next = add i7 1, %indvar_mid2
  %tmp_15 = urem i11 %indvar_flatten, 96
  %tmp_16 = icmp eq i11 %tmp_15, 0
  br i1 %tmp_16, label %ReqBB, label %BurstBB

ReqBB:                                            ; preds = %burst.rd.end
  %INPUT_IMAGE_addr_rd_s = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %INPUT_IMAGE_addr, i32 96)
  br label %BurstBB

BurstBB:                                          ; preds = %ReqBB, %burst.rd.end
  %INPUT_IMAGE_addr_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %INPUT_IMAGE_addr)
  %tmp_9 = add i14 %tmp_8_cast_cast_mid2, %indvar_cast4_cast
  %zext_cast = zext i14 %tmp_9 to i30
  %mul = mul i30 %zext_cast, 21846
  %tmp_6 = urem i14 %tmp_9, 96
  %tmp_s = zext i14 %tmp_6 to i64
  %tmp_t = call i4 @_ssdm_op_PartSelect.i4.i30.i32.i32(i30 %mul, i32 21, i32 24)
  %image_buffer_0_addr = getelementptr [96 x i8]* %image_buffer_0, i64 0, i64 %tmp_s
  %image_buffer_1_addr = getelementptr [96 x i8]* %image_buffer_1, i64 0, i64 %tmp_s
  %image_buffer_2_addr = getelementptr [96 x i8]* %image_buffer_2, i64 0, i64 %tmp_s
  %image_buffer_3_addr = getelementptr [96 x i8]* %image_buffer_3, i64 0, i64 %tmp_s
  %image_buffer_4_addr = getelementptr [96 x i8]* %image_buffer_4, i64 0, i64 %tmp_s
  %image_buffer_5_addr = getelementptr [96 x i8]* %image_buffer_5, i64 0, i64 %tmp_s
  %image_buffer_6_addr = getelementptr [96 x i8]* %image_buffer_6, i64 0, i64 %tmp_s
  %image_buffer_7_addr = getelementptr [96 x i8]* %image_buffer_7, i64 0, i64 %tmp_s
  %image_buffer_8_addr = getelementptr [96 x i8]* %image_buffer_8, i64 0, i64 %tmp_s
  %image_buffer_9_addr = getelementptr [96 x i8]* %image_buffer_9, i64 0, i64 %tmp_s
  %image_buffer_10_add = getelementptr [96 x i8]* %image_buffer_10, i64 0, i64 %tmp_s
  %image_buffer_11_add = getelementptr [96 x i8]* %image_buffer_11, i64 0, i64 %tmp_s
  %image_buffer_12_add = getelementptr [96 x i8]* %image_buffer_12, i64 0, i64 %tmp_s
  %image_buffer_13_add = getelementptr [96 x i8]* %image_buffer_13, i64 0, i64 %tmp_s
  %image_buffer_14_add = getelementptr [96 x i8]* %image_buffer_14, i64 0, i64 %tmp_s
  %image_buffer_15_add = getelementptr [96 x i8]* %image_buffer_15, i64 0, i64 %tmp_s
  switch i4 %tmp_t, label %branch15 [
    i4 0, label %branch0
    i4 1, label %branch1
    i4 2, label %branch2
    i4 3, label %branch3
    i4 4, label %branch4
    i4 5, label %branch5
    i4 6, label %branch6
    i4 7, label %branch7
    i4 -8, label %branch8
    i4 -7, label %branch9
    i4 -6, label %branch10
    i4 -5, label %branch11
    i4 -4, label %branch12
    i4 -3, label %branch13
    i4 -2, label %branch14
  ]

meminst:                                          ; preds = %meminst.preheader, %meminst
  %invdar = phi i6 [ %indvarinc, %meminst ], [ 0, %meminst.preheader ]
  %indvarinc = add i6 %invdar, 1
  %tmp_4 = zext i6 %invdar to i64
  %rst_addr = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_4
  store i16 0, i16* %rst_addr, align 2
  %tmp_5 = icmp eq i6 %invdar, -29
  call void (...)* @_ssdm_op_SpecLoopName([11 x i8]* @memset_rst_str)
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 36, i64 36, i64 36) nounwind
  br i1 %tmp_5, label %1, label %meminst

; <label>:1                                       ; preds = %meminst
  call fastcc void @calc_hist([96 x i8]* %image_buffer_0, [96 x i8]* %image_buffer_1, [96 x i8]* %image_buffer_2, [96 x i8]* %image_buffer_3, [96 x i8]* %image_buffer_4, [96 x i8]* %image_buffer_5, [96 x i8]* %image_buffer_6, [96 x i8]* %image_buffer_7, [96 x i8]* %image_buffer_8, [96 x i8]* %image_buffer_9, [96 x i8]* %image_buffer_10, [96 x i8]* %image_buffer_11, [96 x i8]* %image_buffer_12, [96 x i8]* %image_buffer_13, [96 x i8]* %image_buffer_14, [96 x i8]* %image_buffer_15, [36 x i16]* %rst) nounwind
  %FEATURE_addr_wr_req = call i1 @_ssdm_op_WriteReq.m_axi.i16P(i16* %FEATURE_addr, i32 36)
  br label %burst.wr.header

burst.wr.header:                                  ; preds = %burst.wr.body, %1
  %indvar8 = phi i6 [ 0, %1 ], [ %indvar_next9, %burst.wr.body ]
  %exitcond2 = icmp eq i6 %indvar8, -28
  %indvar_next9 = add i6 %indvar8, 1
  br i1 %exitcond2, label %memcpy.tail, label %burst.wr.body

burst.wr.body:                                    ; preds = %burst.wr.header
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 36, i64 36, i64 36) nounwind
  %burstwrite_rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin([18 x i8]* @burstwrite_OC_region) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str14)
  call void (...)* @_ssdm_op_SpecLoopName([23 x i8]* @memcpy_OC_feature_OC)
  %tmp_11 = zext i6 %indvar8 to i64
  %rst_addr_1 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_11
  %rst_load = load i16* %rst_addr_1, align 2
  call void @_ssdm_op_Write.m_axi.i16P(i16* %FEATURE_addr, i16 %rst_load, i2 -1)
  %burstwrite_rend = call i32 (...)* @_ssdm_op_SpecRegionEnd([18 x i8]* @burstwrite_OC_region, i32 %burstwrite_rbegin) nounwind
  br label %burst.wr.header

memcpy.tail:                                      ; preds = %burst.wr.header
  %FEATURE_addr_wr_resp = call i1 @_ssdm_op_WriteResp.m_axi.i16P(i16* %FEATURE_addr)
  ret void

branch0:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_0_addr, align 1
  br label %burst.rd.body21

branch1:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_1_addr, align 1
  br label %burst.rd.body21

branch2:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_2_addr, align 1
  br label %burst.rd.body21

branch3:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_3_addr, align 1
  br label %burst.rd.body21

branch4:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_4_addr, align 1
  br label %burst.rd.body21

branch5:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_5_addr, align 1
  br label %burst.rd.body21

branch6:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_6_addr, align 1
  br label %burst.rd.body21

branch7:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_7_addr, align 1
  br label %burst.rd.body21

branch8:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_8_addr, align 1
  br label %burst.rd.body21

branch9:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_9_addr, align 1
  br label %burst.rd.body21

branch10:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_10_add, align 1
  br label %burst.rd.body21

branch11:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_11_add, align 1
  br label %burst.rd.body21

branch12:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_12_add, align 1
  br label %burst.rd.body21

branch13:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_13_add, align 1
  br label %burst.rd.body21

branch14:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_14_add, align 1
  br label %burst.rd.body21

branch15:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_15_add, align 1
  br label %burst.rd.body21
}

define internal fastcc void @calc_hist([96 x i8]* nocapture %image_buffer_0, [96 x i8]* nocapture %image_buffer_1, [96 x i8]* nocapture %image_buffer_2, [96 x i8]* nocapture %image_buffer_3, [96 x i8]* nocapture %image_buffer_4, [96 x i8]* nocapture %image_buffer_5, [96 x i8]* nocapture %image_buffer_6, [96 x i8]* nocapture %image_buffer_7, [96 x i8]* nocapture %image_buffer_8, [96 x i8]* nocapture %image_buffer_9, [96 x i8]* nocapture %image_buffer_10, [96 x i8]* nocapture %image_buffer_11, [96 x i8]* nocapture %image_buffer_12, [96 x i8]* nocapture %image_buffer_13, [96 x i8]* nocapture %image_buffer_14, [96 x i8]* nocapture %image_buffer_15, [36 x i16]* nocapture %rst) {
  br label %1

; <label>:1                                       ; preds = %0, %ifBlock
  %indvar_flatten1 = phi i11 [ 0, %0 ], [ %indvar_flatten_next1, %ifBlock ]
  %y = phi i5 [ 0, %0 ], [ %y_t_mid2_v, %ifBlock ]
  %indvar_flatten = phi i8 [ 0, %0 ], [ %indvar_flatten_next, %ifBlock ]
  %x = phi i6 [ 0, %0 ], [ %x_mid2, %ifBlock ]
  %i = phi i2 [ 0, %0 ], [ %i_1, %ifBlock ]
  %x_cast4 = zext i6 %x to i8
  %tmp = trunc i6 %x to i5
  %p_shl = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %tmp, i2 0)
  %p_shl_cast = zext i7 %p_shl to i8
  %tmp_s = sub i8 %p_shl_cast, %x_cast4
  %exitcond_flatten1 = icmp eq i11 %indvar_flatten1, -512
  %indvar_flatten_next1 = add i11 1, %indvar_flatten1
  br i1 %exitcond_flatten1, label %24, label %.reset6

; <label>:2                                       ; preds = %.reset6
  %p_shl1 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl1_cast = zext i6 %p_shl1 to i7
  %p_shl2 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl2_cast = zext i4 %p_shl2 to i7
  %tmp_16 = sub i7 %p_shl1_cast, %p_shl2_cast
  %tmp_16_cast = sext i7 %tmp_16 to i32
  %tmp_17 = zext i32 %tmp_16_cast to i64
  %rst_addr = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_17
  %rst_load = load i16* %rst_addr, align 2
  %tmp_18 = add i16 %rst_load, 1
  store i16 %tmp_18, i16* %rst_addr, align 2
  br label %ifBlock

; <label>:3                                       ; preds = %.reset6
  %tmp_19 = icmp ult i8 %pix, 42
  br i1 %tmp_19, label %4, label %._crit_edge

; <label>:4                                       ; preds = %3
  %p_shl3 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl3_cast = zext i6 %p_shl3 to i7
  %p_shl4 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl4_cast = zext i4 %p_shl4 to i7
  %tmp_20 = sub i7 %p_shl3_cast, %p_shl4_cast
  %tmp_20_cast = sext i7 %tmp_20 to i32
  %tmp_21 = or i32 %tmp_20_cast, 1
  %tmp_22 = zext i32 %tmp_21 to i64
  %rst_addr_2 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_22
  %rst_load_1 = load i16* %rst_addr_2, align 2
  %tmp_23 = add i16 %rst_load_1, 1
  store i16 %tmp_23, i16* %rst_addr_2, align 2
  br label %23

._crit_edge:                                      ; preds = %3
  %tmp_73 = call i2 @_ssdm_op_PartSelect.i2.i8.i32.i32(i8 %pix, i32 6, i32 7)
  %icmp = icmp eq i2 %tmp_73, 0
  br i1 %icmp, label %5, label %._crit_edge4

; <label>:5                                       ; preds = %._crit_edge
  %p_shl5 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl5_cast = zext i6 %p_shl5 to i7
  %p_shl6 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl6_cast = zext i4 %p_shl6 to i7
  %tmp_25 = sub i7 %p_shl5_cast, %p_shl6_cast
  %tmp_26 = or i7 %tmp_25, 2
  %tmp_26_cast = sext i7 %tmp_26 to i32
  %tmp_27 = zext i32 %tmp_26_cast to i64
  %rst_addr_3 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_27
  %rst_load_2 = load i16* %rst_addr_3, align 2
  %tmp_28 = add i16 %rst_load_2, 1
  store i16 %tmp_28, i16* %rst_addr_3, align 2
  br label %22

._crit_edge4:                                     ; preds = %._crit_edge
  %tmp_29 = icmp ult i8 %pix, 85
  br i1 %tmp_29, label %6, label %._crit_edge6

; <label>:6                                       ; preds = %._crit_edge4
  %p_shl7 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl7_cast = zext i6 %p_shl7 to i7
  %p_shl8 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl8_cast = zext i4 %p_shl8 to i7
  %tmp_30 = sub i7 %p_shl7_cast, %p_shl8_cast
  %tmp_31 = or i7 %tmp_30, 3
  %tmp_31_cast = sext i7 %tmp_31 to i32
  %tmp_32 = zext i32 %tmp_31_cast to i64
  %rst_addr_4 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_32
  %rst_load_3 = load i16* %rst_addr_4, align 2
  %tmp_33 = add i16 %rst_load_3, 1
  store i16 %tmp_33, i16* %rst_addr_4, align 2
  br label %21

._crit_edge6:                                     ; preds = %._crit_edge4
  %tmp_34 = icmp ult i8 %pix, 106
  br i1 %tmp_34, label %7, label %._crit_edge8

; <label>:7                                       ; preds = %._crit_edge6
  %p_shl9 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl9_cast = zext i6 %p_shl9 to i7
  %p_shl10 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl10_cast = zext i4 %p_shl10 to i7
  %tmp_35 = sub i7 %p_shl9_cast, %p_shl10_cast
  %tmp_36 = add i7 %tmp_35, 4
  %tmp_36_cast = sext i7 %tmp_36 to i32
  %tmp_37 = zext i32 %tmp_36_cast to i64
  %rst_addr_5 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_37
  %rst_load_4 = load i16* %rst_addr_5, align 2
  %tmp_38 = add i16 %rst_load_4, 1
  store i16 %tmp_38, i16* %rst_addr_5, align 2
  br label %20

._crit_edge8:                                     ; preds = %._crit_edge6
  %tmp_74 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %pix, i32 7)
  br i1 %tmp_74, label %._crit_edge10, label %8

; <label>:8                                       ; preds = %._crit_edge8
  %p_shl11 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl11_cast = zext i6 %p_shl11 to i7
  %p_shl12 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl12_cast = zext i4 %p_shl12 to i7
  %tmp_40 = sub i7 %p_shl11_cast, %p_shl12_cast
  %tmp_41 = add i7 %tmp_40, 5
  %tmp_41_cast = sext i7 %tmp_41 to i32
  %tmp_42 = zext i32 %tmp_41_cast to i64
  %rst_addr_6 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_42
  %rst_load_5 = load i16* %rst_addr_6, align 2
  %tmp_43 = add i16 %rst_load_5, 1
  store i16 %tmp_43, i16* %rst_addr_6, align 2
  br label %19

._crit_edge10:                                    ; preds = %._crit_edge8
  %tmp_44 = icmp ult i8 %pix, -107
  br i1 %tmp_44, label %9, label %._crit_edge12

; <label>:9                                       ; preds = %._crit_edge10
  %p_shl13 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl13_cast = zext i6 %p_shl13 to i7
  %p_shl14 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl14_cast = zext i4 %p_shl14 to i7
  %tmp_45 = sub i7 %p_shl13_cast, %p_shl14_cast
  %tmp_46 = add i7 %tmp_45, 6
  %tmp_46_cast = sext i7 %tmp_46 to i32
  %tmp_47 = zext i32 %tmp_46_cast to i64
  %rst_addr_7 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_47
  %rst_load_6 = load i16* %rst_addr_7, align 2
  %tmp_48 = add i16 %rst_load_6, 1
  store i16 %tmp_48, i16* %rst_addr_7, align 2
  br label %18

._crit_edge12:                                    ; preds = %._crit_edge10
  %tmp_49 = icmp ult i8 %pix, -86
  br i1 %tmp_49, label %10, label %._crit_edge14

; <label>:10                                      ; preds = %._crit_edge12
  %p_shl15 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl15_cast = zext i6 %p_shl15 to i7
  %p_shl16 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl16_cast = zext i4 %p_shl16 to i7
  %tmp_50 = sub i7 %p_shl15_cast, %p_shl16_cast
  %tmp_51 = add i7 %tmp_50, 7
  %tmp_51_cast = sext i7 %tmp_51 to i32
  %tmp_52 = zext i32 %tmp_51_cast to i64
  %rst_addr_8 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_52
  %rst_load_7 = load i16* %rst_addr_8, align 2
  %tmp_53 = add i16 %rst_load_7, 1
  store i16 %tmp_53, i16* %rst_addr_8, align 2
  br label %17

._crit_edge14:                                    ; preds = %._crit_edge12
  %tmp_54 = icmp ult i8 %pix, -64
  br i1 %tmp_54, label %11, label %._crit_edge16

; <label>:11                                      ; preds = %._crit_edge14
  %p_shl17 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl17_cast = zext i6 %p_shl17 to i7
  %p_shl18 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl18_cast = zext i4 %p_shl18 to i7
  %tmp_55 = sub i7 %p_shl17_cast, %p_shl18_cast
  %tmp_56 = add i7 %tmp_55, 8
  %tmp_57 = zext i7 %tmp_56 to i64
  %rst_addr_9 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_57
  %rst_load_8 = load i16* %rst_addr_9, align 2
  %tmp_58 = add i16 %rst_load_8, 1
  store i16 %tmp_58, i16* %rst_addr_9, align 2
  br label %16

._crit_edge16:                                    ; preds = %._crit_edge14
  %tmp_59 = icmp ult i8 %pix, -43
  br i1 %tmp_59, label %12, label %._crit_edge18

; <label>:12                                      ; preds = %._crit_edge16
  %p_shl19 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl19_cast = zext i6 %p_shl19 to i7
  %p_shl20 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl20_cast = zext i4 %p_shl20 to i7
  %tmp_60 = sub i7 %p_shl19_cast, %p_shl20_cast
  %tmp_61 = add i7 %tmp_60, 9
  %tmp_62 = zext i7 %tmp_61 to i64
  %rst_addr_10 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_62
  %rst_load_9 = load i16* %rst_addr_10, align 2
  %tmp_63 = add i16 %rst_load_9, 1
  store i16 %tmp_63, i16* %rst_addr_10, align 2
  br label %15

._crit_edge18:                                    ; preds = %._crit_edge16
  %tmp_64 = icmp ult i8 %pix, -22
  %p_shl21 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0)
  %p_shl21_cast = zext i6 %p_shl21 to i7
  %p_shl22 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0)
  %p_shl22_cast = zext i4 %p_shl22 to i7
  %tmp_65 = sub i7 %p_shl21_cast, %p_shl22_cast
  br i1 %tmp_64, label %13, label %._crit_edge20

; <label>:13                                      ; preds = %._crit_edge18
  %tmp_66 = add i7 %tmp_65, 10
  %tmp_67 = zext i7 %tmp_66 to i64
  %rst_addr_11 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_67
  %rst_load_11 = load i16* %rst_addr_11, align 2
  %tmp_68 = add i16 %rst_load_11, 1
  store i16 %tmp_68, i16* %rst_addr_11, align 2
  br label %14

._crit_edge20:                                    ; preds = %._crit_edge18
  %tmp_69 = add i7 %tmp_65, 11
  %tmp_70 = zext i7 %tmp_69 to i64
  %rst_addr_12 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_70
  %rst_load_10 = load i16* %rst_addr_12, align 2
  %tmp_71 = add i16 %rst_load_10, 1
  store i16 %tmp_71, i16* %rst_addr_12, align 2
  br label %14

; <label>:14                                      ; preds = %._crit_edge20, %13
  br label %15

; <label>:15                                      ; preds = %14, %12
  br label %16

; <label>:16                                      ; preds = %15, %11
  br label %17

; <label>:17                                      ; preds = %16, %10
  br label %18

; <label>:18                                      ; preds = %17, %9
  br label %19

; <label>:19                                      ; preds = %18, %8
  br label %20

; <label>:20                                      ; preds = %19, %7
  br label %21

; <label>:21                                      ; preds = %20, %6
  br label %22

; <label>:22                                      ; preds = %21, %5
  br label %23

; <label>:23                                      ; preds = %22, %4
  br label %ifBlock

ifBlock:                                          ; preds = %23, %2
  %empty = call i32 (...)* @_ssdm_op_SpecRegionEnd([7 x i8]* @p_str13, i32 %tmp_12)
  %i_1 = add i2 %i_mid2, 1
  %indvar_flatten_op = add i8 %indvar_flatten, 1
  %indvar_flatten_next = select i1 %exitcond_flatten, i8 1, i8 %indvar_flatten_op
  br label %1

.reset6:                                          ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([21 x i8]* @loop_y_loop_x_loop_i)
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1536, i64 1536, i64 1536)
  %exitcond_flatten = icmp eq i8 %indvar_flatten, 96
  %x_mid = select i1 %exitcond_flatten, i6 0, i6 %x
  %y_s = add i5 1, %y
  %y_t_mid2_v = select i1 %exitcond_flatten, i5 %y_s, i5 %y
  %tmp_24 = trunc i5 %y_t_mid2_v to i4
  %tmp_mid = select i1 %exitcond_flatten, i8 0, i8 %tmp_s
  %not_exitcond_flatten = xor i1 %exitcond_flatten, true
  %exitcond = icmp eq i2 %i, -1
  %exitcond_mid = and i1 %exitcond, %not_exitcond_flatten
  %x_1 = add i6 1, %x_mid
  call void (...)* @_ssdm_op_SpecLoopName([14 x i8]* @loop_x_loop_i_str)
  %tmp_39 = or i1 %exitcond_mid, %exitcond_flatten
  %i_mid2 = select i1 %tmp_39, i2 0, i2 %i
  %x_cast4_mid1 = zext i6 %x_1 to i8
  %tmp_72 = trunc i6 %x_1 to i5
  %p_shl_mid1 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %tmp_72, i2 0)
  %p_shl_cast_mid1 = zext i7 %p_shl_mid1 to i8
  %tmp_mid1 = sub i8 %p_shl_cast_mid1, %x_cast4_mid1
  %tmp_mid2 = select i1 %exitcond_mid, i8 %tmp_mid1, i8 %tmp_mid
  %x_mid2 = select i1 %exitcond_mid, i6 %x_1, i6 %x_mid
  %i_cast3 = zext i2 %i_mid2 to i8
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str13) nounwind
  %tmp_12 = call i32 (...)* @_ssdm_op_SpecRegionBegin([7 x i8]* @p_str13)
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_13 = add i8 %i_cast3, %tmp_mid2
  %tmp_13_cast = sext i8 %tmp_13 to i32
  %tmp_14 = zext i32 %tmp_13_cast to i64
  %image_buffer_0_addr = getelementptr [96 x i8]* %image_buffer_0, i64 0, i64 %tmp_14
  %image_buffer_0_load = load i8* %image_buffer_0_addr, align 1
  %image_buffer_1_addr = getelementptr [96 x i8]* %image_buffer_1, i64 0, i64 %tmp_14
  %image_buffer_1_load = load i8* %image_buffer_1_addr, align 1
  %image_buffer_2_addr = getelementptr [96 x i8]* %image_buffer_2, i64 0, i64 %tmp_14
  %image_buffer_2_load = load i8* %image_buffer_2_addr, align 1
  %image_buffer_3_addr = getelementptr [96 x i8]* %image_buffer_3, i64 0, i64 %tmp_14
  %image_buffer_3_load = load i8* %image_buffer_3_addr, align 1
  %image_buffer_4_addr = getelementptr [96 x i8]* %image_buffer_4, i64 0, i64 %tmp_14
  %image_buffer_4_load = load i8* %image_buffer_4_addr, align 1
  %image_buffer_5_addr = getelementptr [96 x i8]* %image_buffer_5, i64 0, i64 %tmp_14
  %image_buffer_5_load = load i8* %image_buffer_5_addr, align 1
  %image_buffer_6_addr = getelementptr [96 x i8]* %image_buffer_6, i64 0, i64 %tmp_14
  %image_buffer_6_load = load i8* %image_buffer_6_addr, align 1
  %image_buffer_7_addr = getelementptr [96 x i8]* %image_buffer_7, i64 0, i64 %tmp_14
  %image_buffer_7_load = load i8* %image_buffer_7_addr, align 1
  %image_buffer_8_addr = getelementptr [96 x i8]* %image_buffer_8, i64 0, i64 %tmp_14
  %image_buffer_8_load = load i8* %image_buffer_8_addr, align 1
  %image_buffer_9_addr = getelementptr [96 x i8]* %image_buffer_9, i64 0, i64 %tmp_14
  %image_buffer_9_load = load i8* %image_buffer_9_addr, align 1
  %image_buffer_10_add = getelementptr [96 x i8]* %image_buffer_10, i64 0, i64 %tmp_14
  %image_buffer_10_loa = load i8* %image_buffer_10_add, align 1
  %image_buffer_11_add = getelementptr [96 x i8]* %image_buffer_11, i64 0, i64 %tmp_14
  %image_buffer_11_loa = load i8* %image_buffer_11_add, align 1
  %image_buffer_12_add = getelementptr [96 x i8]* %image_buffer_12, i64 0, i64 %tmp_14
  %image_buffer_12_loa = load i8* %image_buffer_12_add, align 1
  %image_buffer_13_add = getelementptr [96 x i8]* %image_buffer_13, i64 0, i64 %tmp_14
  %image_buffer_13_loa = load i8* %image_buffer_13_add, align 1
  %image_buffer_14_add = getelementptr [96 x i8]* %image_buffer_14, i64 0, i64 %tmp_14
  %image_buffer_14_loa = load i8* %image_buffer_14_add, align 1
  %image_buffer_15_add = getelementptr [96 x i8]* %image_buffer_15, i64 0, i64 %tmp_14
  %image_buffer_15_loa = load i8* %image_buffer_15_add, align 1
  %pix = call i8 @_ssdm_op_Mux.ap_auto.16i8.i4(i8 %image_buffer_0_load, i8 %image_buffer_1_load, i8 %image_buffer_2_load, i8 %image_buffer_3_load, i8 %image_buffer_4_load, i8 %image_buffer_5_load, i8 %image_buffer_6_load, i8 %image_buffer_7_load, i8 %image_buffer_8_load, i8 %image_buffer_9_load, i8 %image_buffer_10_loa, i8 %image_buffer_11_loa, i8 %image_buffer_12_loa, i8 %image_buffer_13_loa, i8 %image_buffer_14_loa, i8 %image_buffer_15_loa, i4 %tmp_24)
  %tmp_15 = icmp ult i8 %pix, 21
  br i1 %tmp_15, label %2, label %3

; <label>:24                                      ; preds = %1
  ret void
}

define weak i1 @_ssdm_op_WriteResp.m_axi.i16P(i16*) {
entry:
  ret i1 true
}

define weak i1 @_ssdm_op_WriteReq.m_axi.i16P(i16*, i32) {
entry:
  ret i1 true
}

define weak void @_ssdm_op_Write.m_axi.i16P(i16*, i16, i2) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecMemCore(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i1 @_ssdm_op_ReadReq.m_axi.i8P(i8*, i32) {
entry:
  ret i1 true
}

define weak i32 @_ssdm_op_Read.s_axilite.i32(i32) {
entry:
  ret i32 %0
}

define weak i8 @_ssdm_op_Read.m_axi.i8P(i8*) {
entry:
  %empty = load i8* %0
  ret i8 %empty
}

declare i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone

declare i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone

define weak i4 @_ssdm_op_PartSelect.i4.i30.i32.i32(i30, i32, i32) nounwind readnone {
entry:
  %empty = call i30 @llvm.part.select.i30(i30 %0, i32 %1, i32 %2)
  %empty_13 = trunc i30 %empty to i4
  ret i4 %empty_13
}

define weak i31 @_ssdm_op_PartSelect.i31.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_14 = trunc i32 %empty to i31
  ret i31 %empty_14
}

declare i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i2 @_ssdm_op_PartSelect.i2.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_15 = trunc i8 %empty to i2
  ret i2 %empty_15
}

define weak i8 @_ssdm_op_Mux.ap_auto.16i8.i4(i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i4) {
entry:
  switch i4 %16, label %case15 [
    i4 0, label %case0
    i4 1, label %case1
    i4 2, label %case2
    i4 3, label %case3
    i4 4, label %case4
    i4 5, label %case5
    i4 6, label %case6
    i4 7, label %case7
    i4 -8, label %case8
    i4 -7, label %case9
    i4 -6, label %case10
    i4 -5, label %case11
    i4 -4, label %case12
    i4 -3, label %case13
    i4 -2, label %case14
  ]

case0:                                            ; preds = %case15, %case14, %case13, %case12, %case11, %case10, %case9, %case8, %case7, %case6, %case5, %case4, %case3, %case2, %case1, %entry
  %merge = phi i8 [ %0, %entry ], [ %1, %case1 ], [ %2, %case2 ], [ %3, %case3 ], [ %4, %case4 ], [ %5, %case5 ], [ %6, %case6 ], [ %7, %case7 ], [ %8, %case8 ], [ %9, %case9 ], [ %10, %case10 ], [ %11, %case11 ], [ %12, %case12 ], [ %13, %case13 ], [ %14, %case14 ], [ %15, %case15 ]
  ret i8 %merge

case1:                                            ; preds = %entry
  br label %case0

case2:                                            ; preds = %entry
  br label %case0

case3:                                            ; preds = %entry
  br label %case0

case4:                                            ; preds = %entry
  br label %case0

case5:                                            ; preds = %entry
  br label %case0

case6:                                            ; preds = %entry
  br label %case0

case7:                                            ; preds = %entry
  br label %case0

case8:                                            ; preds = %entry
  br label %case0

case9:                                            ; preds = %entry
  br label %case0

case10:                                           ; preds = %entry
  br label %case0

case11:                                           ; preds = %entry
  br label %case0

case12:                                           ; preds = %entry
  br label %case0

case13:                                           ; preds = %entry
  br label %case0

case14:                                           ; preds = %entry
  br label %case0

case15:                                           ; preds = %entry
  br label %case0
}

define weak i1 @_ssdm_op_BitSelect.i1.i8.i32(i8, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i8
  %empty_16 = shl i8 1, %empty
  %empty_17 = and i8 %0, %empty_16
  %empty_18 = icmp ne i8 %empty_17, 0
  ret i1 %empty_18
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9
  %empty_19 = zext i5 %1 to i9
  %empty_20 = shl i9 %empty, 5
  %empty_21 = or i9 %empty_20, %empty_19
  ret i9 %empty_21
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %0 to i7
  %empty_22 = zext i2 %1 to i7
  %empty_23 = shl i7 %empty, 2
  %empty_24 = or i7 %empty_23, %empty_22
  ret i7 %empty_24
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6
  %empty_25 = zext i4 %1 to i6
  %empty_26 = shl i6 %empty, 4
  %empty_27 = or i6 %empty_26, %empty_25
  ret i6 %empty_27
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4
  %empty_28 = zext i2 %1 to i4
  %empty_29 = shl i4 %empty, 2
  %empty_30 = or i4 %empty_29, %empty_28
  ret i4 %empty_30
}

declare i32 @_ssdm_op_BitConcatenate.i32.i30.i2(i30, i2) nounwind readnone

define weak i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4, i7) nounwind readnone {
entry:
  %empty = zext i4 %0 to i11
  %empty_31 = zext i7 %1 to i11
  %empty_32 = shl i11 %empty, 7
  %empty_33 = or i11 %empty_32, %empty_31
  ret i11 %empty_33
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !7, !13}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!19}
!axi4.master.portmap = !{!26, !27}
!axi4.slave.bundlemap = !{!28, !29}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"int*", metadata !"uchar*", metadata !"ushort*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"specs", metadata !"imageptr", metadata !"feature"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space"}
!9 = metadata !{metadata !"kernel_arg_access_qual"}
!10 = metadata !{metadata !"kernel_arg_type"}
!11 = metadata !{metadata !"kernel_arg_type_qual"}
!12 = metadata !{metadata !"kernel_arg_name"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!15 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"uchar [96]*", metadata !"ushort*"}
!17 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!18 = metadata !{metadata !"kernel_arg_name", metadata !"image_buffer", metadata !"rst"}
!19 = metadata !{metadata !20, [1 x i32]* @llvm_global_ctors_0}
!20 = metadata !{metadata !21}
!21 = metadata !{i32 0, i32 31, metadata !22}
!22 = metadata !{metadata !23}
!23 = metadata !{metadata !"llvm.global_ctors.0", metadata !24, metadata !"", i32 0, i32 31}
!24 = metadata !{metadata !25}
!25 = metadata !{i32 0, i32 0, i32 1}
!26 = metadata !{metadata !"INPUT_IMAGE", metadata !"imageptr", metadata !"READONLY"}
!27 = metadata !{metadata !"FEATURE", metadata !"feature", metadata !"WRITEONLY"}
!28 = metadata !{metadata !"imageptr", metadata !""}
!29 = metadata !{metadata !"feature", metadata !""}
!30 = metadata !{metadata !31}
!31 = metadata !{i32 0, i32 15, metadata !32}
!32 = metadata !{metadata !33}
!33 = metadata !{metadata !"feature", metadata !24, metadata !"unsigned short", i32 0, i32 15}
!34 = metadata !{metadata !35}
!35 = metadata !{i32 0, i32 7, metadata !36}
!36 = metadata !{metadata !37}
!37 = metadata !{metadata !"imageptr", metadata !24, metadata !"unsigned char", i32 0, i32 7}
!38 = metadata !{metadata !39}
!39 = metadata !{i32 0, i32 31, metadata !40}
!40 = metadata !{metadata !41}
!41 = metadata !{metadata !"specs", metadata !42, metadata !"int", i32 0, i32 31}
!42 = metadata !{metadata !43}
!43 = metadata !{i32 0, i32 2, i32 1}
