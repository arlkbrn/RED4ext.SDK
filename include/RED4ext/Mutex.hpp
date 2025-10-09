#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Mutex.hpp>
#else
#error Unsupported platform
#endif
