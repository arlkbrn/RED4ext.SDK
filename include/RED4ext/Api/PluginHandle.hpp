#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/win/PluginHandle.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/mac/PluginHandle.hpp>
#else
#error Unsupported platform
#endif
