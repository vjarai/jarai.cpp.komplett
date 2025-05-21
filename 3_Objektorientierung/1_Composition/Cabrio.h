#pragma once
#include "Auto.h"

class Cabrio : 	public Auto
{
	private:
	bool verdeckOffen_ = false;

public:
	Cabrio();
	~Cabrio();
	void oeffnen();
	void schliessen();

	void anzeigen() override;
	void fahren(double strecke) override;
};

