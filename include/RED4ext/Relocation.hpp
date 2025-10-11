#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Relocation.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Relocation.hpp>
#else
#error Unsupported platform
#endif
