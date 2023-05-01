#if !defined(MOTOR_H)
#define MOTOR_H

class Motor
{
public:
	void abstellen();
	void anlassen();
	Motor();
	virtual ~Motor();

private:
	int drehzahl_;
};

#endif
