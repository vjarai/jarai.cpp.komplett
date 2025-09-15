#pragma once
#include "AlexaSkill.h"

class DatumSkill : public AlexaSkill
{
public:
	void handleRequest(const string& request) override;
	bool canHandleRequest(const string& anfrage) override;
};

