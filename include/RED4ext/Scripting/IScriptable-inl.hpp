#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/IScriptable-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/IScriptable-inl.hpp>
#else
#error Unsupported platform
#endif
