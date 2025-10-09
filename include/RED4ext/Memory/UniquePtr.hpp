#pragma once

#if defined(_WIN32)
#include <RED4ext/Memory/win/UniquePtr.hpp>
#else
#error Unsupported platform
#endif
