#include "LichtSkill.h"


LichtSkill::LichtSkill()
{
	_licht = false;
}

void LichtSkill::handleRequest(const string& request)
{
	if (_licht) {
		_licht = !_licht;
		cout << "Licht aus" << endl;

	}
	else if (!_licht) {
		_licht = !_licht;
		cout << "Licht an" << endl;
	}
}

bool LichtSkill::canHandleRequest(const string& anfrage)
{
	if (anfrage.find("Licht") != std::string::npos) {
		return true;
	}
	else {
		return false;
	}
}
