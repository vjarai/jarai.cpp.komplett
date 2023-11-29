#include "Auto.h"

#include <iostream>

Auto::Auto(const std::string& marke, int ps)
	: marke_(marke)
{
	pMotor_ = new Motor(ps);
	std::cout << "Auto erstellt: ";
	show();
}


Auto::~Auto()
{
	std::cout << "Auto verschrottet: ";
	show();

	delete pMotor_;
}

Auto::Auto(const Auto& original)
{
	marke_ = original.marke_;

	// Tiefe Kopie des Motors erstellen
	pMotor_ = new Motor(*original.pMotor_);

	std::cout << "Auto geklont:  ";
	show();
}


Auto& Auto::operator=(const Auto& original)
{
	marke_ = original.marke_;

	// FALSCH: Flache Kopie (Kopie des Pointers)
	// pMotor_ = Original.pMotor_;

	// RICHTIG: Tiefe Kopie (Kopie der Motorattribute)
	*pMotor_ = *original.pMotor_;

	std::cout << "Auto kopiert:  ";
	show();

	return *this;
}

void Auto::show() const
{
	std::cout << marke_ << " PS: " << pMotor_->ps_ << std::endl;
}
