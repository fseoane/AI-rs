#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/_cufft_clear_plan_cache_ops.h>

namespace at {


// aten::_cufft_clear_plan_cache(DeviceIndex device_index) -> ()
inline void _cufft_clear_plan_cache(at::DeviceIndex device_index) {
    return at::_ops::_cufft_clear_plan_cache::call(device_index);
}

}
