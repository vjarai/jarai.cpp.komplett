#include <iostream>
using namespace std;

/*
 * Aufgabe: Explizite Typkonversion (cast)
 */

int main()
{
	int anzahl_kuchen;
	cout << "Wieviel Kuchen haben Sie? : ";
	cin >> anzahl_kuchen;

	int anzahl_personen;
	cout << endl << "Wieviel Personen kommen zur Party? : ";
	cin >> anzahl_personen;

	// Bad smell: veralteter c-style cast
	//const double kuchen_pro_person = ((double)anzahl_kuchen) / anzahl_personen;

	// explicite Typkonversion, da sonst integer division
	const double kuchen_pro_person = static_cast<double>(anzahl_kuchen) / anzahl_personen;

	cout << "Es gibt : " << kuchen_pro_person << " Kuchen fuer jeden Gast." << endl;

}
