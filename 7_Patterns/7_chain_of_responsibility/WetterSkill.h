#pragma once
#include "AlexaSkill.h"

class WetterSkill : public AlexaSkill
{
public:
	void ausfuehren() override;
	bool kannAusfuehren(string& anfrage) override;
};

