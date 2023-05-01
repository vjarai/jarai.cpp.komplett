

#include "Singleton.h"

int main()
{
	// Creating instance
	Singleton::get_instance().do_some_work();

	// re-using instance
	Singleton::get_instance().do_some_work();

}

