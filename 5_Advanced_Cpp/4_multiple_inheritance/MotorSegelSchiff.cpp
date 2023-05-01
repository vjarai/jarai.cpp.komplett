#include "MotorSegelSchiff.h"

MotorSegelSchiff::MotorSegelSchiff(const string Bezeichnung, const int Segelflaeche, const int PS)
	: Schiff(Bezeichnung)
	  , Motorschiff(Bezeichnung, PS)
	  , Segelschiff(Bezeichnung, Segelflaeche)
{
}

MotorSegelSchiff::~MotorSegelSchiff()
{
}
