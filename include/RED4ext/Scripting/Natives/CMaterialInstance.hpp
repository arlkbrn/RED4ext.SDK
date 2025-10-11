#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/CMaterialInstance.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/CMaterialInstance.hpp>
#else
#error Unsupported platform
#endif
