#pragma once
#include "Telefonzustand.h"
class Verbunden : public Telefonzustand
{
public:
	Verbunden();
	virtual ~Verbunden();
	Telefonzustand* auflegen() override;
	Telefonzustand* sprechen() override;
};

