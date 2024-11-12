#pragma once
#include <string>

#include "AppleLadegeraet.h"

class IPhone
{
public:
	explicit IPhone(std::string text);
	void aufladen(AppleLadegeraet& ladegeraet);
	std::string text_;
};

