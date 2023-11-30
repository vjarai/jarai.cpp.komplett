
#include <iostream>
#include "Schiffscontainer.h"


int main()
{
    Schiffscontainer<int> meinContainer;

    meinContainer.beladen(10);
    int x = meinContainer.entladen();
    std::cout << x;

}
