#include <iostream>
using namespace std;

#include "Moebel.h"


Moebel::Moebel(const std::string& bezeichnung, double preis)
	: bezeichnung_(bezeichnung), preis_(preis)
{
	cout << "Moebel wird konstruiert:" << endl;
	ist_montiert_ = false;
}

Moebel::~Moebel()
{
	cout << "Moebel ist recycled!" << endl;
}

double Moebel::get_preis()
{
	return preis_;
}

void Moebel::montieren()
{
	cout << "Moebel wird ausgepackt." << endl;
}

void Moebel::benutzen()
{
	if (!ist_montiert_)
		cout << bezeichnung_ << " muß erst montiert werden !" << endl;
}
