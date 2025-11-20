#include <iostream>
#include <memory>

#include "FooBar.h"


int main()
{
	std::cout << "Starting Application..." << std::endl;

	{
		// allocate FooBar memory (new)
		 auto my_ptr = std::make_unique<FooBar>();

		// shorthand for
		// unique_ptr<FooBar> my_ptr(new FooBar());

		// dereference using operator->
		my_ptr->show();

		// dereference using operator*
		(*my_ptr).show();

		// can NOT copy unique_ptr!
		// auto my_ptr2 = my_ptr;


	}	// ~unique_ptr destructor frees FooBar's memory (delete)

	std::cout << "Terminating Application..." << std::endl;

} 
