#pragma once
#include <iostream>

class Singleton
{
private:
	static	Singleton* ptr_instance_;

	Singleton()
	{
		std::cout << "Instance created." << std::endl;
	}

public:
	static Singleton& get_instance()
	{
		if (ptr_instance_ == nullptr)
			ptr_instance_ = new Singleton();

		return *ptr_instance_;
	}

	void do_some_work()
	{
		std::cout << "do_some_work..." << std::endl;
	}
};

// Initialisierung der static member variablen (sonst Linker Error)
Singleton* Singleton::ptr_instance_ = nullptr;

