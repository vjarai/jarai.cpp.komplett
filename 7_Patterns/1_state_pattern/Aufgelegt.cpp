#include "Aufgelegt.h"

#include <iostream>

#include "Abgehoben.h"
#include "Verbunden.h"

Aufgelegt::Aufgelegt()
{
	std::cout << "Konstruktor Aufgelegt." << std::endl;
}

Aufgelegt::~Aufgelegt()
{
	std::cout << "Destruktor Aufgelegt." << std::endl;
}

std::unique_ptr<Telefonzustand> Aufgelegt::abheben() 
{
	std::cout << "Hoerer wird abgehoben." << std::endl;
	return std::make_unique < Abgehoben>();
}

std::unique_ptr<Telefonzustand> Aufgelegt::anruf_annehmen()
{
	std::cout << "Klingeling! Anruf wird angenommen." << std::endl;
	return std::make_unique < Verbunden>();
}
