#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/physicsTraceResult.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/physicsTraceResult.hpp>
#else
#error Unsupported platform
#endif
