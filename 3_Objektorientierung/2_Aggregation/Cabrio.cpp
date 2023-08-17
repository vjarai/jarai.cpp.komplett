#include "Cabrio.h"

#include <iostream>

Cabrio::Cabrio()
{
	std::cout << "Cabrio produziert." << std::endl;
}

Cabrio::~Cabrio()
{
	std::cout << "Cabrio verschrottet." << std::endl;
}

void Cabrio::oeffnen()
{
	std::cout << "Verdeck wird geoeffnet" << std::endl;
}

void Cabrio::schliessen()
{
	std::cout << "Verdeck wird geschlossen" << std::endl;
}
