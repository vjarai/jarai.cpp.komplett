#include <iostream>

int main()
{

	int variable1 = 100;
	int variable2 = 200;
	constexpr int constante1 = 300;

	// "normaler" Zeiger ( kann verbogen werden und das Ziel ändern)
	int* simple_ptr = &variable1;	// "Variabler" Zeiger auf Variable a
	*simple_ptr = 101;				// ok: Variable via pointer aendern
	simple_ptr = &variable2;		// ok: Pointer verbiegen

	// Zeiger auf constante (kann das Ziel nicht ändern)
	const int* ptr_to_const = &constante1;
	// *ptr_to_const = 301;  // geht nicht, da Ziel const!

	// Constanter Zeiger (kann nicht verbogen werden)
	int* const const_ptr = &variable1;
	// const_ptr = &b;		// geht nicht, da Zeiger constant

	// Constanter Zeiger auf constante (kann weder verbogen werden noch das Ziel ändern)
	const int* const const_ptr_to_const  = &constante1;
	// *const_ptr_to_const = 301;   // geht nicht, da Ziel const!
	// const_ptr_to_const = &b;		// geht nicht, da Zeiger constant

	// In C++ ist alles möglich...auch das "wegcasten" von const
	// Das ergebnis ist undefiniert :-(
	simple_ptr = const_cast<int*>(ptr_to_const);
	*simple_ptr = 999;
}

