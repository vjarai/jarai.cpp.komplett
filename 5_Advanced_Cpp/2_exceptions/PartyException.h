#ifndef SPRITEXEPTION_H
#define SPRITEXEPTION_H

#include <exception>

class PartyException : public std::exception
{
public:
	explicit PartyException(const char* msg) : exception(msg) { }
};
#endif // SPRITEXEPTION_H
