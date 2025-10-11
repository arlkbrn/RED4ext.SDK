#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/IScriptable.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/IScriptable.hpp>
#else
#error Unsupported platform
#endif
