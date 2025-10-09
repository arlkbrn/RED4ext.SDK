#pragma once

#if defined(_WIN32)
#include <RED4ext/Memory/win/SharedPtr.hpp>
#else
#error Unsupported platform
#endif
