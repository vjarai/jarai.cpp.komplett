#include "PrintFunctor.h"

#include <iostream>

PrintFunctor::PrintFunctor(const std::string& text)
	: header(text), line(0)
{
}

void PrintFunctor::operator()(int item)
{
	std::cout << header << line ++ << " : " << item << std::endl;
}
