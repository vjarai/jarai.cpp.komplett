
// Producer-Consumer problem with multiple producers and consumers

/*
 In this simplified example:
•	We have a shared buffer (std::queue<int> buffer) with a maximum size of 5.
•	The producer function produces integers and adds them to the buffer.
•	The consumer function consumes integers from the buffer.
•	We use a std::mutex (mtx) to protect access to the buffer and a std::condition_variable (cv) to synchronize the producer and consumer threads.
•	The producer and consumer functions use std::unique_lock<std::mutex> to lock the mutex and cv.wait to wait for the condition variable.
•	The main function creates one producer thread and one consumer thread, and then joins them.he main function creates two producer threads and two consumer threads, and then joins them.
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
	while (!done) {
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
	std::thread producerThread(producer);
	std::thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();

	return 0;
}
