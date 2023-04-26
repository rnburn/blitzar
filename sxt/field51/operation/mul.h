#pragma once

#include <cstdint>

#include "sxt/base/macro/cuda_callable.h"

namespace sxt::f51t {
class element;
}

namespace sxt::f51o {
//--------------------------------------------------------------------------------------------------
// mul
//--------------------------------------------------------------------------------------------------
/*
 h = f * g
 Can overlap h with f or g.
 */
CUDA_CALLABLE
void mul(f51t::element& h, const f51t::element& f, const f51t::element& g) noexcept;

CUDA_CALLABLE
void mul(volatile f51t::element& h, const f51t::element& f, const f51t::element& g) noexcept;

//--------------------------------------------------------------------------------------------------
// mul32
//--------------------------------------------------------------------------------------------------
void mul32(f51t::element& h, const f51t::element& f, uint32_t n) noexcept;
} // namespace sxt::f51o
