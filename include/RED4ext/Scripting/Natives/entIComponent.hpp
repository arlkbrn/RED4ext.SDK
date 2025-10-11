#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/entIComponent.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/entIComponent.hpp>
#else
#error Unsupported platform
#endif
