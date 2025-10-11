#pragma once

#if defined(_WIN32)
#include <RED4ext/win/RTTITypes.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/RTTITypes.hpp>
#else
#error Unsupported platform
#endif
