#if 0
; SPIR-V
; Version: 1.3
; Generator: Google spiregg; 0
; Bound: 73
; Schema: 0
               OpCapability Shader
               OpCapability Image1D
               OpCapability StorageImageExtendedFormats
               OpCapability Sampled1D
               OpMemoryModel Logical GLSL450
               OpEntryPoint GLCompute %FFX_CACAO_PrepareDownsampledDepthsHalf "FFX_CACAO_PrepareDownsampledDepthsHalf" %gl_GlobalInvocationID
               OpExecutionMode %FFX_CACAO_PrepareDownsampledDepthsHalf LocalSize 8 8 1
               OpSource HLSL 620
               OpName %type_SSAOConstantsBuffer "type.SSAOConstantsBuffer"
               OpMemberName %type_SSAOConstantsBuffer 0 "g_FFX_CACAO_Consts"
               OpName %FFX_CACAO_Constants "FFX_CACAO_Constants"
               OpMemberName %FFX_CACAO_Constants 0 "DepthUnpackConsts"
               OpMemberName %FFX_CACAO_Constants 1 "CameraTanHalfFOV"
               OpMemberName %FFX_CACAO_Constants 2 "NDCToViewMul"
               OpMemberName %FFX_CACAO_Constants 3 "NDCToViewAdd"
               OpMemberName %FFX_CACAO_Constants 4 "DepthBufferUVToViewMul"
               OpMemberName %FFX_CACAO_Constants 5 "DepthBufferUVToViewAdd"
               OpMemberName %FFX_CACAO_Constants 6 "EffectRadius"
               OpMemberName %FFX_CACAO_Constants 7 "EffectShadowStrength"
               OpMemberName %FFX_CACAO_Constants 8 "EffectShadowPow"
               OpMemberName %FFX_CACAO_Constants 9 "EffectShadowClamp"
               OpMemberName %FFX_CACAO_Constants 10 "EffectFadeOutMul"
               OpMemberName %FFX_CACAO_Constants 11 "EffectFadeOutAdd"
               OpMemberName %FFX_CACAO_Constants 12 "EffectHorizonAngleThreshold"
               OpMemberName %FFX_CACAO_Constants 13 "EffectSamplingRadiusNearLimitRec"
               OpMemberName %FFX_CACAO_Constants 14 "DepthPrecisionOffsetMod"
               OpMemberName %FFX_CACAO_Constants 15 "NegRecEffectRadius"
               OpMemberName %FFX_CACAO_Constants 16 "LoadCounterAvgDiv"
               OpMemberName %FFX_CACAO_Constants 17 "AdaptiveSampleCountLimit"
               OpMemberName %FFX_CACAO_Constants 18 "InvSharpness"
               OpMemberName %FFX_CACAO_Constants 19 "PassIndex"
               OpMemberName %FFX_CACAO_Constants 20 "BilateralSigmaSquared"
               OpMemberName %FFX_CACAO_Constants 21 "BilateralSimilarityDistanceSigma"
               OpMemberName %FFX_CACAO_Constants 22 "PatternRotScaleMatrices"
               OpMemberName %FFX_CACAO_Constants 23 "NormalsUnpackMul"
               OpMemberName %FFX_CACAO_Constants 24 "NormalsUnpackAdd"
               OpMemberName %FFX_CACAO_Constants 25 "DetailAOStrength"
               OpMemberName %FFX_CACAO_Constants 26 "Dummy0"
               OpMemberName %FFX_CACAO_Constants 27 "SSAOBufferDimensions"
               OpMemberName %FFX_CACAO_Constants 28 "SSAOBufferInverseDimensions"
               OpMemberName %FFX_CACAO_Constants 29 "DepthBufferDimensions"
               OpMemberName %FFX_CACAO_Constants 30 "DepthBufferInverseDimensions"
               OpMemberName %FFX_CACAO_Constants 31 "DepthBufferOffset"
               OpMemberName %FFX_CACAO_Constants 32 "PerPassFullResUVOffset"
               OpMemberName %FFX_CACAO_Constants 33 "OutputBufferDimensions"
               OpMemberName %FFX_CACAO_Constants 34 "OutputBufferInverseDimensions"
               OpMemberName %FFX_CACAO_Constants 35 "ImportanceMapDimensions"
               OpMemberName %FFX_CACAO_Constants 36 "ImportanceMapInverseDimensions"
               OpMemberName %FFX_CACAO_Constants 37 "DeinterleavedDepthBufferDimensions"
               OpMemberName %FFX_CACAO_Constants 38 "DeinterleavedDepthBufferInverseDimensions"
               OpMemberName %FFX_CACAO_Constants 39 "DeinterleavedDepthBufferOffset"
               OpMemberName %FFX_CACAO_Constants 40 "DeinterleavedDepthBufferNormalisedOffset"
               OpMemberName %FFX_CACAO_Constants 41 "NormalsWorldToViewspaceMatrix"
               OpName %SSAOConstantsBuffer "SSAOConstantsBuffer"
               OpName %type_2d_image "type.2d.image"
               OpName %g_DepthIn "g_DepthIn"
               OpName %type_2d_image_array "type.2d.image.array"
               OpName %g_PrepareDepthsOut "g_PrepareDepthsOut"
               OpName %FFX_CACAO_PrepareDownsampledDepthsHalf "FFX_CACAO_PrepareDownsampledDepthsHalf"
               OpDecorate %gl_GlobalInvocationID BuiltIn GlobalInvocationId
               OpDecorate %SSAOConstantsBuffer DescriptorSet 0
               OpDecorate %SSAOConstantsBuffer Binding 10
               OpDecorate %g_DepthIn DescriptorSet 0
               OpDecorate %g_DepthIn Binding 20
               OpDecorate %g_PrepareDepthsOut DescriptorSet 0
               OpDecorate %g_PrepareDepthsOut Binding 30
               OpDecorate %_arr_v4float_uint_5 ArrayStride 16
               OpMemberDecorate %FFX_CACAO_Constants 0 Offset 0
               OpMemberDecorate %FFX_CACAO_Constants 1 Offset 8
               OpMemberDecorate %FFX_CACAO_Constants 2 Offset 16
               OpMemberDecorate %FFX_CACAO_Constants 3 Offset 24
               OpMemberDecorate %FFX_CACAO_Constants 4 Offset 32
               OpMemberDecorate %FFX_CACAO_Constants 5 Offset 40
               OpMemberDecorate %FFX_CACAO_Constants 6 Offset 48
               OpMemberDecorate %FFX_CACAO_Constants 7 Offset 52
               OpMemberDecorate %FFX_CACAO_Constants 8 Offset 56
               OpMemberDecorate %FFX_CACAO_Constants 9 Offset 60
               OpMemberDecorate %FFX_CACAO_Constants 10 Offset 64
               OpMemberDecorate %FFX_CACAO_Constants 11 Offset 68
               OpMemberDecorate %FFX_CACAO_Constants 12 Offset 72
               OpMemberDecorate %FFX_CACAO_Constants 13 Offset 76
               OpMemberDecorate %FFX_CACAO_Constants 14 Offset 80
               OpMemberDecorate %FFX_CACAO_Constants 15 Offset 84
               OpMemberDecorate %FFX_CACAO_Constants 16 Offset 88
               OpMemberDecorate %FFX_CACAO_Constants 17 Offset 92
               OpMemberDecorate %FFX_CACAO_Constants 18 Offset 96
               OpMemberDecorate %FFX_CACAO_Constants 19 Offset 100
               OpMemberDecorate %FFX_CACAO_Constants 20 Offset 104
               OpMemberDecorate %FFX_CACAO_Constants 21 Offset 108
               OpMemberDecorate %FFX_CACAO_Constants 22 Offset 112
               OpMemberDecorate %FFX_CACAO_Constants 23 Offset 192
               OpMemberDecorate %FFX_CACAO_Constants 24 Offset 196
               OpMemberDecorate %FFX_CACAO_Constants 25 Offset 200
               OpMemberDecorate %FFX_CACAO_Constants 26 Offset 204
               OpMemberDecorate %FFX_CACAO_Constants 27 Offset 208
               OpMemberDecorate %FFX_CACAO_Constants 28 Offset 216
               OpMemberDecorate %FFX_CACAO_Constants 29 Offset 224
               OpMemberDecorate %FFX_CACAO_Constants 30 Offset 232
               OpMemberDecorate %FFX_CACAO_Constants 31 Offset 240
               OpMemberDecorate %FFX_CACAO_Constants 32 Offset 248
               OpMemberDecorate %FFX_CACAO_Constants 33 Offset 256
               OpMemberDecorate %FFX_CACAO_Constants 34 Offset 264
               OpMemberDecorate %FFX_CACAO_Constants 35 Offset 272
               OpMemberDecorate %FFX_CACAO_Constants 36 Offset 280
               OpMemberDecorate %FFX_CACAO_Constants 37 Offset 288
               OpMemberDecorate %FFX_CACAO_Constants 38 Offset 296
               OpMemberDecorate %FFX_CACAO_Constants 39 Offset 304
               OpMemberDecorate %FFX_CACAO_Constants 40 Offset 312
               OpMemberDecorate %FFX_CACAO_Constants 41 Offset 320
               OpMemberDecorate %FFX_CACAO_Constants 41 MatrixStride 16
               OpMemberDecorate %FFX_CACAO_Constants 41 RowMajor
               OpMemberDecorate %type_SSAOConstantsBuffer 0 Offset 0
               OpDecorate %type_SSAOConstantsBuffer Block
      %float = OpTypeFloat 32
       %uint = OpTypeInt 32 0
     %uint_5 = OpConstant %uint 5
     %uint_4 = OpConstant %uint 4
        %int = OpTypeInt 32 1
      %int_0 = OpConstant %int 0
      %int_1 = OpConstant %int 1
     %uint_2 = OpConstant %uint 2
      %int_3 = OpConstant %int 3
    %v2float = OpTypeVector %float 2
    %v4float = OpTypeVector %float 4
