#include <iostream>

#include "Auto.h"
#include "Cabrio.h"

int main()
{
	Auto mein_auto;
	Cabrio dein_auto;

	std::cout << "Womit fahren? \n1 = Auto, 2 = Cabrio\n";

	Auto* ptr_auto;
	int eingabe;

	std::cin >> eingabe;

	if (eingabe == 1)
		ptr_auto = &mein_auto;
	else
		ptr_auto = &dein_auto;

	//(*ptr_auto).fahren(100);

	ptr_auto->fahren(200);
}
