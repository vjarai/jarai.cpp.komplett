#include "UsbLadegeraet.h"

#include <iostream>

UsbLadegeraet::UsbLadegeraet()
{
}

int UsbLadegeraet::liefereStromViaUsb()
{
	int strom = 500;
	std::cout << "UsbLadegeraet liefert Strom via USB "<< strom << std::endl;

	return strom;
}
