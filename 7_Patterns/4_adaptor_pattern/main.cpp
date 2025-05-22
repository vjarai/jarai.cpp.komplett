
#include <iostream>

#include "IPhone.h"
#include "UsbLadegeraet.h"
#include "UsbToLightningAdapter.h"

int main()
{
	IPhone mein_iphone;
	AppleLadegeraet mein_apple_ladegeraet;

	mein_iphone.aufladen(mein_apple_ladegeraet);

	UsbLadegeraet mein_usb_ladegeraet;
	// mein_iphone.aufladen(mein_usb_ladegeraet); // Geht nicht!!!

	UsbToLightningAdapter mein_usb_to_lightning_adapter(mein_usb_ladegeraet);

	mein_iphone.aufladen(mein_usb_to_lightning_adapter);
}

