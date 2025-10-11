#pragma once

#if defined(_WIN32)
#include <RED4ext/win/InstanceType.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/InstanceType.hpp>
#else
#error Unsupported platform
#endif
