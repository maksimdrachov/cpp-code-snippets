#include <mutex>
#include <string>
#include <iostream>

/* 
    The Singleton class defines the 'getInstance' method that serves as an alternative to constructor and lets clients access the same instance of class over and over.
 */
class Singleton
{
    /* 
        The Singleton's constructor/destructor should always be private to prevent direct construction/destruction calls with the 'new'/'delete' operator.
     */
private:
    static Singleton* m_pinstance;
    static std::mutex m_mutex;

protected:
    Singleton(const std::string value) : m_value(value)
    {}
    ~Singleton() {}
    std::string m_value;

public:
    /* 
        Singletons should not be cloneable
     */
    Singleton(Singleton *other) = delete;

    /* 
        Singletons should not be assignable
     */
    void operator=(const Singleton&) = delete;

    /* 
        This is the static method that controls the access to the singleton instance. On the first run, it creates a singleton object and places into the static field. On subsequent runs, it returns the client existing object stored in the static field.
     */
    static Singleton *getInstance(const std::string& value);

    /* 
        Finally, any singleton should define some business logic, which can be executed on its instance.
     */
    void SomeBusinessLogic()
    {
        std::cout << "Businnes logic executed" << std::endl;
    }

    std::string value() const {
        return m_value;
    }
};