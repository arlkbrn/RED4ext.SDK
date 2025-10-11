#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkChildren.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkChildren.hpp>
#else
#error Unsupported platform
#endif
