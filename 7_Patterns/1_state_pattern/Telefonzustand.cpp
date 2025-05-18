#include "Telefonzustand.h"


std::unique_ptr<Telefonzustand> Telefonzustand::abheben()
{
	throw std::runtime_error("Abheben derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::auflegen()
{
	throw std::runtime_error("Auflegen derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::waehlen()
{
	throw std::runtime_error("Waehlen derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::sprechen()
{
	throw std::runtime_error("Sprechen derzeit nicht moeglich.");
}

std::unique_ptr<Telefonzustand> Telefonzustand::anruf_annehmen()
{
	throw std::runtime_error("Anruf annehmen derzeit nicht moeglich.");
}

