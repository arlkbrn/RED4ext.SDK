#pragma once

#if defined(_WIN32)
#include <RED4ext/GpuApi/win/D3D12MemAlloc.hpp>
#else
#error Unsupported platform
#endif
