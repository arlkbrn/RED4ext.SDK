#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkMultiChildren.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkMultiChildren.hpp>
#else
#error Unsupported platform
#endif
