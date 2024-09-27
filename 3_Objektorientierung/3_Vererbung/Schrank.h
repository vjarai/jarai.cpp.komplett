#if !defined(SCHRANK_H)
#define SCHRANK_H		

#include "Moebel.h"

class Schrank : public Moebel // Schrank IST Moebel (Vererbung)
{
public:
	void montieren() override;
	void benutzen() override;

	Schrank();
	~Schrank() override;
};

#endif // !defined(SCHRANK_H)
