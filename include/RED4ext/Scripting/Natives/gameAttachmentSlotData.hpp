#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameAttachmentSlotData.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameAttachmentSlotData.hpp>
#else
#error Unsupported platform
#endif
