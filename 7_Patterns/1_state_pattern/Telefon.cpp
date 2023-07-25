#include "Telefon.h"

#include <iostream>

Telefon::Telefon()
{
	std::cout << "Telefon erstellt\n" << std::endl;
}

void Telefon::abheben()
{
	aktuellerZustand = aktuellerZustand->abheben();
}

void Telefon::auflegen()
{
	aktuellerZustand = aktuellerZustand->auflegen();
}

void Telefon::waehlen()
{
	aktuellerZustand = aktuellerZustand->waehlen();
}

void Telefon::sprechen()
{
	aktuellerZustand = aktuellerZustand->sprechen();
}

void Telefon::anruf_annehmen()
{
	aktuellerZustand = aktuellerZustand->anruf_annehmen();
}
