
#include <iostream>

// old style enum deklarieren (Benutzt / "verschmutzt" globalen namensraum)
enum Colour
{
	Red, Green, Blue
};

// modern style enum class deklarieren
enum class Language
{
	Deutsch, Englisch
};

// struct / record deklarieren
struct Point3d
{
	int x;
	int y;
	int z;

	Point3d(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	//  structs können auch Member Funktionen haben
	void show() const
	{
		std::cout << x << ", " << y << ", " << z << std::endl;
	}
};

// Old style typedef 
typedef unsigned long int ulong;

// Modern style alias declaration (besser lesbar)
using ushort = unsigned short int;

int main()
{
	// veraltetes enum verwenden
	Colour my_colour = Red;

	// moderne enum class verwenden
	Language my_language = Language::Deutsch;

	// old style typedef verwenden 
	ulong x{ 0 };

	// modern Type alias "ushort" verwenden
	ushort a = 100;		// very old c-style initialisierung
	ushort b(100);		// old c++ style init
	ushort c{ 100 };	// modern init 

	// struct mit Initialisierung
	Point3d my_point{ 10, 20, 30 };

	my_point.x = 100;
	my_point.show();
}

