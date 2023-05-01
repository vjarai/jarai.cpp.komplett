#ifndef SCHIFF_H
#define SCHIFF_H

#include <iostream>
using namespace std;


class Schiff
{
public:
	Schiff(string Bezeichnung);
	virtual ~Schiff() =0;
	virtual void schwimmen(void) { cout << "Ein Schiff schwimmt!" << endl; }

private:
	int Tonage;
	const string Bezeichnung;
};

#endif // SCHIFF_H
