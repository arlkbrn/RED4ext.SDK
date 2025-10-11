#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/v0/win/Logger.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/v0/mac/Logger.hpp>
#else
#error Unsupported platform
#endif
