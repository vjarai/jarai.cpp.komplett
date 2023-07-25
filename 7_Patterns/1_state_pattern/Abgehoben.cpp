#include "Abgehoben.h"

#include <iostream>
#include <ostream>

#include "Aufgelegt.h"
#include "Verbunden.h"

Abgehoben::Abgehoben()
{
	std::cout << "Konstruktor Abgehoben." << std::endl;
}

Abgehoben::~Abgehoben()
{
	std::cout << "Destruktor Abgehoben." << std::endl;
}

std::unique_ptr<Telefonzustand> Abgehoben::auflegen()
{
	std::cout << "Hoerer wird aufgelegt." << std::endl;
	return std::make_unique< Aufgelegt>();
}

std::unique_ptr<Telefonzustand> Abgehoben::waehlen()
{
	std::cout << "Nummer wird gewaehlt." << std::endl;
	return std::make_unique < Verbunden>();
}
