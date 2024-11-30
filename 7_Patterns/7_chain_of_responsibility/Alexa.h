#pragma once
#include <iostream>
#include <vector>

#include "AlexaSkill.h"

using namespace std;

class Alexa
{
private:
	vector<AlexaSkill*> skills;

public:
	Alexa();
	~Alexa();
	void einlesen();
	//void funktionAusfuehren();
};

