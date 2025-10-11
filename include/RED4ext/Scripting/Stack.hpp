#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/Stack.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/Stack.hpp>
#else
#error Unsupported platform
#endif
