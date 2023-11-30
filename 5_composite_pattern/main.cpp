
#include <iostream>

#include "Baugruppe.h"
#include "Bauteil.h"

int main()
{
    Bauteil bauteil1("Schraube", 0.05);
    Bauteil  bauteil2("Mutter", 0.03);

    Baugruppe baugruppe1("Schrauben und Muttern", 0.0);
    baugruppe1.add(&bauteil1);
    baugruppe1.add(&bauteil1);

    baugruppe1.anzeigen();

}

