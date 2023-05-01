#include <iostream>

int sub(int x, int y) 
{
	return x - y;
}


int add(int x, int y) 
{
	return x + y;
}


int main()
{
	int x = 100, y = 200;

	int (*func_ptr)(int, int);	// Schritt 1: Funktionszeiger anlegen

	func_ptr = add;				// Schritt 2: Funktionszeiger initialisieren
	//  func_ptr = &add			// umständlicher, aber ok

	int z = func_ptr(x, y);		// Schritt 3: Funktionszeiger verwenden => add()
	//	z = (*func_ptr)(x, y);		// umständlicher, aber ok

	std::cout << z << std::endl; 

	func_ptr = sub;				// Funktionszeiger "verbiegen"
	z = func_ptr(x, y);			// Funktion Sub aufrufen

	std::cout << z << std::endl; 

	// Ein Funktionszeiger kann auf unterschiedliche Funktionen (mit identischer Signatur) verweisen,
	// Ein Funktionszeiger kann somit als "variable" Funktion verwendet werden.

}
