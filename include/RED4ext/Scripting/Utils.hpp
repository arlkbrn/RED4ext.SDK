#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/Utils.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/Utils.hpp>
#else
#error Unsupported platform
#endif
