#pragma once
#include "Telefonzustand.h"

class Abgehoben : public Telefonzustand
{
public:
	Abgehoben();
	virtual ~Abgehoben();

	Telefonzustand* auflegen() override;
	Telefonzustand* waehlen() override;
};

