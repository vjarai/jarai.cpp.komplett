#include "Auto.h"


void waschen(Auto waschauto) // call by value
{
	std::cout << "Auto gewaschen" << std::endl;
}


int main()
{
	Auto mein_auto("VW", 50);
	Auto dein_auto("Porsche", 200);

	waschen(mein_auto);		// Aufruf Copy Construktor (call by value);

	Auto sein_auto = mein_auto; // Aufruf Copy Construktor!!!
	//Auto sein_auto(mein_auto); // Aufruf Copy Construktor


	mein_auto = dein_auto;	// Aufruf Auto::operator=

}
