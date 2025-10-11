#pragma once

#if defined(_WIN32)
#include <RED4ext/IO/win/BaseStream-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/IO/mac/BaseStream-inl.hpp>
#else
#error Unsupported platform
#endif
