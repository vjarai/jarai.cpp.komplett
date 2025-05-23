#include "Alexa.h"
#include "AlexaSkill.h"

#include "DatumSkill.h"
#include "UhrzeitSkill.h"
#include "WetterSkill.h"
#include "LichtSkill.h"

Alexa::Alexa()
{
	skills.push_back(new WetterSkill);
	skills.push_back(new UhrzeitSkill);
	skills.push_back(new DatumSkill);
	skills.push_back(new LichtSkill);
}

Alexa::~Alexa()
{
	for (AlexaSkill* skill : skills) {
		delete skill;
	}
}

void Alexa::handleRequest(const string & request)
{

	for (auto skill : skills) {
		if (skill->canHandleRequest(request)) {
			skill->handleRequest(request);
		}
	}
}


