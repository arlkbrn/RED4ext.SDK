#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/win/EMainReason.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/mac/EMainReason.hpp>
#else
#error Unsupported platform
#endif
