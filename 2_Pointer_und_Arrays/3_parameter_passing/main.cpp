#include <iostream>
using namespace std;

// Funktioniert NICHT (da nur Kopien getauscht werden)
void tausche_by_value(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;
	cout << "in tausche_by_value   a=" << a << "  b=" << b << endl;
}

// veralteter Stil mit Pointern => besser referenzen verwenden (s.u.)
void tausche_by_ref_mit_pointern(int* ptr_x, int* ptr_y)  
{
	auto temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
}

// Parameter werden als Referencen übergeben
void tausche_by_ref_mit_referenzen(int& ref_x, int& ref_y) // & ist hier der REFERENZ Operator
{
	int temp = ref_x;
	ref_x = ref_y;
	ref_y = temp;
}


int main()
{
	int x = 100, y = 200;
	cout << "vor tausche_by_value  x=" << x << "  y=" << y << endl;

	tausche_by_value(x, y);
	cout << "nach tausche_by_value x=" << x << "  y=" << y << endl;

	tausche_by_ref_mit_pointern(&x, &y); // & ist hier der Adress Operator
	cout << "nach tausche_by_ref_mit_pointern x=" << x << "  y=" << y << endl;

	tausche_by_ref_mit_referenzen(x, y);
	cout << "nach tausche_by_ref_mit_referenzen x=" << x << "  y=" << y << endl;

	// Best Practice: Parameter sollten i.d.R. als (const) reference übergeben werden.
}
