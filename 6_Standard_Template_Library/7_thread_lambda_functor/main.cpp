
#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

class Functor
{
public:
	void operator()(int count)
	{
		for (int i = 0; i < count; i++)
		{
			std::cout << "Thread 1: " << i << std::endl;
			std::this_thread::sleep_for(10ms);
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
	auto lambda = [](int count)
	{
		for (int i = 0; i < count; i++)
		{
			std::cout << "Thread 3: " << i << std::endl;
			std::this_thread::sleep_for(30ms);
		}
	};

	int anzahl = 20;

	std::thread t1(lambda, anzahl);
	std::thread t2(my_functor, anzahl);
	std::thread t3(worker_function, anzahl);

	t1.join();
	t2.join();
	t3.join();

}

