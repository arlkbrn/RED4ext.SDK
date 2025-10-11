#pragma once

#if defined(_WIN32)
#include <RED4ext/win/TLS.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/TLS.hpp>
#else
#error Unsupported platform
#endif
