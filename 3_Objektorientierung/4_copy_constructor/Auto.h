#ifndef AUTO_H
#define AUTO_H

#include "Motor.h"
#include <iostream>
#include <string>

class Auto
{
public:
    Auto(const std::string& marke, int ps);
    Auto(const Auto& original);

    virtual ~Auto();

    void anzeigen() const;
    Auto& operator=(const Auto& original);

    std::string marke_;
    Motor* p_motor_;
};

#endif // AUTO_H
