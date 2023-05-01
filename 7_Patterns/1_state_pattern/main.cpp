#include <iostream>

#include "Telefon.h"

int main()
{

	try
	{
		Telefon myPhone;

		// "Happy Path" => Anrufen
		myPhone.abheben();
		myPhone.waehlen();
		myPhone.sprechen();
		myPhone.sprechen();
		myPhone.auflegen();

		// "Happy Path" => Angerufen werden
		myPhone.anruf_annehmen();
		myPhone.sprechen();
		myPhone.auflegen();

		// Fehler: mehrmals auflegen!
		myPhone.auflegen();

	}
	catch (std::exception& ex)
	{
		std::cout << ex.what();
	}

}




