#include <iostream>
//#include <random>
using namespace std;


int main()
{
	int tipp, anzahl_versuche = 0;

	// Zufallszahlengenerator wird mit der Uhrzeit initialisiert
	srand(static_cast<unsigned int> (time(nullptr)));

	// Geheimzahl zwischen 1 und 100 ermitteln
	const int geheimzahl = 1 + rand() % 100;

	do
	{
		cout << "Bitte Tipp eingeben:" << endl;
		cin >> tipp;

		if (tipp == 0)
		{
			cout << "Schade, dass Sie aufgeben!" << endl;
			break;
		}

		if (tipp < 1 || tipp > 100)
		{
			cout << "Tipp muss zwischen 1 und 100 liegen!" << endl;
			continue;
		}

		anzahl_versuche++;

		if (tipp < geheimzahl)
			cout << "Tipp ist leider zu klein." << endl;
		else if (tipp > geheimzahl)
			cout << "Tipp ist leider zu gross." << endl;

	} while (geheimzahl != tipp);

	cout << "Gewonnen, nach " << anzahl_versuche << " Versuchen." << endl;


}
