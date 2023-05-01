#if !defined(TISCH_H)
#define TISCH_H			

#include "Moebel.h"

class Tisch : public Moebel
{
public:
	void montieren() override;
	void benutzen() override;
	Tisch();
	~Tisch() override;
};

#endif
