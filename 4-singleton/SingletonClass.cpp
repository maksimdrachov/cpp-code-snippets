#include "SingletonClass.h"

/* 
    Static methods should be defined outside the class
 */

Singleton* Singleton::m_pinstance{nullptr};
std::mutex Singleton::m_mutex;

/* 
    The first time we call getInstance we will lock the storage location and then we make sure again that the variable is null and then we set the value.
 */
Singleton* Singleton::getInstance(const std::string& value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_pinstance == nullptr)
    {
        m_pinstance = new Singleton(value);
    }
    return m_pinstance;
}