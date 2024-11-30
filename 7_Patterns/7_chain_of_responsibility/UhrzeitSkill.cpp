#include "UhrzeitSkill.h"


void UhrzeitSkill::ausfuehren()
{
	cout << "Es ist 10:41!" << endl;
}

bool UhrzeitSkill::kannAusfuehren(string& anfrage)
{
	if (anfrage.find("Uhrzeit") != std::string::npos) {
		return true;
	}
	else {
		return false;
	}
}
