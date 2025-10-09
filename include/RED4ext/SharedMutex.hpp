#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SharedMutex.hpp>
#else
#error Unsupported platform
#endif
