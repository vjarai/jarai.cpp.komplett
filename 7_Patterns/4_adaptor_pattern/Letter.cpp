#include "Letter.h"

#include <iostream>

Letter::Letter(std::string text)
: text_(std::move(text))
{
	std::cout << "Letter created: " << text_ << std::endl;
}

void Letter::send_to(Printer& printer)
{
	printer.print(text_);
}
