#if !defined(IKEA_H)
#define IKEA_H		

#include "Moebel.h"


class Ikea
{
public:
	Moebel* verkaufen();
	Ikea(const std::string& standort);
	virtual ~Ikea();

protected:
	double umsatz_;
	std::string standort_;
};

#endif // !defined(IKEA_H)	
