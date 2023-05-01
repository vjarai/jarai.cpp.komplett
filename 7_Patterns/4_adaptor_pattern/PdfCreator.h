#pragma once
#include <string>

class PdfCreator
{
public:
	PdfCreator();
	void create_pdf(const std::string& text);
};

