#pragma once

#if defined(_WIN32)
#include <RED4ext/win/StringView.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/StringView.hpp>
#else
#error Unsupported platform
#endif
