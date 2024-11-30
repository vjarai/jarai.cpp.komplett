#pragma once
#include "AlexaSkill.h"

class LichtSkill : public AlexaSkill
{
private:
	bool _licht;
public:
	LichtSkill();
	void ausfuehren() override;
	bool kannAusfuehren(string& anfrage) override;
};

