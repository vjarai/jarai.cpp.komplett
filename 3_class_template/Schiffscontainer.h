#pragma once


template <typename T> class Schiffscontainer
{
private:
    T inhalt_;

public:
    void beladen(T neuerInahlt)
    {
        inhalt_ = neuerInahlt;
    }

    T entladen()
    {
        return inhalt_;
    }

};
