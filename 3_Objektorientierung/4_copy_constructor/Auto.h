#ifndef AUTO_H
#define AUTO_H

#include "Motor.h"
#include <iostream>

class Auto
{
public:
	Auto(const std::string& marke, int ps);
	Auto(const Auto& original);

	virtual ~Auto();

	void show() const;
	Auto& operator=(const Auto& original);

	std::string marke_;
	Motor* pMotor_;
};

#endif // AUTO_H
