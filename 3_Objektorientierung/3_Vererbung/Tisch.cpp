#include <iostream>
#include "Tisch.h"

using namespace std;

Tisch::Tisch()
	: Moebel("Susi", 299)
{
	cout << "Tisch gebaut!" << endl;
}

Tisch::~Tisch()
{
	cout << "Tisch  " << bezeichnung_ << " entsorgt!" << endl;
}

void Tisch::benutzen()
{
	cout << "Der Tisch " << bezeichnung_ << " wird benutzt!" << endl;
}

void Tisch::montieren()
{
	Moebel::montieren();
	cout << "Der Tisch " << bezeichnung_ << " wird montiert!" << endl;
}
