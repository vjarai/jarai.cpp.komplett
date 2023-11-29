#include "Motor.h"
#include <iostream>
using namespace std;


Motor::Motor()
{
	drehzahl_ = 0;
	cout << "Motor wurde produziert!" << endl;
}

Motor::~Motor()
{
	if (drehzahl_ > 0)
		abstellen();

	cout << "Motor wurde verschrottet!" << endl;
}

void Motor::anlassen()
{
	if (drehzahl_ > 0)
	{
		cout << "Knirsch, Motor laeuft schon mit ";
		cout << drehzahl_;
		cout << " U/min";
		cout << endl;
	}
	else
	{
		drehzahl_ = 1000;
		cout << "Motor wurde angelassen mit ";
		cout << drehzahl_;
		cout << " U/min";
		cout << endl;
	}
}

void Motor::anzeigen()
{
	cout << "Motor Drehzahl:" << drehzahl_ << endl;
}

void Motor::abstellen()
{
	drehzahl_ = 0;
	cout << "Motor wurde abgestellt!" << endl;
}
