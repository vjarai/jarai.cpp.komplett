#pragma once

#include <string>

class Konto
{
private:
	double kontostand_;
	std::string kontoinhaber_;
	int iban_;
	int pin_ = 1234;
	static int anzahl_konten_;

public:
	void einzahlen(double betrag);
	void abheben(double betrag, int pin);
	void anzeigen() const;
	void ueberweisen(Konto& habenkonto, double betrag, int pin);

	Konto(const std::string& kontoinhaber);
	~Konto();
};
