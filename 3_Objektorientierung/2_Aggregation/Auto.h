#if !defined(AUTO_H)
#define AUTO_H

#include <string>

#include "Motor.h"
#include "Rad.h"


class Auto
{
public:
	void tanken();
	void fahren();

	Auto();
	virtual ~Auto();

private:
	Rad raeder_[4];
	Motor motor_;
	int ps_;
	double tankinhalt_;
	double tachostand_;
	std::string farbe_;
	std::string marke_;
};

#endif
