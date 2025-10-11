#pragma once

#if defined(_WIN32)
#include <RED4ext/Memory/win/SharedPtr.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Memory/mac/SharedPtr.hpp>
#else
#error Unsupported platform
#endif
