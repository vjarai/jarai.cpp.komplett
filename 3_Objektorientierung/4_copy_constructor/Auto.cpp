#include "Auto.h"

#include <iostream>

Auto::Auto(const std::string& marke, int ps)
    : marke_(marke)
{
    p_motor_ = new Motor(ps);
    std::cout << "Auto erstellt: ";
    anzeigen();
}


Auto::~Auto()
{
    std::cout << "Auto verschrottet: ";
    anzeigen();

    delete p_motor_;
}

Auto::Auto(const Auto& original)
{
    marke_ = original.marke_;

    // Tiefe Kopie des Motors erstellen
    p_motor_ = new Motor(*original.p_motor_);

    std::cout << "Auto geklont:  ";
    anzeigen();
}


Auto& Auto::operator=(const Auto& original)
{
    marke_ = original.marke_;

    // RICHTIG: Tiefe Kopie (Kopie der Motorattribute)
    *p_motor_ = *original.p_motor_;

    std::cout << "Auto kopiert:  ";
    anzeigen();

    return *this;
}

void Auto::anzeigen() const
{
    std::cout << marke_ << " PS: " << p_motor_->ps_ << std::endl;
}
