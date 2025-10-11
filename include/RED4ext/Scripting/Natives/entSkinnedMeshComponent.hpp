#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/entSkinnedMeshComponent.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/entSkinnedMeshComponent.hpp>
#else
#error Unsupported platform
#endif
