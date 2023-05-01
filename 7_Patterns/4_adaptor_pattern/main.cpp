
#include <iostream>

#include "Letter.h"
#include "PdfCreator.h"
#include "PdfCreatorToPrinterAdapter.h"

int main()
{
	Letter my_letter("Hello World!");
	Printer my_printer;

	my_letter.send_to(my_printer);

	PdfCreator my_pdfcreator;
	//my_letter.send_to(my_pdfcreator);

	PdfCreatorToPrinterAdapter pdf_creator_adapter(my_pdfcreator);
	my_letter.send_to(pdf_creator_adapter);
}

