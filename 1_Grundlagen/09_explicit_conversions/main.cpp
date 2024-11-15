#include <iostream>
class Auto;
using namespace std;

/*
 * Aufgabe: Explizite Typkonversion (cast)
 */


void c_style_cast_example()
{
	int anzahl_kuchen = 1;
	int anzahl_personen = 2;

	// Bad smell: veralteter c-style cast (vergleiche mit static_cast_example)
	const double kuchen_pro_person = ((double)anzahl_kuchen) / anzahl_personen;


}

void static_cast_example()
{
	int anzahl_kuchen = 1;
	int anzahl_personen = 2;

	// explicite Typkonversion, da sonst integer division
	const double kuchen_pro_person = static_cast<double>(anzahl_kuchen) / anzahl_personen;

	cout << "Es gibt : " << kuchen_pro_person << " Kuchen fuer jeden " << anzahl_personen << " Gaeste." << endl;
}


void const_cast_example()
{
	int i = 0;				// Variable i

	const int& ref = i;		// Referenz auf constantes i
	const int* ptr = &i;	// Pointer auf constantes i

	const_cast<int&>(ref) = 3;	// const_cast entfernt const von ref
	*const_cast<int*>(ptr) = 3; // const_cast entfernt const von ptr
}




void reinterpret_cast_example()
{
	int i = 5;
	int* ptr = &i;

	double* ptr2 = reinterpret_cast<double*>(ptr);

	// reinterpret_cast erlaubt auch Typkonversionen, die normalerweise erlaubt sind
	// z.B. von int nach int*
	int* ptr3 = reinterpret_cast<int*>(i);

	// reinterpret_cast erlaubt auch Typkonversionen, die normalerweise erlaubt sind
	// z.B. von int* nach int
	int i2 = reinterpret_cast<int>(ptr);

	// reinterpret_cast erlaubt auch Typkonversionen, die normalerweise erlaubt sind
	// z.B. von int* nach int&
	int& ref = reinterpret_cast<int&>(ptr);

	// reinterpret_cast erlaubt auch Typkonversionen, die normalerweise erlaubt sind
	// z.B. von int& nach int*
	int* ptr4 = reinterpret_cast<int*>(&ref);

	// reinterpret_cast erlaubt auch Typkonversionen, die normalerweise erlaubt sind
	// z.B. von int nach int&
	int& ref2 = reinterpret_cast<int&>(i);

	// reinterpret_cast erlaubt auch Typkonversionen, die normalerweise erlaubt sind
	// z.B. von int nach int*
	int* ptr5 = reinterpret_cast<int*>(&i);

}


class Kfz
{
	virtual void fahren() {}
};

class Pkw : public Kfz
{
public:
	void einsteigen() { cout << "einsteigen()"; }
};

void dynamic_cast_example()
{
	Pkw pkw;
	Kfz* ptr_kfz = &pkw;

	// Pr�ft , ob pKfz ein Pkw ist
	auto ptr_pkw = dynamic_cast <Pkw*>(ptr_kfz);

	if (ptr_pkw == nullptr)
	{
		throw exception("Das Kfz ist kein Pkw!");
	}

	ptr_pkw->einsteigen();

}

int main()
{
	//static_cast_example();
	//const_cast_example();
	dynamic_cast_example();
	//reinterpret_cast_example();
}
