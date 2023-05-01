#include <iostream>
using namespace std;

/*
 * Übung: Kopfgesteuerte Schleife (while)
 */

int main()
{
	cout << "Wieviel Geld nehmen Sie mit zum einkaufen?" << endl;
	double geld;
	cin >> geld;

	while (geld > 0) // Solange noch Geld vorhanden...
	{
		cout << "Preis eingeben (max.: " << geld << "): " << endl;
		double preis;
		cin >> preis;

		if (preis <= 0)
			break; // vorzeitiges Ende der Schleife

		if (preis > geld)
			cout << "Das ist leider zu teuer" << endl;
		else
			geld -= preis;
	}

	cout << "Ende des Kaufrauschs, Restgeld: " << geld << endl;

	
}
