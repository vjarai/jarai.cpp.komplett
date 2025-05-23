// 11_main_args.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		std::cout << "usage: main.exe inputfile outputfile" << std::endl;
		return -1;
	}

	for (int i = 0; i < argc; i++)
	{
		std::cout << "Argument " << i << ": " << argv[i] << std::endl;
	}
}

