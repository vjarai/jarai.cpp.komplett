#include <iostream>

// Funktions Definitionen (Implementierung)
void anzeigen(int x)
{
	std::cout << " Integer: " << x << std::endl;
}

// Eine Inline Funktionen ist etwas performanter (zu Lasten des Speicherbedarfs)
void anzeigen(double x)
{
	std::cout << " double: " << x << std::endl;
}

// Alle Parameter werden defaultmäßig als KOPIE übergeben!
void anzeigen(std::string x)
{
	std::cout << " string: " << x << std::endl;
}