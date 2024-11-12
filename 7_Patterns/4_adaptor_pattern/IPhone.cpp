#include "IPhone.h"

#include <iostream>

IPhone::IPhone()
{
	std::cout << "IPhone created: " << std::endl;
}

void IPhone::aufladen(AppleLadegeraet& ladegeraet)
{
	ladegeraet.liefereStromViaLightning();
}
