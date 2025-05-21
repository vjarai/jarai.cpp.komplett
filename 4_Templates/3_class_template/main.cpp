
#include <iostream>
#include "Schiffscontainer.h"


int main()
{
    Schiffscontainer<int> meinContainer;

    meinContainer.beladen(10);

    int ladung = meinContainer.entladen();

	std::cout << "Ladung: " << ladung << std::endl;

}
