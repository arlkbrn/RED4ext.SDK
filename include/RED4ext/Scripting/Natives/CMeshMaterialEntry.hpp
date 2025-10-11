#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/CMeshMaterialEntry.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/CMeshMaterialEntry.hpp>
#else
#error Unsupported platform
#endif
