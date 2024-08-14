#if !defined(IKEA_H)
#define IKEA_H		

#include "Moebel.h"


class Ikea
{
public:
	Moebel* verkaufen();
	Ikea(const std::string& standort);
	void anzeigen();
	virtual ~Ikea();

protected:
	double filial_umsatz_;
	static double konzern_umsatz_; // Klassenvariable, wird von allen Ikea-Objekten geteilt
	std::string standort_;
};

#endif // !defined(IKEA_H)	
