#include "WetterSkill.h"


void WetterSkill::handleRequest(const string& request)
{
	cout << "Das Wetter ist gut!" << endl;
}

bool WetterSkill::canHandleRequest(const string& anfrage)
{
	if (anfrage.find("Wetter") != std::string::npos) {
		return true;
	}
	else {
		return false;
	}
}
