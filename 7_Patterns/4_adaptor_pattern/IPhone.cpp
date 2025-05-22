#include "IPhone.h"

#include <iostream>

IPhone::IPhone()
{
	std::cout << "IPhone created: " << std::endl;
}

void IPhone::aufladen(AppleLadegeraet& ladegeraet)
{
	int strom  = ladegeraet.liefereStromViaLightning();

	std::cout << "IPhone wird aufgeladen mit " << strom << " mA" << std::endl;
}
