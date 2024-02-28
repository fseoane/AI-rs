#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<at::Tensor,at::Tensor> histogram(const at::Tensor & self, const at::Tensor & bins, const c10::optional<at::Tensor> & weight={}, bool density=false);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> histogram_out(const at::Tensor & self, const at::Tensor & bins, const c10::optional<at::Tensor> & weight, bool density, at::Tensor & hist, at::Tensor & bin_edges);
TORCH_API ::std::tuple<at::Tensor,at::Tensor> histogram(const at::Tensor & self, int64_t bins=100, c10::optional<at::ArrayRef<double>> range=c10::nullopt, const c10::optional<at::Tensor> & weight={}, bool density=false);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> histogram_out(const at::Tensor & self, int64_t bins, c10::optional<at::ArrayRef<double>> range, const c10::optional<at::Tensor> & weight, bool density, at::Tensor & hist, at::Tensor & bin_edges);
} // namespace native
} // namespace at