%_arr_v4float_uint_5 = OpTypeArray %v4float %uint_5
      %v2int = OpTypeVector %int 2
%mat4v4float = OpTypeMatrix %v4float 4
%FFX_CACAO_Constants = OpTypeStruct %v2float %v2float %v2float %v2float %v2float %v2float %float %float %float %float %float %float %float %float %float %float %float %float %float %int %float %float %_arr_v4float_uint_5 %float %float %float %float %v2float %v2float %v2float %v2float %v2int %v2float %v2float %v2float %v2float %v2float %v2float %v2float %v2float %v2float %mat4v4float
%type_SSAOConstantsBuffer = OpTypeStruct %FFX_CACAO_Constants
%_ptr_Uniform_type_SSAOConstantsBuffer = OpTypePointer Uniform %type_SSAOConstantsBuffer
%type_2d_image = OpTypeImage %float 2D 2 0 0 1 Unknown
%_ptr_UniformConstant_type_2d_image = OpTypePointer UniformConstant %type_2d_image
%type_2d_image_array = OpTypeImage %float 2D 2 1 0 2 R32f
%_ptr_UniformConstant_type_2d_image_array = OpTypePointer UniformConstant %type_2d_image_array
     %v3uint = OpTypeVector %uint 3
%_ptr_Input_v3uint = OpTypePointer Input %v3uint
       %void = OpTypeVoid
         %30 = OpTypeFunction %void
     %v2uint = OpTypeVector %uint 2
      %v3int = OpTypeVector %int 3
