#include "DatumSkill.h"


void DatumSkill::handleRequest(const string& request)
{
	cout << "Heute ist der 21.11.2024!" << endl;
}

bool DatumSkill::canHandleRequest(const string& anfrage)
{
	if (anfrage.find("Datum") != std::string::npos) {
		return true;
	}
	else {
		return false;
	}
}
