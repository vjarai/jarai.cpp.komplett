#include <iostream>
using namespace std;


int main()
{
	double umsatz, summe = 0;

	do
	{
		cout << "Bitte Umsatz eingeben (0 fuer Ende)" << endl;
		cin >> umsatz;

		summe += umsatz;

	} while (umsatz != 0);

	cout << "Summe: " << summe << endl;


}
