#pragma once
#include <iostream>
#include <memory>
#include <vector>

#include "Arbeiter.h"

class Firma
{
private:
	std::vector<std::shared_ptr<Arbeiter>> mitarbeiter;

public:
	Firma()
	{
		std::cout << "Firma erstellt." << std::endl;
	}

	~Firma()
	{
		std::cout << "Firma liqudiert." << std::endl;
	}

	void einstellen(const std::shared_ptr<Arbeiter>& neuer_mitarbeiter)
	{
		mitarbeiter.push_back(neuer_mitarbeiter);
	}

	void produzieren()
	{
		std::cout << "Firma produziert." << std::endl;

		for (const auto &arbeiter : mitarbeiter)
		{
			arbeiter->arbeiten();
		}
	}
};

