#pragma once
#include <vector>

#include "Bauteil.h"

class Baugruppe : public Bauteil
{

private:

	 std::vector<Bauteil*> bauteile_;

public:



	Baugruppe(const std::string& name, double preis);

	void add(Bauteil* bauteil);

	void anzeigen() override;

	double getPreis() override;
};

