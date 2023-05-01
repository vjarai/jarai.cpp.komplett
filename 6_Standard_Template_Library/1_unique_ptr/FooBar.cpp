#include "FooBar.h"

#include <iostream>

FooBar::FooBar()
{
	std::cout << "FooBar created." << std::endl;
}

FooBar::~FooBar()
{
	std::cout << "FooBar destroyed." << std::endl;
}

void FooBar::show()
{
	std::cout << "Hello from FooBar." << std::endl;
}
