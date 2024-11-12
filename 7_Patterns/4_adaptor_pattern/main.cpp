
#include <iostream>

#include "IPhone.h"
#include "UsbLadegeraet.h"
#include "UsbToLightningAdapter.h"

int main()
{
	IPhone meinTelefon;
	AppleLadegeraet apple_ladegeraet;

	meinTelefon.aufladen(apple_ladegeraet);

	UsbLadegeraet usb_ladegeraet;
	//meinTelefon.aufladen(usb_ladegeraet);

	UsbToLightningAdapter pdf_creator_adapter(usb_ladegeraet);
	meinTelefon.aufladen(pdf_creator_adapter);
}

