#include <iostream>		// "Neue" C++ Header (ohne .h)
#include <Windows.h>	// Windows Header für SetConsoleOutputCP

// Umfangreiche Coding Guidelines und Best Practices
// https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
// https://cppreference.com


/*
	Dies ist ein mehrzeiliger Kommentar
	Die Funktion main() ist der Einstiegspunkt der Anwendung
*/

int main(int argc, char* argv[])  // Parameter von der Commandozeile sind optional
{
	SetConsoleOutputCP(65001);	// UTF-8 Codepage setzen

	std::cout << "Hallo Welt!!" << std::endl; // Dies ist ein einzeiliger Kommentar

	return 0; // returncode 0 ist optional
}
