#include <iostream>
#include "FooBar.h"

using namespace std;

int main()
{
	cout << "Starting Application..." << endl;

	{
		// allocate FooBar memory (new)
		auto my_ptr = make_unique<FooBar>();

		// shorthand for
		// unique_ptr<FooBar> my_ptr(new FooBar());

		// dereference using operator->
		my_ptr->show();

		// dereference using operator*
		(*my_ptr).show();

		// can NOT copy unique_ptr!
		// auto my_ptr2 = my_ptr;


	}	// ~unique_ptr destructor frees FooBar's memory (delete)

	cout << "Terminating Application..." << endl;

} 
