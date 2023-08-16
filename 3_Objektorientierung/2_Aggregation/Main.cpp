#include "Auto.h"

int main()
{
	// Instanz erstellen
	Auto mein_auto;
	mein_auto.anzeigen();

	mein_auto.tanken(30);
	mein_auto.anzeigen();

	mein_auto.fahren(100);
	mein_auto.anzeigen();
}
