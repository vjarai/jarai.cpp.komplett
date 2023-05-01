#include "Schiff.h"


Schiff::Schiff(const string Bezeichnung)
	: Tonage(40)
	  , Bezeichnung(Bezeichnung)
{
	cout << "Schiff " << Bezeichnung << endl;
}

Schiff::~Schiff()
{
}
