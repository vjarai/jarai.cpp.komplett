#include <iostream>

#include "Schrank.h"
#include "Tisch.h"

using namespace std;

#include "IKEA.h"

// Initialisierung der statischen Klassenvariablen
double Ikea::konzern_umsatz_ = 0;

Ikea::Ikea(const std::string& standort)
{
	filial_umsatz_ = 0;
	standort_ = standort;
	cout << "IKEA in " << standort_ << " gebaut!" << endl;
}

void Ikea::anzeigen()
{
	cout << "IKEA in " << standort_ << " hat einen Umsatz von " << filial_umsatz_ << " EUR" << endl;
	cout << "Der Konzernumsatz betraegt " << konzern_umsatz_ << " EUR" << endl;
}


Ikea::~Ikea()
{
	cout << "IKEA in " << standort_ << " abgerissen. Umsatz: " << filial_umsatz_ << " EUR" << endl;
}


Moebel* Ikea::verkaufen()
{
	cout << endl << "Was wollen Sie kaufen?" << endl;
	cout << "1. Tisch" << endl;
	cout << "2. Schrank " << endl;

	int eingabe;
	cin >> eingabe;

	Moebel* pMoebel;

	if (eingabe == 1)
		pMoebel = new Tisch();
	else if (eingabe == 2)
		pMoebel = new Schrank();
	else
		pMoebel = nullptr; // nichts verkauft...

	if (pMoebel != nullptr)
	{
		filial_umsatz_ += pMoebel->get_preis(); // Ikea Umsatz steigt...
		konzern_umsatz_ += pMoebel->get_preis(); // Konzernumsatz steigt...
	}

	return pMoebel;
}
