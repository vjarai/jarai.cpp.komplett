#include "Telefonzustand.h"


Telefonzustand* Telefonzustand::abheben()
{
	throw std::exception("Abheben derzeit nicht moeglich.");
}

Telefonzustand* Telefonzustand::auflegen()
{
	throw std::exception("Auflegen derzeit nicht moeglich.");
}

Telefonzustand* Telefonzustand::waehlen()
{
	throw std::exception("Waehlen derzeit nicht moeglich.");
}

Telefonzustand* Telefonzustand::sprechen()
{
	throw std::exception("Sprechen derzeit nicht moeglich.");
}

Telefonzustand* Telefonzustand::anruf_annehmen()
{
	throw std::exception("Anruf annehmen derzeit nicht moeglich.");
}

