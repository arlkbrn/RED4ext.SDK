#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Mutex.hpp>
#endif

RED4EXT_INLINE RED4ext::Mutex::Mutex()
{
    pthread_mutexattr_t attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
    // pthread_mutexattr_setprotocol(&attr, PTHREAD_PRIO_INHERIT); // Sometimes there, sometimes not
    pthread_mutex_init(&m_mutex, &attr);
    pthread_mutexattr_destroy(&attr);
}

RED4EXT_INLINE RED4ext::Mutex::~Mutex()
{
    pthread_mutex_destroy(&m_mutex);
}

RED4EXT_INLINE void RED4ext::Mutex::Lock()
{
    pthread_mutex_lock(&m_mutex);
}

RED4EXT_INLINE void RED4ext::Mutex::Unlock()
{
    pthread_mutex_unlock(&m_mutex);
}

RED4EXT_INLINE void RED4ext::Mutex::lock()
{
    Lock();
}

RED4EXT_INLINE void RED4ext::Mutex::unlock()
{
    Unlock();
}
