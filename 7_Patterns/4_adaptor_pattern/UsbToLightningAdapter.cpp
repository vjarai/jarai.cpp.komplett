#include "UsbToLightningAdapter.h"

#include <iostream>


UsbToLightningAdapter::UsbToLightningAdapter(UsbLadegeraet& usbLadegeraet)
	: usbLadegeraet(usbLadegeraet) {
}

int UsbToLightningAdapter::liefereStromViaLightning()
{
	auto strom = usbLadegeraet.liefereStromViaUsb();

	std::cout << "Adapter: Adapter wandelt USB-Strom in Lightning-Strom um." << std::endl;	

	return strom;
}
