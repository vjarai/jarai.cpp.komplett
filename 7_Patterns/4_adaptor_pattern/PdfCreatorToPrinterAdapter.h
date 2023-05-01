#pragma once
#include "PdfCreator.h"
#include "Printer.h"

class PdfCreatorToPrinterAdapter : public Printer
{
public:
	PdfCreatorToPrinterAdapter(PdfCreator & pdfcreator);
	void print(const std::string& text) override;
	PdfCreator& pdfcreator_;
};

