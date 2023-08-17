#include "Auto.h"
#include "Cabrio.h"

int main()
{
	// Instanz erstellen
	Auto mein_auto;
	mein_auto.anzeigen();

	mein_auto.tanken(30);
	mein_auto.anzeigen();

	mein_auto.fahren(100);
	mein_auto.anzeigen();

	// Instanz Cabrio erstellen
	Cabrio dein_auto;

	dein_auto.oeffnen();
	dein_auto.fahren(100);
	dein_auto.schliessen();

}
