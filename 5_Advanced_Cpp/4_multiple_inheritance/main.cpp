#include "MotorSegelSchiff.h"

int main()
{
	Motorschiff motor_schiff("Titanic", 800);
	Segelschiff segel_schiff("Seelenverkaeufer", 200);
	MotorSegelSchiff motor_segel_schiff("Nostalgie", 300, 200);

	cout << "Schwimm Motor\t";
	motor_schiff.schwimmen();
	cout << endl;

	cout << "Schwimm Segel\t";
	segel_schiff.schwimmen();
	cout << endl;

	cout << "Schwimm SegelMotor\t";
	motor_segel_schiff.schwimmen();
	cout << endl;

	cout << endl << "-------------------------------------" << endl;

	Schiff* pSchiff = &motor_segel_schiff;
	Motorschiff* pMSchiff = &motor_segel_schiff;
	Segelschiff* pSSchiff = &motor_segel_schiff;
	MotorSegelSchiff* pMSSchiff = &motor_segel_schiff;

	cout << "Schiff:" << pSchiff << endl;
	cout << "MotorSchiff:" << pMSchiff << endl;
	cout << "SegelSchiff:" << pSSchiff << endl;
	cout << "MotorSegelSchiff:" << pMSSchiff << endl;

	pSchiff->schwimmen();
	pMSchiff->schwimmen();
	pSSchiff->schwimmen();
	pMSSchiff->schwimmen();
}
