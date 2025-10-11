#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/v0/win/Scripts.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/v0/mac/Scripts.hpp>
#else
#error Unsupported platform
#endif
