/*
 * Copyright (C) 2019 Intel Corporation. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "simd_conversions.h"

bool
jit_compile_simd_i8x16_narrow_i16x8(JitCompContext *cc, bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i16x8_narrow_i32x4(JitCompContext *cc, bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i32x4_narrow_i64x2(JitCompContext *cc, bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i16x8_extend_i8x16(JitCompContext *cc, bool is_low,
                                    bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i32x4_extend_i16x8(JitCompContext *cc, bool is_low,
                                    bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i64x2_extend_i32x4(JitCompContext *cc, bool lower_half,
                                    bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i32x4_trunc_sat_f32x4(JitCompContext *cc, bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i32x4_trunc_sat_f64x2(JitCompContext *cc, bool is_signed)
{
    return false;
}

bool
jit_compile_simd_f32x4_convert_i32x4(JitCompContext *cc, bool is_signed)
{
    return false;
}

bool
jit_compile_simd_f64x2_convert_i32x4(JitCompContext *cc, bool is_signed)
{
    return false;
}
bool
jit_compile_simd_i16x8_extadd_pairwise_i8x16(JitCompContext *cc, bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i32x4_extadd_pairwise_i16x8(JitCompContext *cc, bool is_signed)
{
    return false;
}
bool
jit_compile_simd_i16x8_q15mulr_sat(JitCompContext *cc)
{
    return false;
}

bool
jit_compile_simd_i16x8_extmul_i8x16(JitCompContext *cc, bool is_low,
                                    bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i32x4_extmul_i16x8(JitCompContext *cc, bool is_low,
                                    bool is_signed)
{
    return false;
}

bool
jit_compile_simd_i64x2_extmul_i32x4(JitCompContext *cc, bool lower_half,
                                    bool is_signed)
{
    return false;
}