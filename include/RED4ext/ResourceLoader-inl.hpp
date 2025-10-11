#pragma once

#if defined(_WIN32)
#include <RED4ext/win/ResourceLoader-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/ResourceLoader-inl.hpp>
#else
#error Unsupported platform
#endif
