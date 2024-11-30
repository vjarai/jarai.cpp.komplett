#include "LichtSkill.h"


LichtSkill::LichtSkill()
{
	_licht = false;
}

void LichtSkill::ausfuehren()
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

bool LichtSkill::kannAusfuehren(string& anfrage)
{
	if (anfrage.find("Licht") != std::string::npos) {
		return true;
	}
	else {
		return false;
	}
}
