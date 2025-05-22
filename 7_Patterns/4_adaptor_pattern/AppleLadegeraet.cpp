#include "AppleLadegeraet.h"

#include <iostream>
#include <ostream>

AppleLadegeraet::AppleLadegeraet()
{
}

int AppleLadegeraet::liefereStromViaLightning()
{
	int strom = 1000;
	std::cout << "AppleLadegeraet liefert strom: "<< strom << std::endl;

	return strom;
}
