#include "Abgehoben.h"

#include <iostream>
#include <ostream>

#include "Aufgelegt.h"
#include "Verbunden.h"

Abgehoben::Abgehoben()
{
	std::cout << "Zustand Abgehoben erstellt." << std::endl;
}

Abgehoben::~Abgehoben()
{
}

Telefonzustand* Abgehoben::auflegen()
{
	std::cout << "Hoerer wird aufgelegt." << std::endl;
	return new Aufgelegt();
}

Telefonzustand* Abgehoben::waehlen()
{
	std::cout << "Nummer wird gewaehlt." << std::endl;
	return new Verbunden();
}
