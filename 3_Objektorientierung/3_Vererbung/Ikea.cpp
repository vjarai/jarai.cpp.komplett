#include <iostream>

#include "Schrank.h"
#include "Tisch.h"

using namespace std;

#include "IKEA.h"

Ikea::Ikea(const std::string& standort)
{
	umsatz_ = 0;
	standort_ = standort;
	cout << "IKEA in " << standort_ << " gebaut!" << endl;
}


Ikea::~Ikea()
{
	cout << "IKEA in " << standort_ << " abgerissen. Umsatz: " << umsatz_ << " EUR" << endl;
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
		umsatz_ += pMoebel->get_preis(); // Ikea Umsatz steigt...

	return pMoebel;
}
