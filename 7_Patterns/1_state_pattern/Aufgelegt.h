#pragma once
#include "Telefonzustand.h"
class Aufgelegt :
	public Telefonzustand
{
public:
	Aufgelegt();
	virtual ~Aufgelegt();

	std::unique_ptr<Telefonzustand> abheben() override;
	std::unique_ptr<Telefonzustand> anruf_annehmen() override;
};

