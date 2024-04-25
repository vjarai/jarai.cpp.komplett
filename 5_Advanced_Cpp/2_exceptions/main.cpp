#include <iostream>

#include "PartyException.h"


int eingabe_kuchen()
{
	int anzahl_kuchen;
	std::cout << "Wieviel Kuchen haben Sie? : ";
	std::cin >> anzahl_kuchen;

	// nicht ignorierbarer fehler => exception auslösen
	if (anzahl_kuchen <= 0)
		throw PartyException("Party faellt aus wegen fehlender Kuchen.");

	return anzahl_kuchen;
}



int eingabe_personen()
{
	int anzahl_personen;
	std::cout << std::endl << "Wieviel Personen kommen zur Party? : ";
	std::cin >> anzahl_personen;

	// nicht ignorierbarer fehler => exception auslösen
	if (anzahl_personen <= 0)
		throw std::exception("Party faellt aus wegen fehlender Gaeste.");

	return anzahl_personen;
}


int main()
{

	try
	{
		const int anzahl_kuchen = eingabe_kuchen();

		const int anzahl_personen = eingabe_personen();

		const double kuchen_pro_person = static_cast<double>(anzahl_kuchen) / anzahl_personen;

		std::cout << "Es gibt : " << kuchen_pro_person << " Kuchen fuer jeden Gast." << std::endl;

	}
	catch (PartyException& e) // Best practice: Catch by Reference!
	{
		// Problem: Keine Kuchen...
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)	// Reihenfolge der catch Blöcke ist wichtig!
	{
		// Problem: Keine Gäste
		std::cout << e.what() << std::endl;
	}
	catch(...)				// catch all
	{
		// Aufräumen, d.h. Resourcen freigeben, ggf. Exception loggen

		throw;	// Fehler ggf. weiter nach oben melden (rethrow)
	}
}
