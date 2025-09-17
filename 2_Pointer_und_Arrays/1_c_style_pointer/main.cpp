
#include <iostream>

int main()
{
	int x = 100;
	int y = 200;

	int* ptr;   // Schritt 1: Pointer anlegen (zeigt IRGENDWO hin)
	ptr = &x;   // Schritt 2: Pointer initialisieren (verweist jetzt auf x)
	*ptr = 101; // Schritt 3: Pointer verwenden

	std::cout << "x = " << x << std::endl;

	ptr = &y;   // Schritt 4: Pointer "verbiegen" (optional)
	*ptr = 202; // Schritt 5: Pointer verwenden

	// Mit einem Pointer kann man also auf unterschiedliche Variablen zugreifen
	// d.h. ein Pointer ist so etwas ähnliches wie eine "variable Variable" ;-)

	std::cout << "y = " << y << std::endl;

	ptr = nullptr;  // Schritt 4: Pointer zeigt jetzt NIRGENWO hin
	*ptr = 100;     // Verwendung von nullptr führt zu sofortigem Programmabbruch!

	int* ptr2 = &x; // Ebenfalls möglich: Pointer anlegen und sofort initialisieren (1+2)

	// Ein int kann nur mit roher Gewalt (cast) in einen Pointer umgewandelt werden.
	ptr2 = (int*)12345;

	// Ein reinterpret_cast (bad smell!) macht das gleiche ist aber besser lesbar!
	ptr2 = reinterpret_cast<int*>(123456);
}

