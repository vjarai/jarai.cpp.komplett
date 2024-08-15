
#include <iostream>
#include "template.h"

using namespace std;

int main()
{
	int x = 100, y = 200;
	double a = 200.2, b = 256.654697;

	cout.precision(10);
	cout << maximum(x, y) << endl;
	cout << maximum(b, a) << endl;

	tausche(x, y);
	tausche<double>(a, b);
}
