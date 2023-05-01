#include "Aufgelegt.h"

#include <iostream>

#include "Abgehoben.h"
#include "Verbunden.h"

Aufgelegt::Aufgelegt()
{
	std::cout << "Zustand Aufgelegt erstellt." << std::endl;
}

Aufgelegt::~Aufgelegt()
{
}

Telefonzustand* Aufgelegt::abheben() 
{
	std::cout << "Hoerer wird abgehoben." << std::endl;
	return new Abgehoben();
}

Telefonzustand* Aufgelegt::anruf_annehmen()
{
	std::cout << "Klingeling! Anruf wird angenommen." << std::endl;
	return new Verbunden();
}
