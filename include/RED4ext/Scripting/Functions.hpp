#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/Functions.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/Functions.hpp>
#else
#error Unsupported platform
#endif
