#include "konto.h"
#include <iostream>
using namespace std;

int main()
{
	Konto meinkonto("Fritz");
	Konto deinkonto("Susi");
	int pin = 1234;

	try {
		meinkonto.einzahlen(100);
		meinkonto.anzeigen();

		// Falsche Pin => exception
		//meinkonto.abheben(100000, 0);

		// Keine Deckung => exception
		//meinkonto.abheben(100000, pin);

		meinkonto.anzeigen();

		meinkonto.abheben(50, pin);
		meinkonto.anzeigen();

		meinkonto.ueberweisen(deinkonto, 10, pin);
		meinkonto.anzeigen();
		deinkonto.anzeigen();
	}
	catch (exception& ex)
	{
		cout << ex.what() << endl;
	}
}
