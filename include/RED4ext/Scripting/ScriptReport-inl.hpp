#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/ScriptReport-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/ScriptReport-inl.hpp>
#else
#error Unsupported platform
#endif
