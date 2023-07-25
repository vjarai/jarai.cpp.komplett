#include "Telefonzustand.h"


std::unique_ptr<Telefonzustand> Telefonzustand::abheben()
{
	throw std::exception("Abheben derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::auflegen()
{
	throw std::exception("Auflegen derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::waehlen()
{
	throw std::exception("Waehlen derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::sprechen()
{
	throw std::exception("Sprechen derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::anruf_annehmen()
{
	throw std::exception("Anruf annehmen derzeit nicht moeglich.");
}

