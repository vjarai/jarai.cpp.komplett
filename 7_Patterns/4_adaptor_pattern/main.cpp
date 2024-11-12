
#include <iostream>

#include "IPhone.h"
#include "UsbLadegeraet.h"
#include "UsbToLightningAdapter.h"

int main()
{
	IPhone my_letter("Hello World!");
	AppleLadegeraet my_printer;

	my_letter.aufladen(my_printer);

	UsbLadegeraet my_pdfcreator;
	//my_letter.aufladen(my_pdfcreator);

	UsbToLightningAdapter pdf_creator_adapter(my_pdfcreator);
	my_letter.aufladen(pdf_creator_adapter);
}

