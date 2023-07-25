#pragma once
#include "Telefonzustand.h"
class Verbunden : public Telefonzustand
{
public:
	Verbunden();
	virtual ~Verbunden();
	std::unique_ptr<Telefonzustand> auflegen() override;
	std::unique_ptr<Telefonzustand> sprechen() override;
};

