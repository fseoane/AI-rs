#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API split_copy_Tensor {
  using schema = ::std::vector<at::Tensor> (const at::Tensor &, c10::SymInt, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::split_copy")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "split_copy.Tensor(Tensor self, SymInt split_size, int dim=0) -> Tensor[]")
  static ::std::vector<at::Tensor> call(const at::Tensor & self, c10::SymInt split_size, int64_t dim);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymInt split_size, int64_t dim);
};

struct TORCH_API split_copy_Tensor_out {
  using schema = void (const at::Tensor &, c10::SymInt, int64_t, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::split_copy")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "split_copy.Tensor_out(Tensor self, SymInt split_size, int dim=0, *, Tensor(a!)[] out) -> ()")
  static void call(const at::Tensor & self, c10::SymInt split_size, int64_t dim, at::TensorList out);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymInt split_size, int64_t dim, at::TensorList out);
};

}} // namespace at::_ops
