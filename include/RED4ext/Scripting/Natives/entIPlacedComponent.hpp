#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/entIPlacedComponent.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/entIPlacedComponent.hpp>
#else
#error Unsupported platform
#endif
