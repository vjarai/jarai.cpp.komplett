#pragma once
#include <string>

class Arbeiter
{
protected:
	Arbeiter(const std::string& name);
	virtual ~Arbeiter() = default;
	std::string name_;

public:
	virtual void arbeiten() = 0;

};

