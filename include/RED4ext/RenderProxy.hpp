#pragma once

#if defined(_WIN32)
#include <RED4ext/win/RenderProxy.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/RenderProxy.hpp>
#else
#error Unsupported platform
#endif
