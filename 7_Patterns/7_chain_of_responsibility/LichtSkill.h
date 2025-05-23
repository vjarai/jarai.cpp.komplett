#pragma once
#include "AlexaSkill.h"

class LichtSkill : public AlexaSkill
{
private:
	bool _licht;
public:
	LichtSkill();
	void handleRequest(const string& request) override;
	bool canHandleRequest(const string& anfrage) override;
};

