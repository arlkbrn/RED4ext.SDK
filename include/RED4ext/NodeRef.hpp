#pragma once

#if defined(_WIN32)
#include <RED4ext/win/NodeRef.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/NodeRef.hpp>
#else
#error Unsupported platform
#endif
