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


void Auto::fahren()
{
	tachostand_ += 100;
	tankinhalt_ -= 10;

	motor_.anlassen();

	cout << "Auto ist 100 KM gefahren!" << endl;
}


void Auto::tanken()
{
	tankinhalt_ += 20;
	cout << "Tankinhalt des Autos wurde auf ";
	cout << tankinhalt_;
	cout << " Liter erhoeht!";
	cout << endl;
}
