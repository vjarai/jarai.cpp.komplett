#include "Segelschiff.h"

Segelschiff::Segelschiff(const string Bezeichnung, const int Segelflaeche)
	: Schiff(Bezeichnung)
	  , Segelflaeche(Segelflaeche)
{
	cout << "\t mit " << Segelflaeche << " qm Segelflaeche" << endl;
}

Segelschiff::~Segelschiff()
{
}
