#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/MorphTargetMesh.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/MorphTargetMesh.hpp>
#else
#error Unsupported platform
#endif
