
#include <iostream>

#include "IPhone.h"
#include "UsbLadegeraet.h"
#include "UsbToLightningAdapter.h"

int main()
{
	IPhone phone("Hello World!");
	AppleLadegeraet apple_ladegeraet;

	phone.aufladen(apple_ladegeraet);

	UsbLadegeraet usb_ladegeraet;
	//phone.aufladen(usb_ladegeraet);

	UsbToLightningAdapter pdf_creator_adapter(usb_ladegeraet);
	phone.aufladen(pdf_creator_adapter);
}

