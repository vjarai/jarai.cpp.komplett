#include <windows.h>
#include "Alexa.h"

using namespace std;



int main()
{
	SetConsoleOutputCP(1252);          //Für richtige Ausgabe
	
	Alexa alexa;

	while (true) {
		alexa.einlesen();			//Achtung: Benennung schlecht
	 }

}
