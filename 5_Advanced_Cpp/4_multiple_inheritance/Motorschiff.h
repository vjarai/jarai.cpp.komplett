#ifndef MOTORSCHIFF_H
#define MOTORSCHIFF_H

#include "Schiff.h"

class Motorschiff : virtual public Schiff
	//virtual: Die Basisklasse kommt in Erben dieser Klasse und diese Klasse kommt ohne Basisklasse in den Erben. 
	// So wird Kollison bei Mehrfachvererbung verhindert 
{
public:
	Motorschiff(const std::string& Bezeichnung, int PS);
	~Motorschiff() override;
	virtual void tuckern() { std::cout << "\tTuck Tuck" << std::endl; }

	void schwimmen() override
	{
		std::cout << "\tMotor:";
		Schiff::schwimmen();
	}

private:
	const int ps_;
};

#endif // MOTORSCHIFF_H
