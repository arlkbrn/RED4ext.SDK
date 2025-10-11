#pragma once

#if defined(_WIN32)
#include <RED4ext/win/ResourceDepot-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/ResourceDepot-inl.hpp>
#else
#error Unsupported platform
#endif
