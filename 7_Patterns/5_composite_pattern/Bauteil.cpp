#include "Bauteil.h"


Bauteil::Bauteil(const std::string& name, double preis)
{
	name_ = name;
	preis_ = preis;
}

Bauteil::~Bauteil()
{
}

void Bauteil::anzeigen()
{
	std::cout << "Bauteil: " << name_ << " Preis: " << preis_ << std::endl;
}

std::string Bauteil::getName()
{
	return name_;
}

double Bauteil::getPreis()
{
	return preis_;
}


