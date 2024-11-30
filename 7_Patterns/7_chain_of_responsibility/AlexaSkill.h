#pragma once
#include <iostream>
#include <string>

using namespace std;

class AlexaSkill
{
private:

public:
	virtual void ausfuehren();
	virtual bool kannAusfuehren(string& anfrage);
};

