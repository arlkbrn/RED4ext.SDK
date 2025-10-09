#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SharedSpinLock.hpp>
#else
#error Unsupported platform
#endif
