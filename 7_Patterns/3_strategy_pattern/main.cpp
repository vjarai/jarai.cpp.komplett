
#include <iostream>
#include <memory>

#include "Firma.h"
#include "Maler.h"
#include "Schreiner.h"

int main()
{
    Firma meine_firma;

    meine_firma.einstellen(std::make_shared<Maler>("Klecks"));
    meine_firma.einstellen(std::make_shared<Schreiner>("Schulz"));

    meine_firma.produzieren();

}

