#include "Alexa.h"
#include "AlexaSkill.h"

#include "DatumSkill.h"
#include "UhrzeitSkill.h"
#include "WetterSkill.h"
#include "LichtSkill.h"

Alexa::Alexa()
{
	
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
		if (skill->canHandleRequest(request)) 
		{
			skill->handleRequest(request);
			return;
		}
	}

	cout << "Alexa: Sorry, I can't help with that." << endl;
}


