#include <iostream>

#include "IndexCheckingArray.h"

using namespace std;

int main()
{
	IndexCheckingArray<int> my_array(10);

	my_array[5] = 999;

	for (const auto item : my_array)
	{
		std::cout << item << std::endl;
	}

	try
	{
		my_array[100] = 0;
	}
	catch (exception& ex)
	{
		std::cout << ex.what() << endl;
	}

}
