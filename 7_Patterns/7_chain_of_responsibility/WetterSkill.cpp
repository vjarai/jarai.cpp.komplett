#include "WetterSkill.h"


void WetterSkill::ausfuehren()
{
	cout << "Das Wetter ist gut!" << endl;
}

bool WetterSkill::kannAusfuehren(string& anfrage)
{
	if (anfrage.find("Wetter") != std::string::npos) {
		return true;
	}
	else {
		return false;
	}
}
