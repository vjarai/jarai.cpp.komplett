
#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

class Functor // Functor ist eine Klasse die wie eine Funktion aufgerufen werden kann
    // aber zusätzlich einen Zustand (Member-Variable) speichern kann
{

public:
    int summe = 0;


    void operator()(int count)
    {
        for (int i = 0; i < count; i++)
        {
            std::cout << "Thread 1: " << i << std::endl;
            std::this_thread::sleep_for(10ms);

            summe++;
        }
    }
};

void worker_function(int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << "Thread 2: " << i << std::endl;
        std::this_thread::sleep_for(20ms);
    }
}

int main()
{
    Functor my_functor;

    // Wenn auf eine Variable gleichzeitig in mehreren Threads zugegriffen wird, 
    // sollte diese als volatile deklariert werden, um Compiler-Optimierungen zu verhindern.
    volatile int x = 100;

    // https://www.learncpp.com/cpp-tutorial/lambda-captures/
    // [x]      capture x by value
    // [&x]     capture x by reference
    // [=]      capture all variables by value
    // [&]      capture all variables by reference
    // [&, x]   capture all variables by reference, but x by value
    // [=, &y]  capture all variables by value, but y by reference

    auto lambda = [&x](int count)
        {
            for (int i = 0; i < count; i++)
            {
                std::cout << "Thread 3: " << i << " x: " << x << std::endl;
                std::this_thread::sleep_for(30ms);
            }
        };

    int anzahl = 20;

    std::thread t1(lambda, anzahl);                 // Thread mit Lambda erstellen
    std::thread t2(std::ref(my_functor), anzahl);   // Thread mit Functor erstellen, std::ref um Referenz zu übergeben
    std::thread t3(worker_function, anzahl);        // Thread erstellen mit Zeiger auf Funktion

    t1.join();
    t2.join();
    t3.join();

    std::cout << my_functor.summe << std::endl;
}

