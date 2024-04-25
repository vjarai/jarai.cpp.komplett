
#include "Motorschiff.h"


Motorschiff::Motorschiff(const std::string& Bezeichnung, const int PS)
	: Schiff(Bezeichnung)
	  , ps_(PS)
{
	std::cout << "\t mit " << PS << " ps_" << std::endl;
}

Motorschiff::~Motorschiff()
= default;
