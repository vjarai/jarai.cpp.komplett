#include <iostream>
using namespace std;

int main()
{
	int anzahl;

	cout << "Bitte Array groesse eingeben:" << endl;
	cin >> anzahl;

	// double daten[anzahl]; // geht nicht, da anzahl zur compilezeit nicht bekannt ist!

	double* ptr_daten = new double[anzahl]; // Speicher anfordern und Zeiger initialisieren

	cout << endl << anzahl* sizeof(double) << " Bytes Heap Speicher angefordert..." << endl << endl;

	// Daten eingeben
	for (int i = 0; i < anzahl; i++)
	{
		cout << "Eingabe des " << i << ". Wertes: ";
		cin >> ptr_daten[i];
	}


	// Hier könnte man z.B. die Daten sortieren....


	// Daten rückwärts ausgeben
	for (int i = anzahl - 1; i >= 0; i--)
	{
		cout << "Ausgabe des " << i << ". Wertes: ";
		cout << ptr_daten[i];
		//cout << ptr_daten + i; // ebenfalls möglich
		cout << endl;
	}


	// Zu jedem new gehört GENAU EIN delete

	delete[]ptr_daten; // Array new benötigt Array delete[] !

	cout << endl << anzahl * sizeof(double) << " Bytes Heap Speicher freigegeben..." << endl << endl;


}
