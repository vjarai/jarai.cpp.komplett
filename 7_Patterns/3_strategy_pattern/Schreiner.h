#pragma once
#include "Arbeiter.h"

class Schreiner : public Arbeiter
{
public:
	void arbeiten() override;
	Schreiner(const std::string& name);
	~Schreiner() override;
};

