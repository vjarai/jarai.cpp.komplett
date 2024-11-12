#include "UsbLadegeraet.h"

#include <iostream>

UsbLadegeraet::UsbLadegeraet()
{
}

int UsbLadegeraet::liefereStromViaUsb()
{
	int strom = 500;
	std::cout << "UsbLadegeraet lifert Strom via USB " << std::endl;

	return strom;
}
