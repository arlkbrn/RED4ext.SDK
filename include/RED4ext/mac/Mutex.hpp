#pragma once

#include <RED4ext/Common.hpp>
#include <pthread.h>

namespace RED4ext
{
struct Mutex
{
    Mutex();
    Mutex(const Mutex&) = delete;
    Mutex(Mutex&&) = delete;
    Mutex& operator=(const Mutex&) = delete;
    Mutex& operator=(Mutex&&) = delete;
    ~Mutex();

    void Lock();
    void Unlock();

    // --------------------------------------------
    // -- support for lock_guard --
    // --------------------------------------------

    void lock();
    void unlock();

private:
    pthread_mutex_t m_mutex;
};
RED4EXT_ASSERT_SIZE(Mutex, 64);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Mutex-inl.hpp>
#endif
