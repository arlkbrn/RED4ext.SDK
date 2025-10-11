#pragma once

#if defined(_WIN32)
#include <RED4ext/win/TLS-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/TLS-inl.hpp>
#else
#error Unsupported platform
#endif
