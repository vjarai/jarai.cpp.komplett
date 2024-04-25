#include "MotorSegelSchiff.h"

MotorSegelSchiff::MotorSegelSchiff(const std::string& Bezeichnung, const int Segelflaeche, const int PS)
	: Schiff(Bezeichnung)
	  , Motorschiff(Bezeichnung, PS)
	  , Segelschiff(Bezeichnung, Segelflaeche)
{
}

MotorSegelSchiff::~MotorSegelSchiff()
= default;
