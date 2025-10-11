#pragma once

#if defined(_WIN32)
#include <RED4ext/win/ResourceReference.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/ResourceReference.hpp>
#else
#error Unsupported platform
#endif
