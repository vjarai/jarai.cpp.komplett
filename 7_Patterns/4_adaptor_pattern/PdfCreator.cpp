#include "PdfCreator.h"

#include <iostream>

PdfCreator::PdfCreator()
{
}

void PdfCreator::create_pdf(const std::string& text)
{
	std::cout << "Pdf created: " << text << std::endl;
}
