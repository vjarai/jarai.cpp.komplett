#include "Schiff.h"


Schiff::Schiff(const std::string& Bezeichnung)
	: Tonage(40)
	  , Bezeichnung(Bezeichnung)
{
	std::cout << "Schiff " << Bezeichnung << std::endl;
}

Schiff::~Schiff()
= default;