%_ptr_Uniform_float = OpTypePointer Uniform %float
%SSAOConstantsBuffer = OpVariable %_ptr_Uniform_type_SSAOConstantsBuffer Uniform
  %g_DepthIn = OpVariable %_ptr_UniformConstant_type_2d_image UniformConstant
%g_PrepareDepthsOut = OpVariable %_ptr_UniformConstant_type_2d_image_array UniformConstant
%gl_GlobalInvocationID = OpVariable %_ptr_Input_v3uint Input
%FFX_CACAO_PrepareDownsampledDepthsHalf = OpFunction %void None %30
         %34 = OpLabel
         %35 = OpLoad %v3uint %gl_GlobalInvocationID
         %36 = OpVectorShuffle %v2uint %35 %35 0 1
         %37 = OpCompositeExtract %uint %35 0
         %38 = OpIMul %uint %uint_4 %37
         %39 = OpBitcast %int %38
         %40 = OpCompositeExtract %uint %35 1
         %41 = OpIMul %uint %uint_4 %40
         %42 = OpBitcast %int %41
         %43 = OpCompositeConstruct %v3int %39 %42 %int_0
         %44 = OpVectorShuffle %v2int %43 %43 0 1
         %45 = OpLoad %type_2d_image %g_DepthIn
         %46 = OpImageFetch %v4float %45 %44 Lod %int_0
         %47 = OpCompositeExtract %float %46 0
         %48 = OpIAdd %uint %38 %uint_2
         %49 = OpBitcast %int %48
         %50 = OpIAdd %uint %41 %uint_2
         %51 = OpBitcast %int %50
         %52 = OpCompositeConstruct %v3int %49 %51 %int_0
         %53 = OpVectorShuffle %v2int %52 %52 0 1
         %54 = OpImageFetch %v4float %45 %53 Lod %int_0
         %55 = OpCompositeExtract %float %54 0
         %56 = OpAccessChain %_ptr_Uniform_float %SSAOConstantsBuffer %int_0 %int_0 %int_0
         %57 = OpLoad %float %56
         %58 = OpAccessChain %_ptr_Uniform_float %SSAOConstantsBuffer %int_0 %int_0 %int_1
         %59 = OpLoad %float %58
         %60 = OpFSub %float %59 %47
         %61 = OpFDiv %float %57 %60
         %62 = OpFSub %float %59 %55
         %63 = OpFDiv %float %57 %62
         %64 = OpBitcast %v2int %36
         %65 = OpCompositeExtract %int %64 0
         %66 = OpCompositeExtract %int %64 1
         %67 = OpCompositeConstruct %v3int %65 %66 %int_0
         %68 = OpBitcast %v3uint %67
         %69 = OpLoad %type_2d_image_array %g_PrepareDepthsOut
               OpImageWrite %69 %68 %61 None
         %70 = OpCompositeConstruct %v3int %65 %66 %int_3
         %71 = OpBitcast %v3uint %70
         %72 = OpLoad %type_2d_image_array %g_PrepareDepthsOut
               OpImageWrite %72 %71 %63 None
               OpReturn
               OpFunctionEnd

