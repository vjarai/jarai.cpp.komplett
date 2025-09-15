#pragma once
#include <iostream>
#include <vector>

#include "AlexaSkill.h"

using namespace std;

class Alexa
{
private:
	vector<shared_ptr< AlexaSkill>> skills;

public:
	Alexa();
	~Alexa();
	void handleRequest(const string & request);
	void addSkill(shared_ptr<AlexaSkill> skill);
};

