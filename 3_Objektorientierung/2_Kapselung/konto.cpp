#include "konto.h"
#include <iostream>
using namespace std;

// Initialisierung der Klassenvariable
int Konto::anzahl_konten = 0;

Konto::Konto(const string& kontoinhaber)
	: kontoinhaber_(kontoinhaber)
{
	iban_ = ++anzahl_konten;
	kontostand_ = 0.00;

	cout << endl << "Konto erstellt: " << endl;
	anzeigen();
}

Konto::~Konto()
{
	if (kontostand_ < 0)
		cout << "Bitte " << kontostand_ << " einzahlen" << endl;
	else
		cout << "Der Restbetrag von " << kontostand_ << " wurde ausgezahlt an " << kontoinhaber_ << endl;

	cout << "Konto wurde aufgeloest !" << endl;
}

void Konto::einzahlen(double betrag)
{
	kontostand_ += betrag;
	cout <<  betrag << " EUR eingezahlt fuer " << kontoinhaber_ << endl;
}

void Konto::abheben(double betrag, int pin)
{
	if (pin != pin_)
		throw exception("Pin ungueltig.");

	if (kontostand_ - betrag < 0)
		throw exception("Betrag kann nicht abgehoben werden, keine Deckung.");

	kontostand_ -= betrag;

	cout <<  betrag << " EUR abgehoben von " << kontoinhaber_ << endl;
}

void Konto::anzeigen()
{
	cout << "-------------- " << endl;
	cout << "Kontoinhaber : " << kontoinhaber_ << endl;
	cout << "Kontonummer  : " << iban_ << endl;
	cout << "Kontostand   : " << kontostand_ << endl;
	cout << "-------------- \n" << endl;
}

void Konto::ueberweisen(Konto& habenkonto, double betrag, int pin)
{
	cout <<  betrag << " EUR wird von " << kontoinhaber_
		<< " an " << habenkonto.kontoinhaber_ << " ueberwiesen:" << endl;

	abheben(betrag, pin);
	habenkonto.einzahlen(betrag);
}
