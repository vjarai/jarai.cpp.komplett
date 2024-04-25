#include "MotorSegelSchiff.h"

int main()
{
	Motorschiff motor_schiff("Titanic", 800);
	Segelschiff segel_schiff("Seelenverkaeufer", 200);
	MotorSegelSchiff motor_segel_schiff("Nostalgie", 300, 200);

	std::cout << "Schwimm Motor\t";
	motor_schiff.schwimmen();
	std::cout << std::endl;

	std::cout << "Schwimm Segel\t";
	segel_schiff.schwimmen();
	std::cout << std::endl;

	std::cout << "Schwimm SegelMotor\t";
	motor_segel_schiff.schwimmen();
	std::cout << std::endl;

	std::cout << std::endl << "-------------------------------------" << std::endl;

	Schiff* pSchiff = &motor_segel_schiff;
	Motorschiff* pMSchiff = &motor_segel_schiff;
	Segelschiff* pSSchiff = &motor_segel_schiff;
	MotorSegelSchiff* pMSSchiff = &motor_segel_schiff;

	std::cout << "Schiff:" << pSchiff << std::endl;
	std::cout << "MotorSchiff:" << pMSchiff << std::endl;
	std::cout << "SegelSchiff:" << pSSchiff << std::endl;
	std::cout << "MotorSegelSchiff:" << pMSSchiff << std::endl;

	pSchiff->schwimmen();
	pMSchiff->schwimmen();
	pSSchiff->schwimmen();
	pMSSchiff->schwimmen();
}
