#pragma once
#include <string>

using namespace std;

class AlexaSkill
{
private:

public:
	virtual void handleRequest(const string& request) = 0;
	virtual bool canHandleRequest(const string& request) = 0;
};

