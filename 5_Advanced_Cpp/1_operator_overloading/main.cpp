#include <iostream>
using namespace std;

#include "Bruch.h"

int main()
{
	Bruch x, y, z;

	cout << "x eingeben:" << endl;
	cin >> x;

	cout << "y eingeben:" << endl;
	cin >> y;

	z = x + y; 	// Abkürzung für: z = x.operator+(y);
	cout << x << " + " << y << " = " << z << endl;

	z = x - y;
	cout << x << " - " << y << " = " << z << endl;

	z = x * y;	// Abkürzung für: z = operator*(x, y);
	cout << x << " * " << y << " = " << z << endl;

	z = x / y;
	cout << x << " / " << y << " = " << z << endl;

	// Typconversion int => Bruch via Bruch Konstruktor
	z = x + /* static_cast<Bruch> */ (1);  
	cout << x << " + 1 = " << z << endl;

	// Typconversion Bruch => double via operator double
	double a = static_cast<double>(z);
	cout << " double a = " << a << endl;

	cout << endl;
}
