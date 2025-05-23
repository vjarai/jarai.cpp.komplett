#pragma once
#include <iostream>
#include <string>

using namespace std;

class AlexaSkill
{
private:

public:
	virtual void handleRequest(const string& request);
	virtual bool canHandleRequest(const string& request);
};

