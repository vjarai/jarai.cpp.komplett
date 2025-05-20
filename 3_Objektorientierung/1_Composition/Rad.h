#if !defined(RAD_H)
#define RAD_H
#include <string>


class Rad
{
public:
	void anzeigen() const;
	Rad();
	explicit Rad(const std::string & position);
	virtual ~Rad();

private:
	int luftdruck_;
	int profiltiefe_;
	std::string position_;
};

#endif
