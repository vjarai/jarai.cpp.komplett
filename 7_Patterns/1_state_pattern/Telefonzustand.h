#pragma once
#include <memory>

class Telefonzustand
{
public:
	virtual ~Telefonzustand() = default;

	virtual std::unique_ptr<Telefonzustand> abheben();
	virtual std::unique_ptr<Telefonzustand> auflegen();
	virtual std::unique_ptr<Telefonzustand> waehlen();
	virtual std::unique_ptr<Telefonzustand> sprechen();
	virtual std::unique_ptr<Telefonzustand> anruf_annehmen();
};

