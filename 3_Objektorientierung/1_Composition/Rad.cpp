#include "Rad.h"

#include <iostream>
using namespace std;

Rad::Rad()
	: position_("unbekannt")
{
	profiltiefe_ = 5;
	luftdruck_ = 2;
	cout << "Rad wurde produziert!" << endl;
}

Rad::Rad(const std::string& position)
: position_(position)
{
	profiltiefe_ = 5;
	luftdruck_ = 2;
	cout << "Rad " << position_ << " wurde produziert!" << endl;
}

Rad::~Rad()
{
	cout << "Rad "<< position_ <<" wurde verschrottet!" << endl;
}

void Rad::anzeigen() const
{
	cout << "Luftdruck " << position_ << ":" << luftdruck_ << endl;
}
