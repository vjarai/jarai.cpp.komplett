#include "Printer.h"

#include <iostream>
#include <ostream>

Printer::Printer()
{
}

void Printer::print(const std::string& text)
{
	std::cout << "Printer prints: " << text << std::endl;
}
