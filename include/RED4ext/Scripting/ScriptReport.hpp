#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/ScriptReport.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/ScriptReport.hpp>
#else
#error Unsupported platform
#endif
