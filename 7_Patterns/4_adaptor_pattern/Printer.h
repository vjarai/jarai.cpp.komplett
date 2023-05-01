#pragma once
#include <string>

class Printer
{
public:
	Printer();
	virtual void print(const std::string& text);
};

