#ifndef SEGELSCHIFF_H
#define SEGELSCHIFF_H

#include "Schiff.h"

class Segelschiff : virtual public Schiff
	//virtual: Die Basisklasse kommt in Erben dieser Klasse und diese Klasse kommt ohne Basisklasse in den Erben. So wird Kollison bei Mehrfachvererbung verhindert 
{
public:
	Segelschiff(string Bezeichnung, int Segelflaeche);
	~Segelschiff() override;
	virtual void segeln(void) { cout << "\tFfffft ..." << endl; }

	void schwimmen(void) override
	{
		cout << "\tSegel:";
		Schiff::schwimmen();
	}

private:
	const int Segelflaeche;
};

#endif // SEGELSCHIFF_H
