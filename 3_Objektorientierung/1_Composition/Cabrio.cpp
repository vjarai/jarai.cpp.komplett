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
	verdeckOffen_ = true;
	std::cout << "Verdeck wird geoeffnet" << std::endl;
}

void Cabrio::schliessen()
{
	verdeckOffen_ = false;
	std::cout << "Verdeck wird geschlossen" << std::endl;
}

void Cabrio::anzeigen()
{
	std::cout << "Verdeck ist " << (verdeckOffen_ ? "Offen" : "zu") << "." << std::endl;
	Auto::anzeigen();
}
