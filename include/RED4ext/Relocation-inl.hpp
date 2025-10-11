#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Relocation-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Relocation-inl.hpp>
#else
#error Unsupported platform
#endif
