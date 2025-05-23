#include "WetterSkill.h"


void WetterSkill::handleRequest(const string& request)
{
	cout << "Das Wetter ist gut!" << endl;
}

bool WetterSkill::canHandleRequest(const string& anfrage)
{
	return anfrage.find("Wetter") != std::string::npos;
}
