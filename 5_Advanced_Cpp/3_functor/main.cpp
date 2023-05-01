
#include <iostream>
#include <list>
#include <algorithm>

#include "PrintFunctor.h"
#include "FilterFunctor.h"

using std::cout;


int printFunc(int item)
{
	cout << item << std::endl;
	return 0;
}

bool filterPredicate(int item)
{
	return item == 5;
}


int main(int argc, char* argv[])
{
	std::list<int> myList;

	for (int i = 0; i < 10; ++i)
		myList.push_back(i);

	cout << "*********** Mit Funktionszeigern ***********" << std::endl;

	// Ausgabe mittels Functionszeiger
	for_each(myList.begin(), myList.end(), printFunc);

	// Filter mittels Functionszeiger
	auto found = find_if(myList.begin(), myList.end(), filterPredicate);
	cout << "Gefunden:" << *found << std::endl;

	cout << "*********** Mit Functoren ******************" << std::endl;

	// Ausgabe mittels Functor
	for_each(myList.begin(), myList.end(), PrintFunctor("Zeile_"));

	// Filter mittels Functor
	found = find_if(myList.begin(), myList.end(), FilterFunctor(5));
	cout << "Gefunden:" << *found << std::endl;

}
