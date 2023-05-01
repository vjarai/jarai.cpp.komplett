#include <iostream>
using namespace std;

#include "Bruch.h"

Bruch::Bruch(int zaehler, int nenner) // Konstruktor wird auch als Konvertierungsoperator genuzt!!
	: nenner_(nenner), zaehler_(zaehler)
{
	// cout << "Bruch erzeugt!" << endl;
}

Bruch::~Bruch()
{
	// cout << "Bruch entsorgt! ;-)" << endl;
}

void Bruch::show() const
{
	cout << zaehler_ << "/" << nenner_;
}

Bruch Bruch::read_from_console()
{
	Bruch ergebnis;

	cin >> ergebnis.zaehler_;
	cout << "Nenner=";
	cin >> ergebnis.nenner_;

	return ergebnis;
}

Bruch Bruch::operator +(const Bruch& rhs) const
{
	Bruch ergebnis;

	ergebnis.zaehler_ = zaehler_ * rhs.nenner_ + nenner_ * rhs.zaehler_;
	ergebnis.nenner_ = nenner_ * rhs.nenner_;
	ergebnis.kuerzen();

	return ergebnis;
}



Bruch Bruch::operator -(const Bruch& rhs) const
{
	Bruch ergebnis;
	ergebnis.zaehler_ = zaehler_ * rhs.nenner_ - nenner_ * rhs.zaehler_;
	ergebnis.nenner_ = nenner_ * rhs.nenner_;
	ergebnis.kuerzen();
	return ergebnis;
}

Bruch operator /(const Bruch& lhs, const Bruch& rhs) 
{
	Bruch ergebnis;

	ergebnis.zaehler_ = lhs.zaehler_ * rhs.nenner_;
	ergebnis.nenner_ = lhs.nenner_ * rhs.zaehler_;
	ergebnis.kuerzen();

	return ergebnis;
}


Bruch operator*(const Bruch& lhs, const Bruch& rhs)
{
	Bruch ergebnis;

	ergebnis.zaehler_ = lhs.zaehler_ * rhs.zaehler_;
	ergebnis.nenner_ = lhs.nenner_ * rhs.nenner_;
	ergebnis.kuerzen();

	return ergebnis;
}

Bruch::operator double() const
{
	return static_cast<double> (zaehler_) / nenner_;
}

void Bruch::kuerzen() // Algorithmus ist verbesserungswürdig...
{
	for (int i = nenner_; i > 1; i--)
		if (nenner_ % i == 0 && zaehler_ % i == 0)
		{
			nenner_ /= i;
			zaehler_ /= i;
		}
}


ostream& operator<<(ostream& os, const Bruch& rhs)
{
	os << "(" << rhs.zaehler_ << "/" << rhs.nenner_ << ")";

	return os;
}


istream& operator>>(istream& is, Bruch& rhs)
{
	cout << "Zaehler: ";
	is >> rhs.zaehler_;

	cout << "Nenner : ";
	is >> rhs.nenner_;

	cout << endl;

	return is;
}


