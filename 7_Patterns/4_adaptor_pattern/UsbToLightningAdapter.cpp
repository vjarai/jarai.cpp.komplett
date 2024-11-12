#include "UsbToLightningAdapter.h"


UsbToLightningAdapter::UsbToLightningAdapter(UsbLadegeraet& usbLadegeraet)
	: usbLadegeraet(usbLadegeraet) {
}

int UsbToLightningAdapter::liefereStromViaLightning()
{
	auto strom = usbLadegeraet.liefereStromViaUsb();

	return strom;
}
