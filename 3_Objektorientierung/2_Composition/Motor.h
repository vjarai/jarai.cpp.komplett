#if !defined(MOTOR_H)
#define MOTOR_H

class Motor
{
public:
	void abstellen();
	void anlassen();
	void anzeigen();
	Motor();
	virtual ~Motor();

private:
	int drehzahl_;
};

#endif
