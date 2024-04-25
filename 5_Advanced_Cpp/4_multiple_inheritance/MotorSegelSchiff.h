#ifndef MOTORSEGELSCHIFF_H
#define MOTORSEGELSCHIFF_H


#include "Segelschiff.h"
#include "Motorschiff.h"

class MotorSegelSchiff :
	public Motorschiff,
	public Segelschiff
{
public:
	MotorSegelSchiff(const std::string& Bezeichnung, int Segelflaeche, int PS);
	~MotorSegelSchiff() override;
	void schwimmen() override { Schiff::schwimmen(); } //Bei Kollision muss aufgel�st werden
};

#endif // MOTORSEGELSCHIFF_H
