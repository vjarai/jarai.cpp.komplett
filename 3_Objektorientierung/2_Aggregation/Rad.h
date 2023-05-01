#if !defined(RAD_H)
#define RAD_H


class Rad
{
public:
	void aufpumpen();
	Rad();
	virtual ~Rad();

private:
	int luftdruck_;
	int profiltiefe_;
};

#endif
