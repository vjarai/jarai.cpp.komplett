#include <iostream>
#include "IKEA.h"
#include "Schrank.h"

int main()
{
	Ikea ikea("Leipzig");
	Ikea ikea_frankfurt("Frankfurt");

	Moebel* pMoebel = ikea.verkaufen();

	if (pMoebel != nullptr) // etwas gekauft ?
	{
		pMoebel->montieren();
		pMoebel->benutzen();
	}

	delete pMoebel;
}
