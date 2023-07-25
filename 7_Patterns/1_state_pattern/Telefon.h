#pragma once
#include <memory>

#include "Aufgelegt.h"
#include "Telefonzustand.h"

class Telefon
{
public:
	Telefon();
	 void abheben();
	 void auflegen();
	 void waehlen();
	 void sprechen();
	 void anruf_annehmen();

private:
	std::unique_ptr<Telefonzustand> aktuellerZustand = std::make_unique<Aufgelegt>();
};

