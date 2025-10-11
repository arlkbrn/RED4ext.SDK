#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/entMorphTargetSkinnedMeshComponent.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/entMorphTargetSkinnedMeshComponent.hpp>
#else
#error Unsupported platform
#endif
