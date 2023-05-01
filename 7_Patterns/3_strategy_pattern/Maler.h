#pragma once
#include "Arbeiter.h"

class Maler : public Arbeiter
{
public:
	void arbeiten() override;
	Maler(const std::string& name);
	~Maler() override;
};

