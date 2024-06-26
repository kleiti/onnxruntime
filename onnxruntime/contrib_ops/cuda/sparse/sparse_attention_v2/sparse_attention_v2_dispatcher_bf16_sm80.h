// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

// This file is generated by compile_sparse_attention_v2.py

#pragma once
#include "contrib_ops/cuda/sparse/sparse_attention_v2/sparse_attention_v2_common.h"

namespace onnxruntime {
namespace contrib {
namespace cuda {
namespace sparse_attention_v2 {

// launcher for: sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3
Status sparse_attention_v2_bf16_sm80_0aafaf4a(SparseAttentionParams& params);

Status sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3(SparseAttentionParams& params) {
  return sparse_attention_v2_bf16_sm80_0aafaf4a(params);
}

// load for: sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3
void load_sparse_attention_v2_bf16_sm80_0aafaf4a();
void load_sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3() {
  load_sparse_attention_v2_bf16_sm80_0aafaf4a();
}

// unload for: sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3
void unload_sparse_attention_v2_bf16_sm80_0aafaf4a();
void unload_sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3() {
  unload_sparse_attention_v2_bf16_sm80_0aafaf4a();
}

// launcher for: sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3
Status sparse_attention_v2_bf16_sm80_8b0ce70d(SparseAttentionParams& params);

Status sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3(SparseAttentionParams& params) {
  return sparse_attention_v2_bf16_sm80_8b0ce70d(params);
}

// load for: sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3
void load_sparse_attention_v2_bf16_sm80_8b0ce70d();
void load_sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3() {
  load_sparse_attention_v2_bf16_sm80_8b0ce70d();
}

// unload for: sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3
void unload_sparse_attention_v2_bf16_sm80_8b0ce70d();
void unload_sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3() {
  unload_sparse_attention_v2_bf16_sm80_8b0ce70d();
}

typedef Status (*kernel_func_t)(SparseAttentionParams& params);
kernel_func_t sparse_attention_v2_bf16_sm80_kernels[] = {
    sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3,
    sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3,
};

int sparse_attention_v2_bf16_sm80_get_num_algos(void) {
  return (int)sizeof(sparse_attention_v2_bf16_sm80_kernels);
}

Status sparse_attention_v2_bf16_sm80(SparseAttentionParams& params, int algo_id) {
  assert(algo_id < (int)sizeof(sparse_attention_v2_bf16_sm80_kernels));
  return sparse_attention_v2_bf16_sm80_kernels[algo_id](params);
}

void load_sparse_attention_v2_bf16_sm80(void) {
  load_sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3();
  load_sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3();
}

void unload_sparse_attention_v2_bf16_sm80(void) {
  unload_sparse_attention_v2_bf16_sm80_1x128x64x64x128x16x1x0_warps1xstages3();
  unload_sparse_attention_v2_bf16_sm80_1x128x64x64x128x64x1x0_warps4xstages3();
}

Status sparse_attention_v2_bf16_sm80_default(SparseAttentionParams& params) {
  return sparse_attention_v2_bf16_sm80(params, 0);
}

}  // namespace sparse_attention_v2
}  // namespace cuda
}  // namespace contrib
}  // namespace onnxruntime
