#ifndef SCHIFF_H
#define SCHIFF_H

#include <iostream>


class Schiff
{
public:
	Schiff(const std::string& Bezeichnung);
	virtual ~Schiff() =0;
	virtual void schwimmen(void) { std::cout << "Ein Schiff schwimmt!" << std::endl; }

private:
	int Tonage;
	const std::string Bezeichnung;
};

#endif // SCHIFF_H
