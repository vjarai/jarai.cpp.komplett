#pragma once
#include <memory>

class Telefonzustand
{
public:
	virtual ~Telefonzustand() = default;

	virtual Telefonzustand* abheben();
	virtual Telefonzustand* auflegen();
	virtual Telefonzustand* waehlen();
	virtual Telefonzustand* sprechen();
	virtual Telefonzustand* anruf_annehmen();
};

