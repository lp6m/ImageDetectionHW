; ModuleID = '/home/lp6m/Desktop/imagedDetectionHW/hls/color_hist/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@read_input_memcpy_OC = internal unnamed_addr constant [28 x i8] c"read_input_memcpy..imageptr\00" ; [#uses=1 type=[28 x i8]*]
@mode1 = internal constant [10 x i8] c"s_axilite\00" ; [#uses=1 type=[10 x i8]*]
@mode = internal constant [10 x i8] c"s_axilite\00" ; [#uses=1 type=[10 x i8]*]
@memset_rst_str = internal unnamed_addr constant [11 x i8] c"memset_rst\00" ; [#uses=1 type=[11 x i8]*]
@memcpy_OC_feature_OC = internal unnamed_addr constant [23 x i8] c"memcpy.feature.rst.gep\00" ; [#uses=1 type=[23 x i8]*]
@memcpy_OC_OC_imagep = internal unnamed_addr constant [17 x i8] c"memcpy..imageptr\00" ; [#uses=1 type=[17 x i8]*]
@loop_y_loop_x_loop_i = internal unnamed_addr constant [21 x i8] c"loop_y_loop_x_loop_i\00" ; [#uses=1 type=[21 x i8]*]
@loop_x_loop_i_str = internal unnamed_addr constant [14 x i8] c"loop_x_loop_i\00" ; [#uses=1 type=[14 x i8]*]
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@color_hist_str = internal unnamed_addr constant [11 x i8] c"color_hist\00" ; [#uses=1 type=[11 x i8]*]
@burstwrite_OC_region = internal unnamed_addr constant [18 x i8] c"burstwrite.region\00" ; [#uses=2 type=[18 x i8]*]
@burstread_OC_region_s = internal unnamed_addr constant [17 x i8] c"burstread.region\00" ; [#uses=2 type=[17 x i8]*]
@bundle2 = internal constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@bundle = internal constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@RAM_1P_str = internal unnamed_addr constant [7 x i8] c"RAM_1P\00" ; [#uses=1 type=[7 x i8]*]
@p_str8 = internal unnamed_addr constant [1 x i8] zeroinitializer ; [#uses=7 type=[1 x i8]*]
@p_str7 = private unnamed_addr constant [8 x i8] c"FEATURE\00", align 1 ; [#uses=1 type=[8 x i8]*]
@p_str6 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=4 type=[6 x i8]*]
@p_str5 = private unnamed_addr constant [12 x i8] c"INPUT_IMAGE\00", align 1 ; [#uses=1 type=[12 x i8]*]
@p_str4 = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=2 type=[6 x i8]*]
@p_str3 = private unnamed_addr constant [12 x i8] c"CONTROL_BUS\00", align 1 ; [#uses=1 type=[12 x i8]*]
@p_str2 = private unnamed_addr constant [6 x i8] c"SPECS\00", align 1 ; [#uses=1 type=[6 x i8]*]
@p_str14 = internal unnamed_addr constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@p_str13 = private unnamed_addr constant [7 x i8] c"loop_i\00", align 1 ; [#uses=3 type=[7 x i8]*]
@p_str10 = internal unnamed_addr constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=27 type=[1 x i8]*]
@p_str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=2 type=[10 x i8]*]

; [#uses=1]
declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
declare i30 @llvm.part.select.i30(i30, i32, i32) nounwind readnone

; [#uses=30]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=17]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @color_hist(i8* %INPUT_IMAGE, i16* %FEATURE, [3 x i32]* %specs, i32 %imageptr, i32 %feature) {
  %feature_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %feature) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %feature_read}, i64 0, metadata !30), !dbg !43 ; [debug line = 37:72] [debug variable = feature]
  %imageptr_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %imageptr) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %imageptr_read}, i64 0, metadata !44), !dbg !45 ; [debug line = 37:46] [debug variable = imageptr]
  %feature3 = call i31 @_ssdm_op_PartSelect.i31.i32.i32.i32(i32 %feature_read, i32 1, i32 31) ; [#uses=1 type=i31]
  %tmp_3 = zext i31 %feature3 to i64              ; [#uses=1 type=i64]
  %FEATURE_addr = getelementptr i16* %FEATURE, i64 %tmp_3 ; [#uses=3 type=i16*]
  %tmp_10_cast = sext i32 %imageptr_read to i33   ; [#uses=1 type=i33]
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %FEATURE), !map !46
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %INPUT_IMAGE), !map !50
  call void (...)* @_ssdm_op_SpecBitsMap([3 x i32]* %specs) nounwind, !map !54
  %specs_addr = getelementptr [3 x i32]* %specs, i64 0, i64 0 ; [#uses=1 type=i32*]
  call void (...)* @_ssdm_op_SpecTopModule([11 x i8]* @color_hist_str) nounwind
  %image_buffer_0 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_1 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_2 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_3 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_4 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_5 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_6 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_7 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_8 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_9 = alloca [96 x i8], align 1     ; [#uses=2 type=[96 x i8]*]
  %image_buffer_10 = alloca [96 x i8], align 1    ; [#uses=2 type=[96 x i8]*]
  %image_buffer_11 = alloca [96 x i8], align 1    ; [#uses=2 type=[96 x i8]*]
  %image_buffer_12 = alloca [96 x i8], align 1    ; [#uses=2 type=[96 x i8]*]
  %image_buffer_13 = alloca [96 x i8], align 1    ; [#uses=2 type=[96 x i8]*]
  %image_buffer_14 = alloca [96 x i8], align 1    ; [#uses=2 type=[96 x i8]*]
  %image_buffer_15 = alloca [96 x i8], align 1    ; [#uses=2 type=[96 x i8]*]
  %rst = alloca [36 x i16], align 16              ; [#uses=3 type=[36 x i16]*]
  call void @llvm.dbg.declare(metadata !{[36 x i16]* %rst}, metadata !60), !dbg !65 ; [debug line = 51:17] [debug variable = rst]
  call void @llvm.dbg.value(metadata !{[3 x i32]* %specs}, i64 0, metadata !66), !dbg !70 ; [debug line = 37:21] [debug variable = specs]
  call void @llvm.dbg.value(metadata !{i32 %imageptr}, i64 0, metadata !44), !dbg !45 ; [debug line = 37:46] [debug variable = imageptr]
  call void @llvm.dbg.value(metadata !{i32 %feature}, i64 0, metadata !30), !dbg !43 ; [debug line = 37:72] [debug variable = feature]
  %empty = call i32 (...)* @_ssdm_op_SpecMemCore([3 x i32]* %specs, [1 x i8]* @p_str8, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str8, i32 -1, [1 x i8]* @p_str8, [1 x i8]* @p_str8, [1 x i8]* @p_str8, [1 x i8]* @p_str8, [1 x i8]* @p_str8) ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecInterface([3 x i32]* %specs, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 16, [6 x i8]* @p_str2, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str3, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !71 ; [debug line = 39:1]
  call void (...)* @_ssdm_op_SpecInterface(i8* %INPUT_IMAGE, [6 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str5, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !72 ; [debug line = 40:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 %imageptr, [10 x i8]* @mode, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @bundle, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !72 ; [debug line = 40:1]
  call void (...)* @_ssdm_op_SpecInterface(i16* %FEATURE, [6 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str7, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !73 ; [debug line = 41:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 %feature, [10 x i8]* @mode1, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @bundle2, [6 x i8]* @p_str6, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !73 ; [debug line = 41:1]
  %y = load i32* %specs_addr, align 4, !dbg !74   ; [#uses=2 type=i32] [debug line = 42:18]
  call void @llvm.dbg.value(metadata !{i32 %y}, i64 0, metadata !75), !dbg !74 ; [debug line = 42:18] [debug variable = y]
  %specs_addr_1 = getelementptr [3 x i32]* %specs, i64 0, i64 1, !dbg !76 ; [#uses=1 type=i32*] [debug line = 43:18]
  %x = load i32* %specs_addr_1, align 4, !dbg !76 ; [#uses=2 type=i32] [debug line = 43:18]
  call void @llvm.dbg.value(metadata !{i32 %x}, i64 0, metadata !77), !dbg !76 ; [debug line = 43:18] [debug variable = x]
  %specs_addr_2 = getelementptr [3 x i32]* %specs, i64 0, i64 2, !dbg !78 ; [#uses=1 type=i32*] [debug line = 44:31]
  %original_width = load i32* %specs_addr_2, align 4, !dbg !78 ; [#uses=2 type=i32] [debug line = 44:31]
  call void @llvm.dbg.value(metadata !{i32 %original_width}, i64 0, metadata !79), !dbg !78 ; [debug line = 44:31] [debug variable = original_width]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_0}, metadata !80), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[0]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_1}, metadata !88), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[1]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_2}, metadata !89), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[2]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_3}, metadata !90), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[3]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_4}, metadata !91), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[4]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_5}, metadata !92), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[5]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_6}, metadata !93), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[6]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_7}, metadata !94), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[7]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_8}, metadata !95), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[8]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_9}, metadata !96), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[9]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_10}, metadata !97), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[10]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_11}, metadata !98), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[11]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_12}, metadata !99), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[12]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_13}, metadata !100), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[13]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_14}, metadata !101), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[14]]
  call void @llvm.dbg.declare(metadata !{[96 x i8]* %image_buffer_15}, metadata !102), !dbg !87 ; [debug line = 45:16] [debug variable = image_buffer[15]]
  br label %burst.rd.header, !dbg !103            ; [debug line = 47:26]

burst.rd.header:                                  ; preds = %burst.rd.body21, %0
  %indvar_flatten = phi i11 [ 0, %0 ], [ %indvar_flatten_next, %burst.rd.body21 ] ; [#uses=3 type=i11]
  %i = phi i5 [ 0, %0 ], [ %i_mid2, %burst.rd.body21 ] ; [#uses=4 type=i5]
  %indvar = phi i7 [ 0, %0 ], [ %indvar_next, %burst.rd.body21 ] ; [#uses=2 type=i7]
  %i_cast7 = zext i5 %i to i32, !dbg !103         ; [#uses=1 type=i32] [debug line = 47:26]
  %tmp = add nsw i32 %i_cast7, %y, !dbg !105      ; [#uses=1 type=i32] [debug line = 48:50]
  %tmp_1 = mul nsw i32 %tmp, %original_width, !dbg !105 ; [#uses=1 type=i32] [debug line = 48:50]
  %tmp_2 = add nsw i32 %tmp_1, %x, !dbg !105      ; [#uses=2 type=i32] [debug line = 48:50]
  %tmp_7 = shl i32 %tmp_2, 2, !dbg !105           ; [#uses=1 type=i32] [debug line = 48:50]
  %offset = sub i32 %tmp_7, %tmp_2, !dbg !105     ; [#uses=1 type=i32] [debug line = 48:50]
  call void @llvm.dbg.value(metadata !{i32 %offset}, i64 0, metadata !107), !dbg !105 ; [debug line = 48:50] [debug variable = offset]
  %tmp_10 = trunc i5 %i to i4                     ; [#uses=2 type=i4]
  %p_shl3 = call i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4 %tmp_10, i7 0) ; [#uses=1 type=i11]
  %p_shl3_cast = zext i11 %p_shl3 to i12          ; [#uses=1 type=i12]
  %p_shl4 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_10, i5 0) ; [#uses=1 type=i9]
  %p_shl4_cast = zext i9 %p_shl4 to i12           ; [#uses=1 type=i12]
  %tmp_8 = sub i12 %p_shl3_cast, %p_shl4_cast     ; [#uses=1 type=i12]
  %exitcond_flatten = icmp eq i11 %indvar_flatten, -512 ; [#uses=1 type=i1]
  %indvar_flatten_next = add i11 1, %indvar_flatten ; [#uses=1 type=i11]
  br i1 %exitcond_flatten, label %meminst.preheader, label %burst.rd.end

meminst.preheader:                                ; preds = %burst.rd.header
  br label %meminst, !dbg !108                    ; [debug line = 51:32]

burst.rd.body21:                                  ; preds = %branch15, %branch14, %branch13, %branch12, %branch11, %branch10, %branch9, %branch8, %branch7, %branch6, %branch5, %branch4, %branch3, %branch2, %branch1, %branch0
  %burstread_rend = call i32 (...)* @_ssdm_op_SpecRegionEnd([17 x i8]* @burstread_OC_region_s, i32 %burstread_rbegin) nounwind ; [#uses=0 type=i32]
  br label %burst.rd.header

burst.rd.end:                                     ; preds = %burst.rd.header
  call void @llvm.dbg.value(metadata !{i32 %offset}, i64 0, metadata !107), !dbg !105 ; [debug line = 48:50] [debug variable = offset]
  call void (...)* @_ssdm_op_SpecLoopName([28 x i8]* @read_input_memcpy_OC)
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1536, i64 1536, i64 1536) nounwind ; [#uses=0 type=i32]
  %exitcond = icmp eq i7 %indvar, -32             ; [#uses=4 type=i1]
  %indvar_mid2 = select i1 %exitcond, i7 0, i7 %indvar ; [#uses=2 type=i7]
  %i_s = add i5 1, %i, !dbg !109                  ; [#uses=3 type=i5] [debug line = 47:36]
  %i_cast7_mid1 = zext i5 %i_s to i32, !dbg !103  ; [#uses=1 type=i32] [debug line = 47:26]
  %tmp_mid1 = add nsw i32 %i_cast7_mid1, %y, !dbg !105 ; [#uses=1 type=i32] [debug line = 48:50]
  %tmp_1_mid1 = mul nsw i32 %tmp_mid1, %original_width, !dbg !105 ; [#uses=1 type=i32] [debug line = 48:50]
  %tmp_2_mid1 = add nsw i32 %tmp_1_mid1, %x, !dbg !105 ; [#uses=2 type=i32] [debug line = 48:50]
  %tmp_12 = shl i32 %tmp_2_mid1, 2, !dbg !105     ; [#uses=1 type=i32] [debug line = 48:50]
  %offset_mid1 = sub i32 %tmp_12, %tmp_2_mid1, !dbg !105 ; [#uses=1 type=i32] [debug line = 48:50]
  %tmp_13 = select i1 %exitcond, i32 %offset_mid1, i32 %offset, !dbg !105 ; [#uses=1 type=i32] [debug line = 48:50]
  %tmp_3_mid2_cast = sext i32 %tmp_13 to i33      ; [#uses=1 type=i33]
  %tmp_14 = trunc i5 %i_s to i4                   ; [#uses=2 type=i4]
  %p_shl3_mid1 = call i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4 %tmp_14, i7 0) ; [#uses=1 type=i11]
  %p_shl3_cast_mid1 = zext i11 %p_shl3_mid1 to i12 ; [#uses=1 type=i12]
  %p_shl4_mid1 = call i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4 %tmp_14, i5 0) ; [#uses=1 type=i9]
  %p_shl4_cast_mid1 = zext i9 %p_shl4_mid1 to i12 ; [#uses=1 type=i12]
  %tmp_8_mid1 = sub i12 %p_shl3_cast_mid1, %p_shl4_cast_mid1 ; [#uses=1 type=i12]
  %tmp_8_cast_cast_mid2_1 = select i1 %exitcond, i12 %tmp_8_mid1, i12 %tmp_8 ; [#uses=1 type=i12]
  %tmp_8_cast_cast_mid2 = sext i12 %tmp_8_cast_cast_mid2_1 to i14 ; [#uses=1 type=i14]
  %i_mid2 = select i1 %exitcond, i5 %i_s, i5 %i   ; [#uses=1 type=i5]
  %indvar_cast4_cast = zext i7 %indvar_mid2 to i14 ; [#uses=1 type=i14]
  %burstread_rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin([17 x i8]* @burstread_OC_region_s) nounwind ; [#uses=1 type=i32]
  %imageptr2_sum = add i33 %tmp_10_cast, %tmp_3_mid2_cast, !dbg !110 ; [#uses=1 type=i33] [debug line = 49:3]
  %imageptr2_sum_cast = sext i33 %imageptr2_sum to i64, !dbg !110 ; [#uses=1 type=i64] [debug line = 49:3]
  %INPUT_IMAGE_addr = getelementptr inbounds i8* %INPUT_IMAGE, i64 %imageptr2_sum_cast, !dbg !110 ; [#uses=2 type=i8*] [debug line = 49:3]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str10)
  call void (...)* @_ssdm_op_SpecLoopName([17 x i8]* @memcpy_OC_OC_imagep)
  %indvar_next = add i7 1, %indvar_mid2           ; [#uses=1 type=i7]
  %tmp_15 = urem i11 %indvar_flatten, 96          ; [#uses=1 type=i11]
  %tmp_16 = icmp eq i11 %tmp_15, 0                ; [#uses=1 type=i1]
  br i1 %tmp_16, label %ReqBB, label %BurstBB

ReqBB:                                            ; preds = %burst.rd.end
  %INPUT_IMAGE_addr_rd_s = call i1 @_ssdm_op_ReadReq.m_axi.i8P(i8* %INPUT_IMAGE_addr, i32 96), !dbg !110 ; [#uses=0 type=i1] [debug line = 49:3]
  br label %BurstBB

BurstBB:                                          ; preds = %ReqBB, %burst.rd.end
  %INPUT_IMAGE_addr_rea = call i8 @_ssdm_op_Read.m_axi.i8P(i8* %INPUT_IMAGE_addr), !dbg !110 ; [#uses=16 type=i8] [debug line = 49:3]
  %tmp_9 = add i14 %tmp_8_cast_cast_mid2, %indvar_cast4_cast ; [#uses=2 type=i14]
  %zext_cast = zext i14 %tmp_9 to i30             ; [#uses=1 type=i30]
  %mul = mul i30 %zext_cast, 21846                ; [#uses=1 type=i30]
  %tmp_6 = urem i14 %tmp_9, 96                    ; [#uses=1 type=i14]
  %tmp_s = zext i14 %tmp_6 to i64, !dbg !110      ; [#uses=16 type=i64] [debug line = 49:3]
  %tmp_t = call i4 @_ssdm_op_PartSelect.i4.i30.i32.i32(i30 %mul, i32 21, i32 24) ; [#uses=1 type=i4]
  %image_buffer_0_addr = getelementptr [96 x i8]* %image_buffer_0, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_1_addr = getelementptr [96 x i8]* %image_buffer_1, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_2_addr = getelementptr [96 x i8]* %image_buffer_2, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_3_addr = getelementptr [96 x i8]* %image_buffer_3, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_4_addr = getelementptr [96 x i8]* %image_buffer_4, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_5_addr = getelementptr [96 x i8]* %image_buffer_5, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_6_addr = getelementptr [96 x i8]* %image_buffer_6, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_7_addr = getelementptr [96 x i8]* %image_buffer_7, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_8_addr = getelementptr [96 x i8]* %image_buffer_8, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_9_addr = getelementptr [96 x i8]* %image_buffer_9, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_10_add = getelementptr [96 x i8]* %image_buffer_10, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_11_add = getelementptr [96 x i8]* %image_buffer_11, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_12_add = getelementptr [96 x i8]* %image_buffer_12, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_13_add = getelementptr [96 x i8]* %image_buffer_13, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_14_add = getelementptr [96 x i8]* %image_buffer_14, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
  %image_buffer_15_add = getelementptr [96 x i8]* %image_buffer_15, i64 0, i64 %tmp_s, !dbg !110 ; [#uses=1 type=i8*] [debug line = 49:3]
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
  ], !dbg !110                                    ; [debug line = 49:3]

meminst:                                          ; preds = %meminst, %meminst.preheader
  %invdar = phi i6 [ %indvarinc, %meminst ], [ 0, %meminst.preheader ] ; [#uses=3 type=i6]
  %indvarinc = add i6 %invdar, 1, !dbg !108       ; [#uses=1 type=i6] [debug line = 51:32]
  %tmp_4 = zext i6 %invdar to i64, !dbg !108      ; [#uses=1 type=i64] [debug line = 51:32]
  %rst_addr = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_4, !dbg !108 ; [#uses=1 type=i16*] [debug line = 51:32]
  store i16 0, i16* %rst_addr, align 2, !dbg !108 ; [debug line = 51:32]
  %tmp_5 = icmp eq i6 %invdar, -29, !dbg !108     ; [#uses=1 type=i1] [debug line = 51:32]
  call void (...)* @_ssdm_op_SpecLoopName([11 x i8]* @memset_rst_str)
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 36, i64 36, i64 36) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_5, label %1, label %meminst, !dbg !108 ; [debug line = 51:32]

; <label>:1                                       ; preds = %meminst
  call fastcc void @calc_hist([96 x i8]* %image_buffer_0, [96 x i8]* %image_buffer_1, [96 x i8]* %image_buffer_2, [96 x i8]* %image_buffer_3, [96 x i8]* %image_buffer_4, [96 x i8]* %image_buffer_5, [96 x i8]* %image_buffer_6, [96 x i8]* %image_buffer_7, [96 x i8]* %image_buffer_8, [96 x i8]* %image_buffer_9, [96 x i8]* %image_buffer_10, [96 x i8]* %image_buffer_11, [96 x i8]* %image_buffer_12, [96 x i8]* %image_buffer_13, [96 x i8]* %image_buffer_14, [96 x i8]* %image_buffer_15, [36 x i16]* %rst) nounwind, !dbg !111 ; [debug line = 52:2]
  %FEATURE_addr_wr_req = call i1 @_ssdm_op_WriteReq.m_axi.i16P(i16* %FEATURE_addr, i32 36), !dbg !112 ; [#uses=0 type=i1] [debug line = 53:2]
  br label %burst.wr.header

burst.wr.header:                                  ; preds = %burst.wr.body, %1
  %indvar8 = phi i6 [ 0, %1 ], [ %indvar_next9, %burst.wr.body ] ; [#uses=3 type=i6]
  %exitcond2 = icmp eq i6 %indvar8, -28           ; [#uses=1 type=i1]
  %indvar_next9 = add i6 %indvar8, 1              ; [#uses=1 type=i6]
  br i1 %exitcond2, label %memcpy.tail, label %burst.wr.body

burst.wr.body:                                    ; preds = %burst.wr.header
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 36, i64 36, i64 36) nounwind ; [#uses=0 type=i32]
  %burstwrite_rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin([18 x i8]* @burstwrite_OC_region) nounwind ; [#uses=1 type=i32]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str14)
  call void (...)* @_ssdm_op_SpecLoopName([23 x i8]* @memcpy_OC_feature_OC)
  %tmp_11 = zext i6 %indvar8 to i64, !dbg !112    ; [#uses=1 type=i64] [debug line = 53:2]
  %rst_addr_1 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_11, !dbg !112 ; [#uses=1 type=i16*] [debug line = 53:2]
  %rst_load = load i16* %rst_addr_1, align 2, !dbg !112 ; [#uses=1 type=i16] [debug line = 53:2]
  call void @_ssdm_op_Write.m_axi.i16P(i16* %FEATURE_addr, i16 %rst_load, i2 -1), !dbg !112 ; [debug line = 53:2]
  %burstwrite_rend = call i32 (...)* @_ssdm_op_SpecRegionEnd([18 x i8]* @burstwrite_OC_region, i32 %burstwrite_rbegin) nounwind ; [#uses=0 type=i32]
  br label %burst.wr.header

memcpy.tail:                                      ; preds = %burst.wr.header
  %FEATURE_addr_wr_resp = call i1 @_ssdm_op_WriteResp.m_axi.i16P(i16* %FEATURE_addr), !dbg !112 ; [#uses=0 type=i1] [debug line = 53:2]
  ret void, !dbg !113                             ; [debug line = 54:1]

branch0:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_0_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch1:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_1_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch2:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_2_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch3:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_3_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch4:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_4_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch5:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_5_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch6:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_6_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch7:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_7_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch8:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_8_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch9:                                          ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_9_addr, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch10:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_10_add, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch11:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_11_add, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch12:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_12_add, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch13:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_13_add, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch14:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_14_add, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]

branch15:                                         ; preds = %BurstBB
  store i8 %INPUT_IMAGE_addr_rea, i8* %image_buffer_15_add, align 1, !dbg !110 ; [debug line = 49:3]
  br label %burst.rd.body21, !dbg !110            ; [debug line = 49:3]
}

; [#uses=1]
define internal fastcc void @calc_hist([96 x i8]* nocapture %image_buffer_0, [96 x i8]* nocapture %image_buffer_1, [96 x i8]* nocapture %image_buffer_2, [96 x i8]* nocapture %image_buffer_3, [96 x i8]* nocapture %image_buffer_4, [96 x i8]* nocapture %image_buffer_5, [96 x i8]* nocapture %image_buffer_6, [96 x i8]* nocapture %image_buffer_7, [96 x i8]* nocapture %image_buffer_8, [96 x i8]* nocapture %image_buffer_9, [96 x i8]* nocapture %image_buffer_10, [96 x i8]* nocapture %image_buffer_11, [96 x i8]* nocapture %image_buffer_12, [96 x i8]* nocapture %image_buffer_13, [96 x i8]* nocapture %image_buffer_14, [96 x i8]* nocapture %image_buffer_15, [36 x i16]* nocapture %rst) {
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_0}, i64 0, metadata !114), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[0]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_1}, i64 0, metadata !123), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[1]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_2}, i64 0, metadata !124), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[2]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_3}, i64 0, metadata !125), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[3]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_4}, i64 0, metadata !126), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[4]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_5}, i64 0, metadata !127), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[5]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_6}, i64 0, metadata !128), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[6]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_7}, i64 0, metadata !129), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[7]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_8}, i64 0, metadata !130), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[8]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_9}, i64 0, metadata !131), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[9]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_10}, i64 0, metadata !132), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[10]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_11}, i64 0, metadata !133), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[11]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_12}, i64 0, metadata !134), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[12]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_13}, i64 0, metadata !135), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[13]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_14}, i64 0, metadata !136), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[14]]
  call void @llvm.dbg.value(metadata !{[96 x i8]* %image_buffer_15}, i64 0, metadata !137), !dbg !122 ; [debug line = 14:37] [debug variable = image_buffer[15]]
  call void @llvm.dbg.value(metadata !{[36 x i16]* %rst}, i64 0, metadata !138), !dbg !139 ; [debug line = 14:76] [debug variable = rst]
  br label %1, !dbg !140                          ; [debug line = 15:22]

; <label>:1                                       ; preds = %ifBlock, %0
  %indvar_flatten1 = phi i11 [ 0, %0 ], [ %indvar_flatten_next1, %ifBlock ] ; [#uses=2 type=i11]
  %y = phi i5 [ 0, %0 ], [ %y_t_mid2_v, %ifBlock ] ; [#uses=2 type=i5]
  %indvar_flatten = phi i8 [ 0, %0 ], [ %indvar_flatten_next, %ifBlock ] ; [#uses=2 type=i8]
  %x = phi i6 [ 0, %0 ], [ %x_mid2, %ifBlock ]    ; [#uses=3 type=i6]
  %i = phi i2 [ 0, %0 ], [ %i_1, %ifBlock ]       ; [#uses=2 type=i2]
  %x_cast4 = zext i6 %x to i8, !dbg !143          ; [#uses=1 type=i8] [debug line = 16:23]
  %tmp = trunc i6 %x to i5                        ; [#uses=1 type=i5]
  %p_shl = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %tmp, i2 0), !dbg !146 ; [#uses=1 type=i7] [debug line = 19:44]
  %p_shl_cast = zext i7 %p_shl to i8, !dbg !146   ; [#uses=1 type=i8] [debug line = 19:44]
  %tmp_s = sub i8 %p_shl_cast, %x_cast4, !dbg !146 ; [#uses=1 type=i8] [debug line = 19:44]
  %exitcond_flatten1 = icmp eq i11 %indvar_flatten1, -512 ; [#uses=1 type=i1]
  %indvar_flatten_next1 = add i11 1, %indvar_flatten1 ; [#uses=1 type=i11]
  br i1 %exitcond_flatten1, label %24, label %.reset6

; <label>:2                                       ; preds = %.reset6
  %p_shl1 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !150 ; [#uses=1 type=i6] [debug line = 20:45]
  %p_shl1_cast = zext i6 %p_shl1 to i7, !dbg !150 ; [#uses=1 type=i7] [debug line = 20:45]
  %p_shl2 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !150 ; [#uses=1 type=i4] [debug line = 20:45]
  %p_shl2_cast = zext i4 %p_shl2 to i7, !dbg !150 ; [#uses=1 type=i7] [debug line = 20:45]
  %tmp_16 = sub i7 %p_shl1_cast, %p_shl2_cast, !dbg !150 ; [#uses=1 type=i7] [debug line = 20:45]
  %tmp_16_cast = sext i7 %tmp_16 to i32, !dbg !150 ; [#uses=1 type=i32] [debug line = 20:45]
  %tmp_17 = zext i32 %tmp_16_cast to i64, !dbg !150 ; [#uses=1 type=i64] [debug line = 20:45]
  %rst_addr = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_17, !dbg !150 ; [#uses=2 type=i16*] [debug line = 20:45]
  %rst_load = load i16* %rst_addr, align 2, !dbg !150 ; [#uses=1 type=i16] [debug line = 20:45]
  %tmp_18 = add i16 %rst_load, 1, !dbg !150       ; [#uses=1 type=i16] [debug line = 20:45]
  store i16 %tmp_18, i16* %rst_addr, align 2, !dbg !150 ; [debug line = 20:45]
  br label %ifBlock, !dbg !150                    ; [debug line = 20:45]

; <label>:3                                       ; preds = %.reset6
  %tmp_19 = icmp ult i8 %pix, 42, !dbg !151       ; [#uses=1 type=i1] [debug line = 21:10]
  br i1 %tmp_19, label %4, label %._crit_edge, !dbg !151 ; [debug line = 21:10]

; <label>:4                                       ; preds = %3
  %p_shl3 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !152 ; [#uses=1 type=i6] [debug line = 21:50]
  %p_shl3_cast = zext i6 %p_shl3 to i7, !dbg !152 ; [#uses=1 type=i7] [debug line = 21:50]
  %p_shl4 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !152 ; [#uses=1 type=i4] [debug line = 21:50]
  %p_shl4_cast = zext i4 %p_shl4 to i7, !dbg !152 ; [#uses=1 type=i7] [debug line = 21:50]
  %tmp_20 = sub i7 %p_shl3_cast, %p_shl4_cast, !dbg !152 ; [#uses=1 type=i7] [debug line = 21:50]
  %tmp_20_cast = sext i7 %tmp_20 to i32, !dbg !152 ; [#uses=1 type=i32] [debug line = 21:50]
  %tmp_21 = or i32 %tmp_20_cast, 1, !dbg !152     ; [#uses=1 type=i32] [debug line = 21:50]
  %tmp_22 = zext i32 %tmp_21 to i64, !dbg !152    ; [#uses=1 type=i64] [debug line = 21:50]
  %rst_addr_2 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_22, !dbg !152 ; [#uses=2 type=i16*] [debug line = 21:50]
  %rst_load_1 = load i16* %rst_addr_2, align 2, !dbg !152 ; [#uses=1 type=i16] [debug line = 21:50]
  %tmp_23 = add i16 %rst_load_1, 1, !dbg !152     ; [#uses=1 type=i16] [debug line = 21:50]
  store i16 %tmp_23, i16* %rst_addr_2, align 2, !dbg !152 ; [debug line = 21:50]
  br label %23, !dbg !152                         ; [debug line = 21:50]

._crit_edge:                                      ; preds = %3
  %tmp_73 = call i2 @_ssdm_op_PartSelect.i2.i8.i32.i32(i8 %pix, i32 6, i32 7), !dbg !153 ; [#uses=1 type=i2] [debug line = 22:10]
  %icmp = icmp eq i2 %tmp_73, 0, !dbg !153        ; [#uses=1 type=i1] [debug line = 22:10]
  br i1 %icmp, label %5, label %._crit_edge4, !dbg !153 ; [debug line = 22:10]

; <label>:5                                       ; preds = %._crit_edge
  %p_shl5 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !154 ; [#uses=1 type=i6] [debug line = 22:50]
  %p_shl5_cast = zext i6 %p_shl5 to i7, !dbg !154 ; [#uses=1 type=i7] [debug line = 22:50]
  %p_shl6 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !154 ; [#uses=1 type=i4] [debug line = 22:50]
  %p_shl6_cast = zext i4 %p_shl6 to i7, !dbg !154 ; [#uses=1 type=i7] [debug line = 22:50]
  %tmp_25 = sub i7 %p_shl5_cast, %p_shl6_cast, !dbg !154 ; [#uses=1 type=i7] [debug line = 22:50]
  %tmp_26 = or i7 %tmp_25, 2, !dbg !154           ; [#uses=1 type=i7] [debug line = 22:50]
  %tmp_26_cast = sext i7 %tmp_26 to i32, !dbg !154 ; [#uses=1 type=i32] [debug line = 22:50]
  %tmp_27 = zext i32 %tmp_26_cast to i64, !dbg !154 ; [#uses=1 type=i64] [debug line = 22:50]
  %rst_addr_3 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_27, !dbg !154 ; [#uses=2 type=i16*] [debug line = 22:50]
  %rst_load_2 = load i16* %rst_addr_3, align 2, !dbg !154 ; [#uses=1 type=i16] [debug line = 22:50]
  %tmp_28 = add i16 %rst_load_2, 1, !dbg !154     ; [#uses=1 type=i16] [debug line = 22:50]
  store i16 %tmp_28, i16* %rst_addr_3, align 2, !dbg !154 ; [debug line = 22:50]
  br label %22, !dbg !154                         ; [debug line = 22:50]

._crit_edge4:                                     ; preds = %._crit_edge
  %tmp_29 = icmp ult i8 %pix, 85, !dbg !155       ; [#uses=1 type=i1] [debug line = 23:10]
  br i1 %tmp_29, label %6, label %._crit_edge6, !dbg !155 ; [debug line = 23:10]

; <label>:6                                       ; preds = %._crit_edge4
  %p_shl7 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !156 ; [#uses=1 type=i6] [debug line = 23:50]
  %p_shl7_cast = zext i6 %p_shl7 to i7, !dbg !156 ; [#uses=1 type=i7] [debug line = 23:50]
  %p_shl8 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !156 ; [#uses=1 type=i4] [debug line = 23:50]
  %p_shl8_cast = zext i4 %p_shl8 to i7, !dbg !156 ; [#uses=1 type=i7] [debug line = 23:50]
  %tmp_30 = sub i7 %p_shl7_cast, %p_shl8_cast, !dbg !156 ; [#uses=1 type=i7] [debug line = 23:50]
  %tmp_31 = or i7 %tmp_30, 3, !dbg !156           ; [#uses=1 type=i7] [debug line = 23:50]
  %tmp_31_cast = sext i7 %tmp_31 to i32, !dbg !156 ; [#uses=1 type=i32] [debug line = 23:50]
  %tmp_32 = zext i32 %tmp_31_cast to i64, !dbg !156 ; [#uses=1 type=i64] [debug line = 23:50]
  %rst_addr_4 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_32, !dbg !156 ; [#uses=2 type=i16*] [debug line = 23:50]
  %rst_load_3 = load i16* %rst_addr_4, align 2, !dbg !156 ; [#uses=1 type=i16] [debug line = 23:50]
  %tmp_33 = add i16 %rst_load_3, 1, !dbg !156     ; [#uses=1 type=i16] [debug line = 23:50]
  store i16 %tmp_33, i16* %rst_addr_4, align 2, !dbg !156 ; [debug line = 23:50]
  br label %21, !dbg !156                         ; [debug line = 23:50]

._crit_edge6:                                     ; preds = %._crit_edge4
  %tmp_34 = icmp ult i8 %pix, 106, !dbg !157      ; [#uses=1 type=i1] [debug line = 24:10]
  br i1 %tmp_34, label %7, label %._crit_edge8, !dbg !157 ; [debug line = 24:10]

; <label>:7                                       ; preds = %._crit_edge6
  %p_shl9 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !158 ; [#uses=1 type=i6] [debug line = 24:50]
  %p_shl9_cast = zext i6 %p_shl9 to i7, !dbg !158 ; [#uses=1 type=i7] [debug line = 24:50]
  %p_shl10 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !158 ; [#uses=1 type=i4] [debug line = 24:50]
  %p_shl10_cast = zext i4 %p_shl10 to i7, !dbg !158 ; [#uses=1 type=i7] [debug line = 24:50]
  %tmp_35 = sub i7 %p_shl9_cast, %p_shl10_cast, !dbg !158 ; [#uses=1 type=i7] [debug line = 24:50]
  %tmp_36 = add i7 %tmp_35, 4, !dbg !158          ; [#uses=1 type=i7] [debug line = 24:50]
  %tmp_36_cast = sext i7 %tmp_36 to i32, !dbg !158 ; [#uses=1 type=i32] [debug line = 24:50]
  %tmp_37 = zext i32 %tmp_36_cast to i64, !dbg !158 ; [#uses=1 type=i64] [debug line = 24:50]
  %rst_addr_5 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_37, !dbg !158 ; [#uses=2 type=i16*] [debug line = 24:50]
  %rst_load_4 = load i16* %rst_addr_5, align 2, !dbg !158 ; [#uses=1 type=i16] [debug line = 24:50]
  %tmp_38 = add i16 %rst_load_4, 1, !dbg !158     ; [#uses=1 type=i16] [debug line = 24:50]
  store i16 %tmp_38, i16* %rst_addr_5, align 2, !dbg !158 ; [debug line = 24:50]
  br label %20, !dbg !158                         ; [debug line = 24:50]

._crit_edge8:                                     ; preds = %._crit_edge6
  %tmp_74 = call i1 @_ssdm_op_BitSelect.i1.i8.i32(i8 %pix, i32 7), !dbg !159 ; [#uses=1 type=i1] [debug line = 25:10]
  br i1 %tmp_74, label %._crit_edge10, label %8, !dbg !159 ; [debug line = 25:10]

; <label>:8                                       ; preds = %._crit_edge8
  %p_shl11 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !160 ; [#uses=1 type=i6] [debug line = 25:50]
  %p_shl11_cast = zext i6 %p_shl11 to i7, !dbg !160 ; [#uses=1 type=i7] [debug line = 25:50]
  %p_shl12 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !160 ; [#uses=1 type=i4] [debug line = 25:50]
  %p_shl12_cast = zext i4 %p_shl12 to i7, !dbg !160 ; [#uses=1 type=i7] [debug line = 25:50]
  %tmp_40 = sub i7 %p_shl11_cast, %p_shl12_cast, !dbg !160 ; [#uses=1 type=i7] [debug line = 25:50]
  %tmp_41 = add i7 %tmp_40, 5, !dbg !160          ; [#uses=1 type=i7] [debug line = 25:50]
  %tmp_41_cast = sext i7 %tmp_41 to i32, !dbg !160 ; [#uses=1 type=i32] [debug line = 25:50]
  %tmp_42 = zext i32 %tmp_41_cast to i64, !dbg !160 ; [#uses=1 type=i64] [debug line = 25:50]
  %rst_addr_6 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_42, !dbg !160 ; [#uses=2 type=i16*] [debug line = 25:50]
  %rst_load_5 = load i16* %rst_addr_6, align 2, !dbg !160 ; [#uses=1 type=i16] [debug line = 25:50]
  %tmp_43 = add i16 %rst_load_5, 1, !dbg !160     ; [#uses=1 type=i16] [debug line = 25:50]
  store i16 %tmp_43, i16* %rst_addr_6, align 2, !dbg !160 ; [debug line = 25:50]
  br label %19, !dbg !160                         ; [debug line = 25:50]

._crit_edge10:                                    ; preds = %._crit_edge8
  %tmp_44 = icmp ult i8 %pix, -107, !dbg !161     ; [#uses=1 type=i1] [debug line = 26:10]
  br i1 %tmp_44, label %9, label %._crit_edge12, !dbg !161 ; [debug line = 26:10]

; <label>:9                                       ; preds = %._crit_edge10
  %p_shl13 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !162 ; [#uses=1 type=i6] [debug line = 26:50]
  %p_shl13_cast = zext i6 %p_shl13 to i7, !dbg !162 ; [#uses=1 type=i7] [debug line = 26:50]
  %p_shl14 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !162 ; [#uses=1 type=i4] [debug line = 26:50]
  %p_shl14_cast = zext i4 %p_shl14 to i7, !dbg !162 ; [#uses=1 type=i7] [debug line = 26:50]
  %tmp_45 = sub i7 %p_shl13_cast, %p_shl14_cast, !dbg !162 ; [#uses=1 type=i7] [debug line = 26:50]
  %tmp_46 = add i7 %tmp_45, 6, !dbg !162          ; [#uses=1 type=i7] [debug line = 26:50]
  %tmp_46_cast = sext i7 %tmp_46 to i32, !dbg !162 ; [#uses=1 type=i32] [debug line = 26:50]
  %tmp_47 = zext i32 %tmp_46_cast to i64, !dbg !162 ; [#uses=1 type=i64] [debug line = 26:50]
  %rst_addr_7 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_47, !dbg !162 ; [#uses=2 type=i16*] [debug line = 26:50]
  %rst_load_6 = load i16* %rst_addr_7, align 2, !dbg !162 ; [#uses=1 type=i16] [debug line = 26:50]
  %tmp_48 = add i16 %rst_load_6, 1, !dbg !162     ; [#uses=1 type=i16] [debug line = 26:50]
  store i16 %tmp_48, i16* %rst_addr_7, align 2, !dbg !162 ; [debug line = 26:50]
  br label %18, !dbg !162                         ; [debug line = 26:50]

._crit_edge12:                                    ; preds = %._crit_edge10
  %tmp_49 = icmp ult i8 %pix, -86, !dbg !163      ; [#uses=1 type=i1] [debug line = 27:10]
  br i1 %tmp_49, label %10, label %._crit_edge14, !dbg !163 ; [debug line = 27:10]

; <label>:10                                      ; preds = %._crit_edge12
  %p_shl15 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !164 ; [#uses=1 type=i6] [debug line = 27:50]
  %p_shl15_cast = zext i6 %p_shl15 to i7, !dbg !164 ; [#uses=1 type=i7] [debug line = 27:50]
  %p_shl16 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !164 ; [#uses=1 type=i4] [debug line = 27:50]
  %p_shl16_cast = zext i4 %p_shl16 to i7, !dbg !164 ; [#uses=1 type=i7] [debug line = 27:50]
  %tmp_50 = sub i7 %p_shl15_cast, %p_shl16_cast, !dbg !164 ; [#uses=1 type=i7] [debug line = 27:50]
  %tmp_51 = add i7 %tmp_50, 7, !dbg !164          ; [#uses=1 type=i7] [debug line = 27:50]
  %tmp_51_cast = sext i7 %tmp_51 to i32, !dbg !164 ; [#uses=1 type=i32] [debug line = 27:50]
  %tmp_52 = zext i32 %tmp_51_cast to i64, !dbg !164 ; [#uses=1 type=i64] [debug line = 27:50]
  %rst_addr_8 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_52, !dbg !164 ; [#uses=2 type=i16*] [debug line = 27:50]
  %rst_load_7 = load i16* %rst_addr_8, align 2, !dbg !164 ; [#uses=1 type=i16] [debug line = 27:50]
  %tmp_53 = add i16 %rst_load_7, 1, !dbg !164     ; [#uses=1 type=i16] [debug line = 27:50]
  store i16 %tmp_53, i16* %rst_addr_8, align 2, !dbg !164 ; [debug line = 27:50]
  br label %17, !dbg !164                         ; [debug line = 27:50]

._crit_edge14:                                    ; preds = %._crit_edge12
  %tmp_54 = icmp ult i8 %pix, -64, !dbg !165      ; [#uses=1 type=i1] [debug line = 28:10]
  br i1 %tmp_54, label %11, label %._crit_edge16, !dbg !165 ; [debug line = 28:10]

; <label>:11                                      ; preds = %._crit_edge14
  %p_shl17 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !166 ; [#uses=1 type=i6] [debug line = 28:50]
  %p_shl17_cast = zext i6 %p_shl17 to i7, !dbg !166 ; [#uses=1 type=i7] [debug line = 28:50]
  %p_shl18 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !166 ; [#uses=1 type=i4] [debug line = 28:50]
  %p_shl18_cast = zext i4 %p_shl18 to i7, !dbg !166 ; [#uses=1 type=i7] [debug line = 28:50]
  %tmp_55 = sub i7 %p_shl17_cast, %p_shl18_cast, !dbg !166 ; [#uses=1 type=i7] [debug line = 28:50]
  %tmp_56 = add i7 %tmp_55, 8, !dbg !166          ; [#uses=1 type=i7] [debug line = 28:50]
  %tmp_57 = zext i7 %tmp_56 to i64, !dbg !166     ; [#uses=1 type=i64] [debug line = 28:50]
  %rst_addr_9 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_57, !dbg !166 ; [#uses=2 type=i16*] [debug line = 28:50]
  %rst_load_8 = load i16* %rst_addr_9, align 2, !dbg !166 ; [#uses=1 type=i16] [debug line = 28:50]
  %tmp_58 = add i16 %rst_load_8, 1, !dbg !166     ; [#uses=1 type=i16] [debug line = 28:50]
  store i16 %tmp_58, i16* %rst_addr_9, align 2, !dbg !166 ; [debug line = 28:50]
  br label %16, !dbg !166                         ; [debug line = 28:50]

._crit_edge16:                                    ; preds = %._crit_edge14
  %tmp_59 = icmp ult i8 %pix, -43, !dbg !167      ; [#uses=1 type=i1] [debug line = 29:10]
  br i1 %tmp_59, label %12, label %._crit_edge18, !dbg !167 ; [debug line = 29:10]

; <label>:12                                      ; preds = %._crit_edge16
  %p_shl19 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !168 ; [#uses=1 type=i6] [debug line = 29:51]
  %p_shl19_cast = zext i6 %p_shl19 to i7, !dbg !168 ; [#uses=1 type=i7] [debug line = 29:51]
  %p_shl20 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !168 ; [#uses=1 type=i4] [debug line = 29:51]
  %p_shl20_cast = zext i4 %p_shl20 to i7, !dbg !168 ; [#uses=1 type=i7] [debug line = 29:51]
  %tmp_60 = sub i7 %p_shl19_cast, %p_shl20_cast, !dbg !168 ; [#uses=1 type=i7] [debug line = 29:51]
  %tmp_61 = add i7 %tmp_60, 9, !dbg !168          ; [#uses=1 type=i7] [debug line = 29:51]
  %tmp_62 = zext i7 %tmp_61 to i64, !dbg !168     ; [#uses=1 type=i64] [debug line = 29:51]
  %rst_addr_10 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_62, !dbg !168 ; [#uses=2 type=i16*] [debug line = 29:51]
  %rst_load_9 = load i16* %rst_addr_10, align 2, !dbg !168 ; [#uses=1 type=i16] [debug line = 29:51]
  %tmp_63 = add i16 %rst_load_9, 1, !dbg !168     ; [#uses=1 type=i16] [debug line = 29:51]
  store i16 %tmp_63, i16* %rst_addr_10, align 2, !dbg !168 ; [debug line = 29:51]
  br label %15, !dbg !168                         ; [debug line = 29:51]

._crit_edge18:                                    ; preds = %._crit_edge16
  %tmp_64 = icmp ult i8 %pix, -22, !dbg !169      ; [#uses=1 type=i1] [debug line = 30:10]
  %p_shl21 = call i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2 %i_mid2, i4 0), !dbg !170 ; [#uses=1 type=i6] [debug line = 30:52]
  %p_shl21_cast = zext i6 %p_shl21 to i7, !dbg !170 ; [#uses=1 type=i7] [debug line = 30:52]
  %p_shl22 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_mid2, i2 0), !dbg !170 ; [#uses=1 type=i4] [debug line = 30:52]
  %p_shl22_cast = zext i4 %p_shl22 to i7, !dbg !170 ; [#uses=1 type=i7] [debug line = 30:52]
  %tmp_65 = sub i7 %p_shl21_cast, %p_shl22_cast, !dbg !170 ; [#uses=2 type=i7] [debug line = 30:52]
  br i1 %tmp_64, label %13, label %._crit_edge20, !dbg !169 ; [debug line = 30:10]

; <label>:13                                      ; preds = %._crit_edge18
  %tmp_66 = add i7 %tmp_65, 10, !dbg !170         ; [#uses=1 type=i7] [debug line = 30:52]
  %tmp_67 = zext i7 %tmp_66 to i64, !dbg !170     ; [#uses=1 type=i64] [debug line = 30:52]
  %rst_addr_11 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_67, !dbg !170 ; [#uses=2 type=i16*] [debug line = 30:52]
  %rst_load_11 = load i16* %rst_addr_11, align 2, !dbg !170 ; [#uses=1 type=i16] [debug line = 30:52]
  %tmp_68 = add i16 %rst_load_11, 1, !dbg !170    ; [#uses=1 type=i16] [debug line = 30:52]
  store i16 %tmp_68, i16* %rst_addr_11, align 2, !dbg !170 ; [debug line = 30:52]
  br label %14, !dbg !170                         ; [debug line = 30:52]

._crit_edge20:                                    ; preds = %._crit_edge18
  %tmp_69 = add i7 %tmp_65, 11, !dbg !171         ; [#uses=1 type=i7] [debug line = 31:10]
  %tmp_70 = zext i7 %tmp_69 to i64, !dbg !171     ; [#uses=1 type=i64] [debug line = 31:10]
  %rst_addr_12 = getelementptr [36 x i16]* %rst, i64 0, i64 %tmp_70, !dbg !171 ; [#uses=2 type=i16*] [debug line = 31:10]
  %rst_load_10 = load i16* %rst_addr_12, align 2, !dbg !171 ; [#uses=1 type=i16] [debug line = 31:10]
  %tmp_71 = add i16 %rst_load_10, 1, !dbg !171    ; [#uses=1 type=i16] [debug line = 31:10]
  store i16 %tmp_71, i16* %rst_addr_12, align 2, !dbg !171 ; [debug line = 31:10]
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
  %empty = call i32 (...)* @_ssdm_op_SpecRegionEnd([7 x i8]* @p_str13, i32 %tmp_12), !dbg !172 ; [#uses=0 type=i32] [debug line = 32:4]
  %i_1 = add i2 %i_mid2, 1, !dbg !173             ; [#uses=1 type=i2] [debug line = 17:33]
  call void @llvm.dbg.value(metadata !{i2 %i_1}, i64 0, metadata !174), !dbg !173 ; [debug line = 17:33] [debug variable = i]
  %indvar_flatten_op = add i8 %indvar_flatten, 1  ; [#uses=1 type=i8]
  %indvar_flatten_next = select i1 %exitcond_flatten, i8 1, i8 %indvar_flatten_op ; [#uses=1 type=i8]
  br label %1

.reset6:                                          ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([21 x i8]* @loop_y_loop_x_loop_i)
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1536, i64 1536, i64 1536) ; [#uses=0 type=i32]
  %exitcond_flatten = icmp eq i8 %indvar_flatten, 96 ; [#uses=6 type=i1]
  %x_mid = select i1 %exitcond_flatten, i6 0, i6 %x ; [#uses=2 type=i6]
  %y_s = add i5 1, %y, !dbg !175                  ; [#uses=1 type=i5] [debug line = 15:32]
  %y_t_mid2_v = select i1 %exitcond_flatten, i5 %y_s, i5 %y ; [#uses=2 type=i5]
  %tmp_24 = trunc i5 %y_t_mid2_v to i4            ; [#uses=1 type=i4]
  %tmp_mid = select i1 %exitcond_flatten, i8 0, i8 %tmp_s, !dbg !146 ; [#uses=1 type=i8] [debug line = 19:44]
  %not_exitcond_flatten = xor i1 %exitcond_flatten, true, !dbg !176 ; [#uses=1 type=i1] [debug line = 17:24]
  %exitcond = icmp eq i2 %i, -1, !dbg !176        ; [#uses=1 type=i1] [debug line = 17:24]
  %exitcond_mid = and i1 %exitcond, %not_exitcond_flatten, !dbg !176 ; [#uses=3 type=i1] [debug line = 17:24]
  %x_1 = add i6 1, %x_mid, !dbg !177              ; [#uses=3 type=i6] [debug line = 16:33]
  call void @llvm.dbg.value(metadata !{i6 %x_1}, i64 0, metadata !178), !dbg !177 ; [debug line = 16:33] [debug variable = x]
  call void (...)* @_ssdm_op_SpecLoopName([14 x i8]* @loop_x_loop_i_str)
  %tmp_39 = or i1 %exitcond_mid, %exitcond_flatten ; [#uses=1 type=i1]
  %i_mid2 = select i1 %tmp_39, i2 0, i2 %i        ; [#uses=24 type=i2]
  %x_cast4_mid1 = zext i6 %x_1 to i8, !dbg !143   ; [#uses=1 type=i8] [debug line = 16:23]
  %tmp_72 = trunc i6 %x_1 to i5                   ; [#uses=1 type=i5]
  %p_shl_mid1 = call i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5 %tmp_72, i2 0), !dbg !146 ; [#uses=1 type=i7] [debug line = 19:44]
  %p_shl_cast_mid1 = zext i7 %p_shl_mid1 to i8, !dbg !146 ; [#uses=1 type=i8] [debug line = 19:44]
  %tmp_mid1 = sub i8 %p_shl_cast_mid1, %x_cast4_mid1, !dbg !146 ; [#uses=1 type=i8] [debug line = 19:44]
  %tmp_mid2 = select i1 %exitcond_mid, i8 %tmp_mid1, i8 %tmp_mid, !dbg !146 ; [#uses=1 type=i8] [debug line = 19:44]
  %x_mid2 = select i1 %exitcond_mid, i6 %x_1, i6 %x_mid ; [#uses=1 type=i6]
  %i_cast3 = zext i2 %i_mid2 to i8, !dbg !176     ; [#uses=1 type=i8] [debug line = 17:24]
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str13) nounwind, !dbg !179 ; [debug line = 17:38]
  %tmp_12 = call i32 (...)* @_ssdm_op_SpecRegionBegin([7 x i8]* @p_str13), !dbg !179 ; [#uses=1 type=i32] [debug line = 17:38]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !180 ; [debug line = 18:1]
  %tmp_13 = add i8 %i_cast3, %tmp_mid2, !dbg !146 ; [#uses=1 type=i8] [debug line = 19:44]
  %tmp_13_cast = sext i8 %tmp_13 to i32, !dbg !146 ; [#uses=1 type=i32] [debug line = 19:44]
  %tmp_14 = zext i32 %tmp_13_cast to i64, !dbg !146 ; [#uses=16 type=i64] [debug line = 19:44]
  %image_buffer_0_addr = getelementptr [96 x i8]* %image_buffer_0, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_0_load = load i8* %image_buffer_0_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_1_addr = getelementptr [96 x i8]* %image_buffer_1, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_1_load = load i8* %image_buffer_1_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_2_addr = getelementptr [96 x i8]* %image_buffer_2, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_2_load = load i8* %image_buffer_2_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_3_addr = getelementptr [96 x i8]* %image_buffer_3, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_3_load = load i8* %image_buffer_3_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_4_addr = getelementptr [96 x i8]* %image_buffer_4, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_4_load = load i8* %image_buffer_4_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_5_addr = getelementptr [96 x i8]* %image_buffer_5, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_5_load = load i8* %image_buffer_5_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_6_addr = getelementptr [96 x i8]* %image_buffer_6, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_6_load = load i8* %image_buffer_6_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_7_addr = getelementptr [96 x i8]* %image_buffer_7, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_7_load = load i8* %image_buffer_7_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_8_addr = getelementptr [96 x i8]* %image_buffer_8, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_8_load = load i8* %image_buffer_8_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_9_addr = getelementptr [96 x i8]* %image_buffer_9, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_9_load = load i8* %image_buffer_9_addr, align 1 ; [#uses=1 type=i8]
  %image_buffer_10_add = getelementptr [96 x i8]* %image_buffer_10, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_10_loa = load i8* %image_buffer_10_add, align 1 ; [#uses=1 type=i8]
  %image_buffer_11_add = getelementptr [96 x i8]* %image_buffer_11, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_11_loa = load i8* %image_buffer_11_add, align 1 ; [#uses=1 type=i8]
  %image_buffer_12_add = getelementptr [96 x i8]* %image_buffer_12, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_12_loa = load i8* %image_buffer_12_add, align 1 ; [#uses=1 type=i8]
  %image_buffer_13_add = getelementptr [96 x i8]* %image_buffer_13, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_13_loa = load i8* %image_buffer_13_add, align 1 ; [#uses=1 type=i8]
  %image_buffer_14_add = getelementptr [96 x i8]* %image_buffer_14, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_14_loa = load i8* %image_buffer_14_add, align 1 ; [#uses=1 type=i8]
  %image_buffer_15_add = getelementptr [96 x i8]* %image_buffer_15, i64 0, i64 %tmp_14 ; [#uses=1 type=i8*]
  %image_buffer_15_loa = load i8* %image_buffer_15_add, align 1 ; [#uses=1 type=i8]
  %pix = call i8 @_ssdm_op_Mux.ap_auto.16i8.i4(i8 %image_buffer_0_load, i8 %image_buffer_1_load, i8 %image_buffer_2_load, i8 %image_buffer_3_load, i8 %image_buffer_4_load, i8 %image_buffer_5_load, i8 %image_buffer_6_load, i8 %image_buffer_7_load, i8 %image_buffer_8_load, i8 %image_buffer_9_load, i8 %image_buffer_10_loa, i8 %image_buffer_11_loa, i8 %image_buffer_12_loa, i8 %image_buffer_13_loa, i8 %image_buffer_14_loa, i8 %image_buffer_15_loa, i4 %tmp_24) ; [#uses=11 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %pix}, i64 0, metadata !181), !dbg !146 ; [debug line = 19:44] [debug variable = pix]
  %tmp_15 = icmp ult i8 %pix, 21, !dbg !182       ; [#uses=1 type=i1] [debug line = 20:5]
  br i1 %tmp_15, label %2, label %3, !dbg !182    ; [debug line = 20:5]

; <label>:24                                      ; preds = %1
  ret void, !dbg !183                             ; [debug line = 35:1]
}

; [#uses=1]
define weak i1 @_ssdm_op_WriteResp.m_axi.i16P(i16*) {
entry:
  ret i1 true
}

; [#uses=1]
define weak i1 @_ssdm_op_WriteReq.m_axi.i16P(i16*, i32) {
entry:
  ret i1 true
}

; [#uses=1]
define weak void @_ssdm_op_Write.m_axi.i16P(i16*, i16, i2) {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecMemCore(...) {
entry:
  ret i32 0
}

; [#uses=4]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=7]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=6]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i1 @_ssdm_op_ReadReq.m_axi.i8P(i8*, i32) {
entry:
  ret i1 true
}

; [#uses=2]
define weak i32 @_ssdm_op_Read.s_axilite.i32(i32) {
entry:
  ret i32 %0
}

; [#uses=1]
define weak i8 @_ssdm_op_Read.m_axi.i8P(i8*) {
entry:
  %empty = load i8* %0                            ; [#uses=1 type=i8]
  ret i8 %empty
}

; [#uses=0]
declare i5 @_ssdm_op_PartSelect.i5.i6.i32.i32(i6, i32, i32) nounwind readnone

; [#uses=0]
declare i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone

; [#uses=1]
define weak i4 @_ssdm_op_PartSelect.i4.i30.i32.i32(i30, i32, i32) nounwind readnone {
entry:
  %empty = call i30 @llvm.part.select.i30(i30 %0, i32 %1, i32 %2) ; [#uses=1 type=i30]
  %empty_13 = trunc i30 %empty to i4              ; [#uses=1 type=i4]
  ret i4 %empty_13
}

; [#uses=1]
define weak i31 @_ssdm_op_PartSelect.i31.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_14 = trunc i32 %empty to i31             ; [#uses=1 type=i31]
  ret i31 %empty_14
}

; [#uses=0]
declare i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i2 @_ssdm_op_PartSelect.i2.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2) ; [#uses=1 type=i8]
  %empty_15 = trunc i8 %empty to i2               ; [#uses=1 type=i2]
  ret i2 %empty_15
}

; [#uses=1]
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
  %merge = phi i8 [ %0, %entry ], [ %1, %case1 ], [ %2, %case2 ], [ %3, %case3 ], [ %4, %case4 ], [ %5, %case5 ], [ %6, %case6 ], [ %7, %case7 ], [ %8, %case8 ], [ %9, %case9 ], [ %10, %case10 ], [ %11, %case11 ], [ %12, %case12 ], [ %13, %case13 ], [ %14, %case14 ], [ %15, %case15 ] ; [#uses=1 type=i8]
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

; [#uses=1]
define weak i1 @_ssdm_op_BitSelect.i1.i8.i32(i8, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i8                     ; [#uses=1 type=i8]
  %empty_16 = shl i8 1, %empty                    ; [#uses=1 type=i8]
  %empty_17 = and i8 %0, %empty_16                ; [#uses=1 type=i8]
  %empty_18 = icmp ne i8 %empty_17, 0             ; [#uses=1 type=i1]
  ret i1 %empty_18
}

; [#uses=2]
define weak i9 @_ssdm_op_BitConcatenate.i9.i4.i5(i4, i5) nounwind readnone {
entry:
  %empty = zext i4 %0 to i9                       ; [#uses=1 type=i9]
  %empty_19 = zext i5 %1 to i9                    ; [#uses=1 type=i9]
  %empty_20 = shl i9 %empty, 5                    ; [#uses=1 type=i9]
  %empty_21 = or i9 %empty_20, %empty_19          ; [#uses=1 type=i9]
  ret i9 %empty_21
}

; [#uses=2]
define weak i7 @_ssdm_op_BitConcatenate.i7.i5.i2(i5, i2) nounwind readnone {
entry:
  %empty = zext i5 %0 to i7                       ; [#uses=1 type=i7]
  %empty_22 = zext i2 %1 to i7                    ; [#uses=1 type=i7]
  %empty_23 = shl i7 %empty, 2                    ; [#uses=1 type=i7]
  %empty_24 = or i7 %empty_23, %empty_22          ; [#uses=1 type=i7]
  ret i7 %empty_24
}

; [#uses=11]
define weak i6 @_ssdm_op_BitConcatenate.i6.i2.i4(i2, i4) nounwind readnone {
entry:
  %empty = zext i2 %0 to i6                       ; [#uses=1 type=i6]
  %empty_25 = zext i4 %1 to i6                    ; [#uses=1 type=i6]
  %empty_26 = shl i6 %empty, 4                    ; [#uses=1 type=i6]
  %empty_27 = or i6 %empty_26, %empty_25          ; [#uses=1 type=i6]
  ret i6 %empty_27
}

; [#uses=11]
define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4                       ; [#uses=1 type=i4]
  %empty_28 = zext i2 %1 to i4                    ; [#uses=1 type=i4]
  %empty_29 = shl i4 %empty, 2                    ; [#uses=1 type=i4]
  %empty_30 = or i4 %empty_29, %empty_28          ; [#uses=1 type=i4]
  ret i4 %empty_30
}

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i30.i2(i30, i2) nounwind readnone

; [#uses=2]
define weak i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4, i7) nounwind readnone {
entry:
  %empty = zext i4 %0 to i11                      ; [#uses=1 type=i11]
  %empty_31 = zext i7 %1 to i11                   ; [#uses=1 type=i11]
  %empty_32 = shl i11 %empty, 7                   ; [#uses=1 type=i11]
  %empty_33 = or i11 %empty_32, %empty_31         ; [#uses=1 type=i11]
  ret i11 %empty_33
}

; [#uses=1]
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
!30 = metadata !{i32 786689, metadata !31, metadata !"feature", metadata !32, i32 50331685, metadata !39, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!31 = metadata !{i32 786478, i32 0, metadata !32, metadata !"color_hist", metadata !"color_hist", metadata !"_Z10color_histPiPhPt", metadata !32, i32 37, metadata !33, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 37} ; [ DW_TAG_subprogram ]
!32 = metadata !{i32 786473, metadata !"color_hist/src/main.cpp", metadata !"/home/lp6m/Desktop/imagedDetectionHW/hls", null} ; [ DW_TAG_file_type ]
!33 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !34, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!34 = metadata !{null, metadata !35, metadata !37, metadata !39}
!35 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !36} ; [ DW_TAG_pointer_type ]
!36 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!37 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !38} ; [ DW_TAG_pointer_type ]
!38 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!39 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !40} ; [ DW_TAG_pointer_type ]
!40 = metadata !{i32 786468, null, metadata !"unsigned short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!41 = metadata !{metadata !42}
!42 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!43 = metadata !{i32 37, i32 72, metadata !31, null}
!44 = metadata !{i32 786689, metadata !31, metadata !"imageptr", metadata !32, i32 33554469, metadata !37, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!45 = metadata !{i32 37, i32 46, metadata !31, null}
!46 = metadata !{metadata !47}
!47 = metadata !{i32 0, i32 15, metadata !48}
!48 = metadata !{metadata !49}
!49 = metadata !{metadata !"feature", metadata !24, metadata !"unsigned short", i32 0, i32 15}
!50 = metadata !{metadata !51}
!51 = metadata !{i32 0, i32 7, metadata !52}
!52 = metadata !{metadata !53}
!53 = metadata !{metadata !"imageptr", metadata !24, metadata !"unsigned char", i32 0, i32 7}
!54 = metadata !{metadata !55}
!55 = metadata !{i32 0, i32 31, metadata !56}
!56 = metadata !{metadata !57}
!57 = metadata !{metadata !"specs", metadata !58, metadata !"int", i32 0, i32 31}
!58 = metadata !{metadata !59}
!59 = metadata !{i32 0, i32 2, i32 1}
!60 = metadata !{i32 786688, metadata !61, metadata !"rst", metadata !32, i32 51, metadata !62, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!61 = metadata !{i32 786443, metadata !31, i32 37, i32 80, metadata !32, i32 0} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 576, i64 16, i32 0, i32 0, metadata !40, metadata !63, i32 0, i32 0} ; [ DW_TAG_array_type ]
!63 = metadata !{metadata !64}
!64 = metadata !{i32 786465, i64 0, i64 35}       ; [ DW_TAG_subrange_type ]
!65 = metadata !{i32 51, i32 17, metadata !61, null}
!66 = metadata !{i32 786689, metadata !31, metadata !"specs", null, i32 37, metadata !67, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!67 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 96, i64 32, i32 0, i32 0, metadata !36, metadata !68, i32 0, i32 0} ; [ DW_TAG_array_type ]
!68 = metadata !{metadata !69}
!69 = metadata !{i32 786465, i64 0, i64 2}        ; [ DW_TAG_subrange_type ]
!70 = metadata !{i32 37, i32 21, metadata !31, null}
!71 = metadata !{i32 39, i32 1, metadata !61, null}
!72 = metadata !{i32 40, i32 1, metadata !61, null}
!73 = metadata !{i32 41, i32 1, metadata !61, null}
!74 = metadata !{i32 42, i32 18, metadata !61, null}
!75 = metadata !{i32 786688, metadata !61, metadata !"y", metadata !32, i32 42, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!76 = metadata !{i32 43, i32 18, metadata !61, null}
!77 = metadata !{i32 786688, metadata !61, metadata !"x", metadata !32, i32 43, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 44, i32 31, metadata !61, null}
!79 = metadata !{i32 786688, metadata !61, metadata !"original_width", metadata !32, i32 44, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!80 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[0]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!81 = metadata !{i32 786688, metadata !61, metadata !"image_buffer", metadata !32, i32 45, metadata !82, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 12288, i64 8, i32 0, i32 0, metadata !38, metadata !83, i32 0, i32 0} ; [ DW_TAG_array_type ]
!83 = metadata !{metadata !84, metadata !85}
!84 = metadata !{i32 786465, i64 0, i64 15}       ; [ DW_TAG_subrange_type ]
!85 = metadata !{i32 786465, i64 0, i64 95}       ; [ DW_TAG_subrange_type ]
!86 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 768, i64 8, i32 0, i32 0, metadata !38, metadata !83, i32 0, i32 0} ; [ DW_TAG_array_type ]
!87 = metadata !{i32 45, i32 16, metadata !61, null}
!88 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[1]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!89 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[2]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!90 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[3]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!91 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[4]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!92 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[5]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!93 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[6]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!94 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[7]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!95 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[8]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!96 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[9]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!97 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[10]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!98 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[11]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!99 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[12]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!100 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[13]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!101 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[14]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!102 = metadata !{i32 790529, metadata !81, metadata !"image_buffer[15]", null, i32 45, metadata !86, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!103 = metadata !{i32 47, i32 26, metadata !104, null}
!104 = metadata !{i32 786443, metadata !61, i32 47, i32 13, metadata !32, i32 1} ; [ DW_TAG_lexical_block ]
!105 = metadata !{i32 48, i32 50, metadata !106, null}
!106 = metadata !{i32 786443, metadata !104, i32 47, i32 40, metadata !32, i32 2} ; [ DW_TAG_lexical_block ]
!107 = metadata !{i32 786688, metadata !106, metadata !"offset", metadata !32, i32 48, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!108 = metadata !{i32 51, i32 32, metadata !61, null}
!109 = metadata !{i32 47, i32 36, metadata !104, null}
!110 = metadata !{i32 49, i32 3, metadata !106, null}
!111 = metadata !{i32 52, i32 2, metadata !61, null}
!112 = metadata !{i32 53, i32 2, metadata !61, null}
!113 = metadata !{i32 54, i32 1, metadata !61, null}
!114 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[0]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!115 = metadata !{i32 786689, metadata !116, metadata !"image_buffer", null, i32 14, metadata !82, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!116 = metadata !{i32 786478, i32 0, metadata !32, metadata !"calc_hist", metadata !"calc_hist", metadata !"_Z9calc_histPA96_hPt", metadata !32, i32 14, metadata !117, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 14} ; [ DW_TAG_subprogram ]
!117 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !118, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!118 = metadata !{null, metadata !119, metadata !39}
!119 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !120} ; [ DW_TAG_pointer_type ]
!120 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 768, i64 8, i32 0, i32 0, metadata !38, metadata !121, i32 0, i32 0} ; [ DW_TAG_array_type ]
!121 = metadata !{metadata !85}
!122 = metadata !{i32 14, i32 37, metadata !116, null}
!123 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[1]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!124 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[2]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!125 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[3]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!126 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[4]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!127 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[5]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!128 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[6]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!129 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[7]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!130 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[8]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!131 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[9]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!132 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[10]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!133 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[11]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!134 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[12]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!135 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[13]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!136 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[14]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!137 = metadata !{i32 790531, metadata !115, metadata !"image_buffer[15]", null, i32 14, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!138 = metadata !{i32 786689, metadata !116, metadata !"rst", null, i32 14, metadata !62, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!139 = metadata !{i32 14, i32 76, metadata !116, null}
!140 = metadata !{i32 15, i32 22, metadata !141, null}
!141 = metadata !{i32 786443, metadata !142, i32 15, i32 9, metadata !32, i32 5} ; [ DW_TAG_lexical_block ]
!142 = metadata !{i32 786443, metadata !116, i32 14, i32 88, metadata !32, i32 4} ; [ DW_TAG_lexical_block ]
!143 = metadata !{i32 16, i32 23, metadata !144, null}
!144 = metadata !{i32 786443, metadata !145, i32 16, i32 10, metadata !32, i32 7} ; [ DW_TAG_lexical_block ]
!145 = metadata !{i32 786443, metadata !141, i32 15, i32 36, metadata !32, i32 6} ; [ DW_TAG_lexical_block ]
!146 = metadata !{i32 19, i32 44, metadata !147, null}
!147 = metadata !{i32 786443, metadata !148, i32 17, i32 37, metadata !32, i32 10} ; [ DW_TAG_lexical_block ]
!148 = metadata !{i32 786443, metadata !149, i32 17, i32 11, metadata !32, i32 9} ; [ DW_TAG_lexical_block ]
!149 = metadata !{i32 786443, metadata !144, i32 16, i32 37, metadata !32, i32 8} ; [ DW_TAG_lexical_block ]
!150 = metadata !{i32 20, i32 45, metadata !147, null}
!151 = metadata !{i32 21, i32 10, metadata !147, null}
!152 = metadata !{i32 21, i32 50, metadata !147, null}
!153 = metadata !{i32 22, i32 10, metadata !147, null}
!154 = metadata !{i32 22, i32 50, metadata !147, null}
!155 = metadata !{i32 23, i32 10, metadata !147, null}
!156 = metadata !{i32 23, i32 50, metadata !147, null}
!157 = metadata !{i32 24, i32 10, metadata !147, null}
!158 = metadata !{i32 24, i32 50, metadata !147, null}
!159 = metadata !{i32 25, i32 10, metadata !147, null}
!160 = metadata !{i32 25, i32 50, metadata !147, null}
!161 = metadata !{i32 26, i32 10, metadata !147, null}
!162 = metadata !{i32 26, i32 50, metadata !147, null}
!163 = metadata !{i32 27, i32 10, metadata !147, null}
!164 = metadata !{i32 27, i32 50, metadata !147, null}
!165 = metadata !{i32 28, i32 10, metadata !147, null}
!166 = metadata !{i32 28, i32 50, metadata !147, null}
!167 = metadata !{i32 29, i32 10, metadata !147, null}
!168 = metadata !{i32 29, i32 51, metadata !147, null}
!169 = metadata !{i32 30, i32 10, metadata !147, null}
!170 = metadata !{i32 30, i32 52, metadata !147, null}
!171 = metadata !{i32 31, i32 10, metadata !147, null}
!172 = metadata !{i32 32, i32 4, metadata !147, null}
!173 = metadata !{i32 17, i32 33, metadata !148, null}
!174 = metadata !{i32 786688, metadata !148, metadata !"i", metadata !32, i32 17, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!175 = metadata !{i32 15, i32 32, metadata !141, null}
!176 = metadata !{i32 17, i32 24, metadata !148, null}
!177 = metadata !{i32 16, i32 33, metadata !144, null}
!178 = metadata !{i32 786688, metadata !144, metadata !"x", metadata !32, i32 16, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!179 = metadata !{i32 17, i32 38, metadata !147, null}
!180 = metadata !{i32 18, i32 1, metadata !147, null}
!181 = metadata !{i32 786688, metadata !147, metadata !"pix", metadata !32, i32 19, metadata !38, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!182 = metadata !{i32 20, i32 5, metadata !147, null}
!183 = metadata !{i32 35, i32 1, metadata !142, null}
