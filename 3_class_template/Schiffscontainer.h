#pragma once


template <typename T> class Schiffscontainer
{
private:
    T inhalt_;

public:
    void beladen(T neuerInhalt)
    {
        inhalt_ = neuerInhalt;
    }

    T entladen()
    {
        return inhalt_;
    }

};
