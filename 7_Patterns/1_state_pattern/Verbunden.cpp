#include "Verbunden.h"

#include <iostream>
#include <ostream>

#include "Aufgelegt.h"

Verbunden::Verbunden()
{
	std::cout << "Konstruktor Verbunden." << std::endl;
}

Verbunden::~Verbunden()
{
	std::cout << "Destruktor Verbunden." << std::endl;
}

std::unique_ptr<Telefonzustand> Verbunden::auflegen()
{
	std::cout << "Hoerer wird aufgelegt." << std::endl;
	return std::make_unique < Aufgelegt>();
}

std::unique_ptr<Telefonzustand> Verbunden::sprechen()
{
	std::cout << "Es wird gesprochen." << std::endl;
	return std::make_unique < Verbunden>();
}
