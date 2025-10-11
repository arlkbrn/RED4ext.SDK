#pragma once

#if defined(_WIN32)
#include <RED4ext/win/RTTISystem.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/RTTISystem.hpp>
#else
#error Unsupported platform
#endif
