#ifndef PRINT_H
#define PRINT_H

#include <string>

class PrintFunctor
{
public:
	PrintFunctor(const std::string& header);
	void operator()(int item);

private:
	std::string header;
	int line;
};

#endif // PRINT_H
