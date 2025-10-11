#pragma once

#if defined(_WIN32)
#include <RED4ext/Memory/win/UniquePtr.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Memory/mac/UniquePtr.hpp>
#else
#error Unsupported platform
#endif
