#include "Verbunden.h"

#include <iostream>
#include <ostream>

#include "Aufgelegt.h"

Verbunden::Verbunden()
{
	std::cout << "Zustand Verbunden erstellt." << std::endl;
}

Verbunden::~Verbunden()
{
}

Telefonzustand* Verbunden::auflegen()
{
	std::cout << "Hoerer wird aufgelegt." << std::endl;
	return new Aufgelegt();
}

Telefonzustand* Verbunden::sprechen()
{
	std::cout << "Es wird gesprochen." << std::endl;
	return new Verbunden();
}
