#include <iostream>
using namespace std;

/*
 * Aufgabe: Mehrfachverzweigung mit verschachtelten if ... else
 */


int main()
{
	cout << "Bitte geben Sie eine Note ein: ";
	int note;
	cin >> note;

	cout << endl;

	// Variante 1: Mehrwegeverzweigung mit if... else if
	if (note == 1)
		cout << "Sehr gut" << endl;
	else if (note == 2)
		cout << "Gut" << endl;
	else if (note == 3)
		cout << "Befriedigend" << endl;
	else if (note == 4)
		cout << "Ausreichend" << endl;
	else if (note == 5)
		cout << "Mangelhaft" << endl;
	else if (note == 6)
		cout << "Ungenuegend" << endl;
	else
		cout << "Die Eingabe ist ungueltig" << endl;

	// Variante 2: Mehrwegeverzweigung mit switch
	switch (note)
	{
	case 1: cout << "Sehr gut" << endl;
		break; //Wichtig: break beendet den Block 

	case 2: cout << "Gut" << endl;
		break;

	case 3: cout << "Befriedigend" << endl;
		break;

	case 4: cout << "Ausreichend" << endl;
		break;

	case 5: cout << "Mangelhaft" << endl;
		break;

	case 6: cout << "Ungenuegend" << endl;
		break;

	default: cout << "Die Eingabe ist ungueltig" << endl;
		break;
	}

	// Variante 3: Eleganteste Loesung mit einem string Array 
	string notenBezeichnungen[] = { "Sehr gut", "Gut",  "Befriedigend", "Ausreichend", "Mangelhaft", "Ungenuegend" };

	if (note >= 1 && note <= 6)
		cout << notenBezeichnungen[note - 1] << endl;
	else
		cout << "Die Eingabe ist ungueltig" << endl;
}
