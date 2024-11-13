#pragma once
#include <string>

#include "AppleLadegeraet.h"

class UsbLadegeraet;

class IPhone
{
public:
	IPhone();
	void aufladen(AppleLadegeraet& ladegeraet);
	
};

