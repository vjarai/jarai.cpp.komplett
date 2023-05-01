#include "PdfCreatorToPrinterAdapter.h"


PdfCreatorToPrinterAdapter::PdfCreatorToPrinterAdapter(PdfCreator& pdfcreator)
: pdfcreator_(pdfcreator) {
}

void PdfCreatorToPrinterAdapter::print(const std::string& text)
{
	pdfcreator_.create_pdf(text);
}
