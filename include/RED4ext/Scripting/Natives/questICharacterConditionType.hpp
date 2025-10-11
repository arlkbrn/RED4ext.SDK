#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/questICharacterConditionType.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/questICharacterConditionType.hpp>
#else
#error Unsupported platform
#endif
