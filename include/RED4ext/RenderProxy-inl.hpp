#pragma once

#if defined(_WIN32)
#include <RED4ext/win/RenderProxy-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/RenderProxy-inl.hpp>
#else
#error Unsupported platform
#endif
