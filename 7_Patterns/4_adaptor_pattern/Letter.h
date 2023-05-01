#pragma once
#include <string>

#include "Printer.h"

class Letter
{
public:
	explicit Letter(std::string text);
	void send_to(Printer& printer);
	std::string text_;
};

