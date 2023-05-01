#include <iostream>
#include "FooBar.h"

using namespace std;

int main()
{
	cout << "Starting Application..." << endl;

	{
		// allocate FooBar memory (new)
		auto my_ptr = make_shared<FooBar>();

		// shorthand for
		// shared_ptr<FooBar> my_ptr(new FooBar());

		// dereference using operator->
		my_ptr->show();

		// dereference using operator*
		(*my_ptr).show();

		{
			// copy shared_ptr
			shared_ptr<FooBar> my_ptr2(my_ptr);
			my_ptr2->show();

		}

		cout << "Block wurde verlassen." << endl;
	}	// ~unique_ptr destructor frees FooBar's memory (delete)

	cout << "Terminating Application..." << endl;

}
