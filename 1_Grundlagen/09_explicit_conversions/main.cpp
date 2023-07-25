#include <iostream>
using namespace std;  // erspart std:: => gilt aber als schlechter Stil!

/*
 * Aufgabe: Explizite Typkonversion (cast)
 */

int main()
{
	int anzahl_kuchen;
	cout << "Wieviel Kuchen haben Sie? : " << endl;
	cin >> anzahl_kuchen;

	int anzahl_personen;
	cout << "Wieviel Personen kommen zur Party? : " << endl;
	cin >> anzahl_personen;

	// Bad smell: veralteter c-style cast
	//const double kuchen_pro_person = ((double)anzahl_kuchen) / anzahl_personen;

	// explicite Typkonversion, da sonst integer division
	const double kuchen_pro_person = static_cast<double>(anzahl_kuchen) / anzahl_personen;

	cout << "Es gibt : " << kuchen_pro_person << " Kuchen fuer jeden " << anzahl_personen << " Gaeste." << endl;

}
