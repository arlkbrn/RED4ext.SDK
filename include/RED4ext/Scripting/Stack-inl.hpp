#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/Stack-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/Stack-inl.hpp>
#else
#error Unsupported platform
#endif
