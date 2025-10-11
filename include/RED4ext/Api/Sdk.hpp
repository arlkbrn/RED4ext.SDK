#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/win/Sdk.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/mac/Sdk.hpp>
#else
#error Unsupported platform
#endif
