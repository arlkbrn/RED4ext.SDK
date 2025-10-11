#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/entAnimationControllerComponent.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/entAnimationControllerComponent.hpp>
#else
#error Unsupported platform
#endif
