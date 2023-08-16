#include "Auto.h"
#include <iostream>
using namespace std;


Auto::Auto()
{
	ps_ = 70;
	tachostand_ = 0;
	tankinhalt_ = 5;
	farbe_ = "Blau";
	marke_ = "VW";

	//Meldung ausgeben
	cout << "Auto wurde produziert!" << endl;
}

Auto::~Auto()
{
	//Meldung ausgeben
	cout << "Auto wurde bei Tachostand ";
	cout << tachostand_;
	cout << " KM verschrottet!" << endl;
}


void Auto::fahren(double strecke)
{
	motor_.anlassen();

	tachostand_ += strecke;
	tankinhalt_ -= strecke / 10;

	cout << "Auto ist " << strecke << " KM gefahren!" << endl;

	motor_.abstellen();
}

void Auto::anzeigen()
{
	cout << "Tankinhalt :" << tankinhalt_ << endl;
	cout << "Tachostand :" << tachostand_ << endl;
	motor_.anzeigen();
}


void Auto::tanken(double liter)
{
	tankinhalt_ += liter;
	cout << "Tankinhalt des Autos wurde auf ";
	cout << tankinhalt_;
	cout << " Liter erhoeht!";
	cout << endl;
}
