#include "UhrzeitSkill.h"


void UhrzeitSkill::handleRequest(const string& request)
{
	cout << "Es ist 10:41!" << endl;
}

bool UhrzeitSkill::canHandleRequest(const string& anfrage)
{
	if (anfrage.find("Uhrzeit") != std::string::npos) {
		return true;
	}
	else {
		return false;
	}
}
