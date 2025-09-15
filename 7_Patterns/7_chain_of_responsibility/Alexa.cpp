#include "Alexa.h"
#include "AlexaSkill.h"

Alexa::Alexa()
{
	
}

Alexa::~Alexa()
{
	
}

void Alexa::addSkill(shared_ptr<AlexaSkill> skill)
{
	skills.push_back(std::ref(skill));
}

void Alexa::handleRequest(const string & request)
{

	for (auto& skill : skills) {
		if (skill->canHandleRequest(request)) 
		{
			skill->handleRequest(request);
			return;
		}
	}

	cout << "Alexa: Sorry, I can't help with that." << endl;
}


