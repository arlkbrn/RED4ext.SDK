#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/entEntity.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/entEntity.hpp>
#else
#error Unsupported platform
#endif
