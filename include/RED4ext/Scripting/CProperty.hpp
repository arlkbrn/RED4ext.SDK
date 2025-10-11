#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/CProperty.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/CProperty.hpp>
#else
#error Unsupported platform
#endif
