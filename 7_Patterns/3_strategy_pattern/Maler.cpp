#include "Maler.h"

#include <iostream>
#include <ostream>

void Maler::arbeiten()
{
	std::cout << "Maler " << name_ << " streicht Wand." << std::endl;
}

Maler::Maler(const std::string& name)
	:Arbeiter(name)
{
	std::cout << "Maler " << name_ << " geboren." << std::endl;
}

Maler::~Maler()
{
	std::cout << "Maler " << name_ << " stirbt." << std::endl;
}
