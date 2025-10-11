#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/SharedSpinLock.hpp>
#endif

#include <cstdint>
#include <sched.h>

RED4EXT_INLINE RED4ext::SharedSpinLock::SharedSpinLock()
    : state(0)
{
}

RED4EXT_INLINE bool RED4ext::SharedSpinLock::TryLock()
{
    char expected = 0;
    return __atomic_compare_exchange_n(&state, &expected, -1, false, __ATOMIC_ACQUIRE, __ATOMIC_RELAXED);
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::Lock()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (TryLock())
            break;

        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            sched_yield();
    }
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::Unlock()
{
    __atomic_store_n(&state, 0, __ATOMIC_RELEASE);
}

RED4EXT_INLINE bool RED4ext::SharedSpinLock::TryLockShared()
{
    char currentState = __atomic_load_n(&state, __ATOMIC_RELAXED);
    if (currentState != -1)
    {
        char expected = currentState;
        return __atomic_compare_exchange_n(&state, &expected, currentState + 1, false, __ATOMIC_ACQUIRE,
                                           __ATOMIC_RELAXED);
    }
    return false;
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::LockShared()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (TryLockShared())
            break;

        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            sched_yield();
    }
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::UnlockShared()
{
    __atomic_fetch_add(&state, -1, __ATOMIC_RELEASE);
}

// --------------------------------------------
// -- support for lock_guard and shared_lock --
// --------------------------------------------

RED4EXT_INLINE bool RED4ext::SharedSpinLock::try_lock()
{
    return TryLock();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::lock()
{
    Lock();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::unlock()
{
    Unlock();
}

RED4EXT_INLINE bool RED4ext::SharedSpinLock::try_lock_shared()
{
    return TryLockShared();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::lock_shared()
{
    LockShared();
}

RED4EXT_INLINE void RED4ext::SharedSpinLock::unlock_shared()
{
    UnlockShared();
}
