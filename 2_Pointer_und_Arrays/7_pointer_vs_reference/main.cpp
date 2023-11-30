
#include <iostream>

void pointer_example()
{
	int x = 100;
	int y = 200;

	// Schritt 1: Pointer anlegen
	int* p1;            // Pointer zeigt IRGENDWO (!) hin
	int* p2 = nullptr;  // Pointer zeigt NIRGENDWO hin (etwas besser)

	// Schritt 2: Pointer initialisieren
	p1 = &x;            // Pointer zeigt auf x

	// Schritt 3: Pointer benutzen
	*p1 = 42;           // x = 42

	// Schritt 4: Pointer "verbiegen" (optional)
	p1 = &y;            // Pointer zeigt auf y

	// Schritt 5: Pointer benutzen (wie Schritt 3)
	*p1 = 23;           // y = 23

	// Schritt 6: (optional)
	p1 = nullptr;       // Pointer zeigt nirgendwo hin
}


void reference_example()
{
	int x = 100;
	int y = 200;

	// Schritt 1: Referenz anlegen UND sofort initialisieren
	// int& rx;		   // Geht nicht: Referenz muss initialisiert werden
	int & rx = x;      // Referenz auf x

	// Schritt 2: Referenz benutzen
	rx = 500;          // x = 500

	// Referenzen können NICHT "verbogen" werden
	rx = y;            // x = 200 !!!

	// Es gibt keine null Referenz 
	// rx = nullptr;   // Geht nicht

	// Fazit => Referenzen sind die "besseren" (einfacheren) Pointer
	// Es gibt aber Fälle, wo Pointer erforderlich sind (nullptr, verbiegen, new/delete)
}

int main()
{
    pointer_example();

	reference_example();
}

