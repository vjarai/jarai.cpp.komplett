#pragma once
#include <iostream>
#include <ostream>
#include <string>

class Bauteil
{
protected:

	std::string name_;
	double preis_;

public:

		Bauteil(const std::string& name, double preis);
		virtual ~Bauteil();

		std::string getName();
		virtual double getPreis();
		virtual void anzeigen();

};
