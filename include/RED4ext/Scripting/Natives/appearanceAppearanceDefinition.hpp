#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/appearanceAppearanceDefinition.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/appearanceAppearanceDefinition.hpp>
#else
#error Unsupported platform
#endif
