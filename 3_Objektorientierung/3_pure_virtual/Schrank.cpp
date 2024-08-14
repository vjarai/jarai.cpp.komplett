#include <iostream>
#include "Schrank.h"

using namespace std;


Schrank::Schrank()
	: Moebel("Schnurz", 1000)
{
	cout << "Schrank gebaut!" << endl;
}


Schrank::~Schrank()
{
	cout << "Schrank  " << bezeichnung_ << " entsorgt!" << endl;
}

void Schrank::benutzen()
{
	cout << "Der Schrank " << bezeichnung_ << " wird benutzt!" << endl;
}


void Schrank::montieren()
{
	Moebel::montieren();
	cout << "Der Schrank " << bezeichnung_ << " wird montiert!" << endl;
}
