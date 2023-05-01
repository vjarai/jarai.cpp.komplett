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
	Telefonzustand* aktuellerZustand = new Aufgelegt();
};