#endif

const unsigned char CSPrepareDownsampledDepthsHalfSPIRV32[] = {
  0x03, 0x02, 0x23, 0x07, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x02, 0x00, 0x31, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00,
  0x2b, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0e, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x46, 0x46, 0x58, 0x5f, 0x43, 0x41, 0x43, 0x41,
  0x4f, 0x5f, 0x50, 0x72, 0x65, 0x70, 0x61, 0x72, 0x65, 0x44, 0x6f, 0x77,
  0x6e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x64, 0x44, 0x65, 0x70, 0x74,
  0x68, 0x73, 0x48, 0x61, 0x6c, 0x66, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x6c, 0x02, 0x00, 0x00,
  0x05, 0x00, 0x09, 0x00, 0x03, 0x00, 0x00, 0x00, 0x74, 0x79, 0x70, 0x65,
  0x2e, 0x53, 0x53, 0x41, 0x4f, 0x43, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e,
  0x74, 0x73, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x08, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x67, 0x5f, 0x46, 0x46, 0x58, 0x5f, 0x43, 0x41, 0x43, 0x41, 0x4f, 0x5f,
  0x43, 0x6f, 0x6e, 0x73, 0x74, 0x73, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x46, 0x46, 0x58, 0x5f, 0x43, 0x41, 0x43, 0x41,
  0x4f, 0x5f, 0x43, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x73, 0x00,
  0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x65, 0x70, 0x74, 0x68, 0x55, 0x6e, 0x70, 0x61, 0x63, 0x6b, 0x43,
  0x6f, 0x6e, 0x73, 0x74, 0x73, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x43, 0x61, 0x6d, 0x65,
  0x72, 0x61, 0x54, 0x61, 0x6e, 0x48, 0x61, 0x6c, 0x66, 0x46, 0x4f, 0x56,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x4e, 0x44, 0x43, 0x54, 0x6f, 0x56, 0x69, 0x65,
  0x77, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x4e, 0x44, 0x43, 0x54,
  0x6f, 0x56, 0x69, 0x65, 0x77, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x44, 0x65, 0x70, 0x74, 0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x55,
  0x56, 0x54, 0x6f, 0x56, 0x69, 0x65, 0x77, 0x4d, 0x75, 0x6c, 0x00, 0x00,
  0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x44, 0x65, 0x70, 0x74, 0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x55,
  0x56, 0x54, 0x6f, 0x56, 0x69, 0x65, 0x77, 0x41, 0x64, 0x64, 0x00, 0x00,
  0x06, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x45, 0x66, 0x66, 0x65, 0x63, 0x74, 0x52, 0x61, 0x64, 0x69, 0x75, 0x73,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x45, 0x66, 0x66, 0x65, 0x63, 0x74, 0x53, 0x68,
  0x61, 0x64, 0x6f, 0x77, 0x53, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x45, 0x66, 0x66, 0x65, 0x63, 0x74, 0x53, 0x68,
  0x61, 0x64, 0x6f, 0x77, 0x50, 0x6f, 0x77, 0x00, 0x06, 0x00, 0x08, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x45, 0x66, 0x66, 0x65,
  0x63, 0x74, 0x53, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x43, 0x6c, 0x61, 0x6d,
  0x70, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x45, 0x66, 0x66, 0x65, 0x63, 0x74, 0x46, 0x61,
  0x64, 0x65, 0x4f, 0x75, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x45, 0x66, 0x66, 0x65, 0x63, 0x74, 0x46, 0x61, 0x64, 0x65, 0x4f, 0x75,
  0x74, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0a, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x45, 0x66, 0x66, 0x65,
  0x63, 0x74, 0x48, 0x6f, 0x72, 0x69, 0x7a, 0x6f, 0x6e, 0x41, 0x6e, 0x67,
  0x6c, 0x65, 0x54, 0x68, 0x72, 0x65, 0x73, 0x68, 0x6f, 0x6c, 0x64, 0x00,
  0x06, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x45, 0x66, 0x66, 0x65, 0x63, 0x74, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x69,
  0x6e, 0x67, 0x52, 0x61, 0x64, 0x69, 0x75, 0x73, 0x4e, 0x65, 0x61, 0x72,
  0x4c, 0x69, 0x6d, 0x69, 0x74, 0x52, 0x65, 0x63, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x44, 0x65, 0x70, 0x74, 0x68, 0x50, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69,
  0x6f, 0x6e, 0x4f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x4d, 0x6f, 0x64, 0x00,
  0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x4e, 0x65, 0x67, 0x52, 0x65, 0x63, 0x45, 0x66, 0x66, 0x65, 0x63, 0x74,
  0x52, 0x61, 0x64, 0x69, 0x75, 0x73, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x4c, 0x6f, 0x61, 0x64,
  0x43, 0x6f, 0x75, 0x6e, 0x74, 0x65, 0x72, 0x41, 0x76, 0x67, 0x44, 0x69,
  0x76, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0a, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x41, 0x64, 0x61, 0x70, 0x74, 0x69, 0x76, 0x65,
  0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x43, 0x6f, 0x75, 0x6e, 0x74, 0x4c,
  0x69, 0x6d, 0x69, 0x74, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x49, 0x6e, 0x76, 0x53,
  0x68, 0x61, 0x72, 0x70, 0x6e, 0x65, 0x73, 0x73, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x50, 0x61, 0x73, 0x73, 0x49, 0x6e, 0x64, 0x65, 0x78, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x42, 0x69, 0x6c, 0x61, 0x74, 0x65, 0x72, 0x61, 0x6c, 0x53, 0x69, 0x67,
  0x6d, 0x61, 0x53, 0x71, 0x75, 0x61, 0x72, 0x65, 0x64, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
  0x42, 0x69, 0x6c, 0x61, 0x74, 0x65, 0x72, 0x61, 0x6c, 0x53, 0x69, 0x6d,
  0x69, 0x6c, 0x61, 0x72, 0x69, 0x74, 0x79, 0x44, 0x69, 0x73, 0x74, 0x61,
  0x6e, 0x63, 0x65, 0x53, 0x69, 0x67, 0x6d, 0x61, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x50, 0x61, 0x74, 0x74, 0x65, 0x72, 0x6e, 0x52, 0x6f, 0x74, 0x53, 0x63,
  0x61, 0x6c, 0x65, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x63, 0x65, 0x73, 0x00,
  0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
  0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x73, 0x55, 0x6e, 0x70, 0x61, 0x63,
  0x6b, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x4e, 0x6f, 0x72, 0x6d,
  0x61, 0x6c, 0x73, 0x55, 0x6e, 0x70, 0x61, 0x63, 0x6b, 0x41, 0x64, 0x64,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x44, 0x65, 0x74, 0x61, 0x69, 0x6c, 0x41, 0x4f,
  0x53, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x44, 0x75, 0x6d, 0x6d, 0x79, 0x30, 0x00, 0x00, 0x06, 0x00, 0x09, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x53, 0x53, 0x41, 0x4f,
  0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x44, 0x69, 0x6d, 0x65, 0x6e, 0x73,
  0x69, 0x6f, 0x6e, 0x73, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0a, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x53, 0x41, 0x4f,
  0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x49, 0x6e, 0x76, 0x65, 0x72, 0x73,
  0x65, 0x44, 0x69, 0x6d, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x00,
  0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00,
  0x44, 0x65, 0x70, 0x74, 0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x44,
  0x69, 0x6d, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x44, 0x65, 0x70, 0x74, 0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x49,
  0x6e, 0x76, 0x65, 0x72, 0x73, 0x65, 0x44, 0x69, 0x6d, 0x65, 0x6e, 0x73,
  0x69, 0x6f, 0x6e, 0x73, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x44, 0x65, 0x70, 0x74,
  0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x4f, 0x66, 0x66, 0x73, 0x65,
  0x74, 0x00, 0x00, 0x00, 0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x50, 0x65, 0x72, 0x50, 0x61, 0x73, 0x73, 0x46,
  0x75, 0x6c, 0x6c, 0x52, 0x65, 0x73, 0x55, 0x56, 0x4f, 0x66, 0x66, 0x73,
  0x65, 0x74, 0x00, 0x00, 0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x42, 0x75,
  0x66, 0x66, 0x65, 0x72, 0x44, 0x69, 0x6d, 0x65, 0x6e, 0x73, 0x69, 0x6f,
  0x6e, 0x73, 0x00, 0x00, 0x06, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x42, 0x75,
  0x66, 0x66, 0x65, 0x72, 0x49, 0x6e, 0x76, 0x65, 0x72, 0x73, 0x65, 0x44,
  0x69, 0x6d, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x09, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x49, 0x6d, 0x70, 0x6f, 0x72, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x4d, 0x61,
  0x70, 0x44, 0x69, 0x6d, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x00,
  0x06, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x49, 0x6d, 0x70, 0x6f, 0x72, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x4d, 0x61,
  0x70, 0x49, 0x6e, 0x76, 0x65, 0x72, 0x73, 0x65, 0x44, 0x69, 0x6d, 0x65,
  0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x00, 0x00, 0x06, 0x00, 0x0c, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x44, 0x65, 0x69, 0x6e,
  0x74, 0x65, 0x72, 0x6c, 0x65, 0x61, 0x76, 0x65, 0x64, 0x44, 0x65, 0x70,
  0x74, 0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x44, 0x69, 0x6d, 0x65,
  0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x00, 0x00, 0x06, 0x00, 0x0e, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x44, 0x65, 0x69, 0x6e,
  0x74, 0x65, 0x72, 0x6c, 0x65, 0x61, 0x76, 0x65, 0x64, 0x44, 0x65, 0x70,
  0x74, 0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x49, 0x6e, 0x76, 0x65,
  0x72, 0x73, 0x65, 0x44, 0x69, 0x6d, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e,
  0x73, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x27, 0x00, 0x00, 0x00, 0x44, 0x65, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x6c,
  0x65, 0x61, 0x76, 0x65, 0x64, 0x44, 0x65, 0x70, 0x74, 0x68, 0x42, 0x75,
  0x66, 0x66, 0x65, 0x72, 0x4f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x00, 0x00,
  0x06, 0x00, 0x0e, 0x00, 0x04, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x44, 0x65, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x6c, 0x65, 0x61, 0x76, 0x65,
  0x64, 0x44, 0x65, 0x70, 0x74, 0x68, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72,
  0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x73, 0x65, 0x64, 0x4f, 0x66,
  0x66, 0x73, 0x65, 0x74, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0b, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x4e, 0x6f, 0x72, 0x6d,
  0x61, 0x6c, 0x73, 0x57, 0x6f, 0x72, 0x6c, 0x64, 0x54, 0x6f, 0x56, 0x69,
  0x65, 0x77, 0x73, 0x70, 0x61, 0x63, 0x65, 0x4d, 0x61, 0x74, 0x72, 0x69,
  0x78, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x53, 0x53, 0x41, 0x4f, 0x43, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74,
  0x73, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x00, 0x05, 0x00, 0x06, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x74, 0x79, 0x70, 0x65, 0x2e, 0x32, 0x64, 0x2e,
  0x69, 0x6d, 0x61, 0x67, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x67, 0x5f, 0x44, 0x65, 0x70, 0x74, 0x68, 0x49,
  0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x74, 0x79, 0x70, 0x65, 0x2e, 0x32, 0x64, 0x2e, 0x69, 0x6d, 0x61, 0x67,
  0x65, 0x2e, 0x61, 0x72, 0x72, 0x61, 0x79, 0x00, 0x05, 0x00, 0x07, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x67, 0x5f, 0x50, 0x72, 0x65, 0x70, 0x61, 0x72,
  0x65, 0x44, 0x65, 0x70, 0x74, 0x68, 0x73, 0x4f, 0x75, 0x74, 0x00, 0x00,
  0x05, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x46, 0x58, 0x5f,
  0x43, 0x41, 0x43, 0x41, 0x4f, 0x5f, 0x50, 0x72, 0x65, 0x70, 0x61, 0x72,
  0x65, 0x44, 0x6f, 0x77, 0x6e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x64,
  0x44, 0x65, 0x70, 0x74, 0x68, 0x73, 0x48, 0x61, 0x6c, 0x66, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x54, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x6c, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0xc4, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0xd0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x1f, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x18, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x25, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x30, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x04, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x04, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x15, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x04, 0x00, 0x16, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x17, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x2c, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x02, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00,
  0x1f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x36, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00,
  0x1f, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x51, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x05, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x25, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x27, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x84, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x7c, 0x00, 0x04, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x50, 0x00, 0x06, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x5f, 0x00, 0x07, 0x00, 0x15, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x2d, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x2f, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x26, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x80, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x06, 0x00, 0x20, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x31, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x4f, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x07, 0x00, 0x15, 0x00, 0x00, 0x00,
  0x36, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x07, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x41, 0x00, 0x07, 0x00, 0x21, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x83, 0x00, 0x05, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00,
  0x2f, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x83, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x06, 0x00, 0x20, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00,
  0x41, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x7c, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x43, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x45, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x63, 0x00, 0x05, 0x00,
  0x45, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x06, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x46, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x63, 0x00, 0x05, 0x00, 0x48, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00,
  0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00,
  0x38, 0x00, 0x01, 0x00
};
