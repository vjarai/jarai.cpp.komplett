// 3_class_template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Schiffscontainer.h"


int main()
{
    Schiffscontainer<int> meinContainer;

    meinContainer.beladen(10);
    int x = meinContainer.entladen();
    std::cout << x;

}
