
// Producer-Consumer problem with multiple producers and consumers

/*
 In this simplified example:
•	We have a shared buffer (std::queue<int> buffer) with a maximum size of 5.
•	The producer function produces integers and adds them to the buffer.
•	The consumer function consumes integers from the buffer.
•	We use a std::mutex (mtx) to protect access to the buffer and a std::condition_variable (cv) to synchronize the producer and consumer threads.
•	The producer and consumer functions use std::unique_lock<std::mutex> to lock the mutex and cv.wait to wait for the condition variable.
•	The main function creates one producer thread and one consumer thread, and then joins them.

How It Works:
•	Blocking: When the cv.wait method is called, it will block the current thread (in this case, the producer thread) until the condition variable (cv) is notified.
•	Predicate Check: The lambda function is used as a predicate to check if the condition is met. In this case, the condition is that the buffer size should be less than the maximum buffer size.
•	Unlocking: While the thread is waiting, the unique_lock will automatically unlock the mutex (mtx), allowing other threads to acquire the lock and modify the buffer.
•	Re-locking: Once the condition variable is notified and the predicate returns true, the unique_lock will re-lock the mutex, and the thread will continue execution.
*/

#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>

std::queue<int> buffer;
const unsigned int maxBufferSize = 5;
std::mutex mtx;
std::condition_variable cv;
volatile bool done = false;

void producer()
{
	for (int i = 1; i <= 100; i++)
	{
		std::unique_lock<std::mutex> lock(mtx);

		// blocks the current thread until the condition variable is notified and the specified predicate returns true.
		cv.wait(lock, [] { return buffer.size() < maxBufferSize; });

		buffer.push(i);
		std::cout << "Produced " << i << std::endl;

		lock.unlock();
		cv.notify_all();

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

	done = true;
}

void consumer()
{
	while (!done || !buffer.empty() ) 
	{
		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, [] { return !buffer.empty(); });

		int value = buffer.front();
		buffer.pop();
		std::cout << "Consumed " << value << std::endl;

		lock.unlock();
		cv.notify_all();

		std::this_thread::sleep_for(std::chrono::milliseconds(150));
	}
}

int main() {
	// thread erstellen und starten
	std::thread producerThread(producer);
	std::thread consumerThread(consumer);

	// auf thread beendigung warten
	producerThread.join();
	consumerThread.join();

	return 0;
}
