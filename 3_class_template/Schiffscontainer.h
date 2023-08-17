#pragma once


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
