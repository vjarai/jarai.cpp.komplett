#include <iostream>
using namespace std;


int main()
{
	// Bad smell: c-style char array (statt dessen string verwenden)
	// => Gefahr von buffer overflows!
	char vorname[30], nachname[30], name[60];

	cout << "Bitte Vornamen eingeben!" << endl << " Vorname: ";
	cin >> vorname;

	cout << "Bitte Nachnamen eingeben!" << endl << " Nachname: ";
	cin >> nachname;

	char *ptr_vorname, *ptr_nachname, *ptr_name; // Schritt 1: Pointer anlegen

	// WICHTIG: Der Name einer Array variablen ist per definition ein constanter Zeiger auf das Nullte Element.

	// ptr_vorname = &Vorname[0];
	// ist gleichbedeutend mit
	// ptr_vorname = Vorname;			

	ptr_vorname = vorname; // Schritt 2: Pointer initialisieren
	ptr_nachname = nachname;
	ptr_name = name;


	do // Vorname kopieren...
	{
		*ptr_name = *ptr_vorname;
		ptr_name++;
		ptr_vorname++;
	}
	while (*ptr_vorname != '\0'); // solange nicht Endekennzeichen gefunden

	*ptr_name = ' '; //Leertaste zwischen Vor- und Nachname
	ptr_name++;

	do // Nachname kopieren...
	{
		*ptr_name = *ptr_nachname;
		ptr_name++;
		ptr_nachname++;
	}
	while (*ptr_nachname != '\0'); // solange nicht Endekennzeichen gefunden

	*ptr_name = 0; // Endekennzeichen nicht vergessen!

	cout << endl << "Der komplette Name: " << name << endl;

	
}
