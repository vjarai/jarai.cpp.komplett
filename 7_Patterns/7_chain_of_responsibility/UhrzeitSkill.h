#pragma once
#include "AlexaSkill.h"

class UhrzeitSkill : public AlexaSkill
{
public:
	void ausfuehren() override;
	bool kannAusfuehren(string& anfrage) override;
};

