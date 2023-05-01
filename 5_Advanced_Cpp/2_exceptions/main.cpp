#include <iostream>

#include "PartyException.h"
using namespace std;


int eingabe_kuchen()
{
	int anzahl_kuchen;
	cout << "Wieviel Kuchen haben Sie? : ";
	cin >> anzahl_kuchen;

	// nicht ignorierbarer fehler => exception auslösen
	if (anzahl_kuchen <= 0)
		throw PartyException("Party faellt aus wegen fehlender Kuchen.");

	return anzahl_kuchen;
}



int eingabe_personen()
{
	int anzahl_personen;
	cout << endl << "Wieviel Personen kommen zur Party? : ";
	cin >> anzahl_personen;

	// nicht ignorierbarer fehler => exception auslösen
	if (anzahl_personen <= 0)
		throw exception("Party faellt aus wegen fehlender Gaeste.");

	return anzahl_personen;
}


int main()
{

	try
	{
		const int anzahl_kuchen = eingabe_kuchen();

		const int anzahl_personen = eingabe_personen();

		const double kuchen_pro_person = static_cast<double>(anzahl_kuchen) / anzahl_personen;

		cout << "Es gibt : " << kuchen_pro_person << " Kuchen fuer jeden Gast." << endl;

	}
	catch (PartyException& e) // Best practice: Catch by Reference!
	{
		// Problem: Keine Kuchen...
		cout << e.what() << endl;
	}
	catch (exception& e)	// Reihenfolge der catch Blöcke ist wichtig!
	{
		// Problem: Keine Gäste
		cout << e.what() << endl;
	}
	catch(...)				// catch all
	{
		// Aufräumen, d.h. Resourcen freigeben, ggf. Exception loggen

		throw;	// Fehler ggf. weiter nach oben melden (rethrow)
	}
}
