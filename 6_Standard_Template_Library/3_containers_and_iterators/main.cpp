#include <array>
#include <vector>
#include <map>
#include <iostream>
#include <list>
#include <set>

void array_example()
{
	// Best Practice: Generell das array Template statt old style C arrays verwenden!
	std::array<int, 5> my_array = { 1, 2, 3, 4 };

	std::cout << my_array[0] << std::endl;

	for (int item : my_array)
	{
		std::cout << item << std::endl;
	}
}


void vector_example()
{
	std::vector<int> my_vector = { 1, 2, 3, 4 };

	// Vorteil: random access (operator[]) 
	std::cout << my_vector[0] << std::endl;

	// Vorteil: in der größe veränderlich, wenn auch ineffizient
	my_vector.push_back(5);

	// Ein iterator ist die Abstraktion eines Pointers
	// und kann dereferenziert, inkrementiert und verglichen werden
	std::vector<int>::iterator it = my_vector.begin(); // innere Klasse von vector

	// Variante 1: while Schleife
	while (it < my_vector.end())
	{
		std::cout << *it << std::endl;	// iterator dereferenzieren
		++it;							// iterator inkrementieren
	}

	// Variante 2 (besser): for schleife
	for (auto it = my_vector.begin(); it < my_vector.end(); ++it)
		std::cout << *it << std::endl;

	// Variante 3 (am Besten): for_each schleife
	for (int item : my_vector)
	{
		std::cout << item << std::endl;
	}
}

void map_example()
{
	std::map<std::string, std::string> my_map = 
	{
		{"eins", "one"},
		{"zwei", "two"},
	};

	my_map["drei"] = "three";

	for (auto item : my_map)
	{
		std::cout << item.first << ":" << item.second << std::endl;
	}
}

int main()
{
	//array_example();

	//vector_example();

	map_example();

	// weitere container Templates
	std::list<int> my_list;			// verkettete Liste
	std::set<int> my_set;			// Baum

	std::multiset<int> my_multiset;	// Baum mit duplikaten
	std::multimap<std::string, int> my_multimap; // Dictionary mit duplikaten
}

