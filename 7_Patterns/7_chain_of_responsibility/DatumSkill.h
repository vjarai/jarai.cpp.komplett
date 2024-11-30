#pragma once
#include "AlexaSkill.h"

class DatumSkill : public AlexaSkill
{
public:
	void ausfuehren() override;
	bool kannAusfuehren(string& anfrage) override;
};

