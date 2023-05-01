#include "Telefon.h"

#include <iostream>

Telefon::Telefon()
{
	std::cout << "Telefon erstellt\n" << std::endl;
}

void Telefon::abheben()
{
	auto neuerZustand = aktuellerZustand->abheben();

	delete aktuellerZustand;
	aktuellerZustand = neuerZustand;
}

void Telefon::auflegen()
{
	auto neuerZustand = aktuellerZustand->auflegen();

	delete aktuellerZustand;
	aktuellerZustand = neuerZustand;
}

void Telefon::waehlen()
{
	auto neuerZustand = aktuellerZustand->waehlen();

	delete aktuellerZustand;
	aktuellerZustand = neuerZustand;
}

void Telefon::sprechen()
{
	auto neuerZustand = aktuellerZustand->sprechen();

	delete aktuellerZustand;
	aktuellerZustand = neuerZustand;
}

void Telefon::anruf_annehmen()
{
	auto neuerZustand = aktuellerZustand->anruf_annehmen();

	delete aktuellerZustand;
	aktuellerZustand = neuerZustand;
}
