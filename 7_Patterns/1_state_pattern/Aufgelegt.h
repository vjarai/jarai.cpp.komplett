#pragma once
#include "Telefonzustand.h"
class Aufgelegt :
	public Telefonzustand
{
public:
	Aufgelegt();
	virtual ~Aufgelegt();

	Telefonzustand* abheben() override;
	Telefonzustand* anruf_annehmen() override;
};

