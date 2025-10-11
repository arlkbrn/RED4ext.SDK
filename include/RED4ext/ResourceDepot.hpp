#pragma once

#if defined(_WIN32)
#include <RED4ext/win/ResourceDepot.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/ResourceDepot.hpp>
#else
#error Unsupported platform
#endif
