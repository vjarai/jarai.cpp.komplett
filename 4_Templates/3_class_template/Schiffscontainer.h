#pragma once


template <typename T>
// Template-Klasse Schiffscontainer Header Only Template (inline)
class Schiffscontainer
{
private:
    T inhalt_;

public:
    void beladen(T neuerInhalt);

    T entladen();

};


template <typename T>
void Schiffscontainer<T>::beladen(T neuerInhalt)
{
    inhalt_ = neuerInhalt;
}


template <typename T>
T Schiffscontainer<T>::entladen()
{
    return inhalt_;
}


