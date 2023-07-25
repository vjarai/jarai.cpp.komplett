#pragma once
#include "Telefonzustand.h"

class Abgehoben : public Telefonzustand
{
public:
	Abgehoben();
	virtual ~Abgehoben();

	std::unique_ptr<Telefonzustand> auflegen() override;
	std::unique_ptr<Telefonzustand> waehlen() override;
};

