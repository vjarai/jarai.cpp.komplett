// 3_class_template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>




template <typename T> class Schiffscontainer
{
private:
    T Inhalt;
    
public:
    void beladen(T neuerInahlt)
    {
        Inhalt = neuerInahlt;
    }

    T entladen()
    {
        return Inhalt;
    }

};



int main()
{
    Schiffscontainer<int> meinContainer;

    meinContainer.beladen(10);
    int x = meinContainer.entladen();
    std::cout << x;

}