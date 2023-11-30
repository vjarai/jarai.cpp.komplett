#include "Baugruppe.h"

Baugruppe::Baugruppe(const std::string& name, double preis)
	: Bauteil(name, preis)
{

}

void Baugruppe::add(Bauteil* bauteil)
{
	bauteile_.push_back(bauteil);
}

void Baugruppe::anzeigen()
{
	std::cout << "Baugruppe: " << name_ << " (" << preis_ + getPreis() << " EUR) bestehend aus " << std::endl;

	for (auto bauteil : bauteile_)
		bauteil->anzeigen();
}

double Baugruppe::getPreis()
{
	double preis = 0.0;

	for (auto bauteil : bauteile_)
	preis += 	bauteil->getPreis();

	return preis;
}
