#include <iostream>
using namespace std;

/*
 * Aufgabe: Zählergesteuerte Schleife
 */

int main()
{
	// Achtung: Numerische Variablen werden NICHT automatisch mit 0 initialisiert!
	double summe = 0;
	double umsatz[4];

	for (int i = 0; i < 4; i++) // for(Initialisierung; Laufbedingung;ReInitialsierung) Achtung KEIN Semikolon!
	{
		cout << "Bitte geben Sie den Umsatz fuer das " << i << ".te Quartal ein! : ";

		double eingabe;
		cin >> eingabe;

		umsatz[i] = eingabe;
		summe += eingabe;	// Kurzschreibweise von Summe = Summe + Zahl
	}

	// for_each loop für arrays und container
	for (auto wert : umsatz)
	{
		std::cout << wert << endl;
	}

	cout << "Die Summe betraegt: " << summe << endl;


}
