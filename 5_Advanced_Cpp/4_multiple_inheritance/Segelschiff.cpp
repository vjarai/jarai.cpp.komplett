#include "Segelschiff.h"

Segelschiff::Segelschiff(const std::string& Bezeichnung, const int Segelflaeche)
	: Schiff(Bezeichnung)
	  , Segelflaeche(Segelflaeche)
{
	std::cout << "\t mit " << Segelflaeche << " qm Segelflaeche" << std::endl;
}

Segelschiff::~Segelschiff()
= default;
