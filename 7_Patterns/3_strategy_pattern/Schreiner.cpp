#include "Schreiner.h"

#include <iostream>

void Schreiner::arbeiten()
{
	std::cout << "Schreiner " << name_ << " baut Schrank." << std::endl;
}

Schreiner::Schreiner(const std::string& name)
	:Arbeiter(name)
{
	std::cout << "Schreiner " << name_ << " geboren." << std::endl;
}

Schreiner::~Schreiner()
{
	std::cout << "Schreiner " << name_ << " stirbt." << std::endl;
}
