#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/SpinLock.hpp>
#endif

#include <cstdint>
#include <sched.h>

RED4EXT_INLINE RED4ext::SpinLock::SpinLock()
    : state(0)
{
}

RED4EXT_INLINE bool RED4ext::SpinLock::TryLock()
{
    char expected = 0;
    return __atomic_compare_exchange_n(&state, &expected, 1, false, __ATOMIC_ACQUIRE, __ATOMIC_RELAXED);
}

RED4EXT_INLINE void RED4ext::SpinLock::Lock()
{
    uint32_t loopCount = 0;
    while (true)
    {
        if (TryLock())
            break;

        if (loopCount >= 16)
            sched_yield();
        ++loopCount;
    }
}

RED4EXT_INLINE void RED4ext::SpinLock::Unlock()
{
    __atomic_store_n(&state, 0, __ATOMIC_RELEASE);
}

// ----------------------------
// -- support for lock_guard --
// ----------------------------

RED4EXT_INLINE bool RED4ext::SpinLock::try_lock()
{
    return TryLock();
}

RED4EXT_INLINE void RED4ext::SpinLock::lock()
{
    Lock();
}

RED4EXT_INLINE void RED4ext::SpinLock::unlock()
{
    Unlock();
}
