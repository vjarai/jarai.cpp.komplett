#ifndef BRUCH_H
#define BRUCH_H

#include <iostream>


class Bruch
{
public:

	// Variante1: Operatoren können Memberfunktionen mit einem Parameter sein
	Bruch operator -(const Bruch& rhs) const;
	Bruch operator +(const Bruch& rhs) const;
	//Bruch operator *(const Bruch& rhs) const;
	//Bruch operator /(const Bruch& rhs) const;

	// Variante2: Operatoren können friend Funktionen mit zwei Parametern sein
	friend Bruch operator *(const Bruch& lhs, const Bruch& rhs);
	friend Bruch operator /(const Bruch& lhs, const Bruch& rhs);

	// Ein-/Ausgabeoperatoren werden immer als friend declariert,
	// da die Klassen Istream und ostream nicht geändert werden können
	friend ostream& operator<<(ostream& os, const Bruch& rhs);
	friend istream& operator>>(istream& is, Bruch& rhs);

	// Konvertierungsoperator int => Bruch
    /*explicit*/ Bruch(int zaehler = 0, int nenner = 1);  // default werte für parameter

	// Konvertierungsoperator Bruch => double
	explicit operator double() const;

	static Bruch read_from_console();
	void show() const;

	virtual ~Bruch();

private:
	void kuerzen();
	int nenner_;
	int zaehler_;

	
};

#endif // BRUCH_H
