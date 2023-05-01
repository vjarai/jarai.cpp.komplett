#include <iostream>	// wg. cin, cout

/*
 * Aufgabe: Eingabe, Variablen
 */

// Hier würden globale Variablen angelegt werden (bad smell)


int main()
{
	std::cout << "Ihr Vorname?"; // Console Ausgabe
	std::string first_name; // Lokale Variable deklarieren
	std::cin >> first_name; // Console Eingabe

	std::cout << "Ihr Nachname?";
	std::string last_name; // Variablen erst anlegen, wenn sie benötigt werden!
	std::cin >> last_name;

	std::cout << "Guten Tag " << first_name << " " << last_name << std::endl;

	
}
