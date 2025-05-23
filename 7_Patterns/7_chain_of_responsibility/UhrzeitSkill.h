#pragma once
#include "AlexaSkill.h"

class UhrzeitSkill : public AlexaSkill
{
public:
	void handleRequest(const string& request) override;
	bool canHandleRequest(const string& anfrage) override;
};

