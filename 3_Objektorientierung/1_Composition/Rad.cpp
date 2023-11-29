#include "Rad.h"

#include <iostream>
using namespace std;

Rad::Rad()
{
	profiltiefe_ = 5;
	luftdruck_ = 2;
	cout << "Rad wurde produziert!" << endl;
}

Rad::~Rad()
{
	cout << "Rad wurde verschrottet!" << endl;
}

void Rad::aufpumpen()
{
	luftdruck_ += 1;
	cout << "Rad wurde auf ";
	cout << luftdruck_;
	cout << " bar aufgepumpt!";
	cout << endl;
}

void Rad::anzeigen()
{
	cout << "Luftdruck " << luftdruck_ << endl;
}
