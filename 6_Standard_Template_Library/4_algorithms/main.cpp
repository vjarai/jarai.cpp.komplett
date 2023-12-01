
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

// Binary Function for algorithms
int multiply(int x, int y) { return x * y; }

// Unary Predicate: Function mit einem parameter, die ein bool liefert
bool IsOdd(int i) { return ((i % 2) != 0); }

int main()
{
	std::vector<int> daten{ 10, 5, 3, 20, 100, -1, 70 };

	auto sum = std::accumulate(daten.begin(), daten.end(), 0);
	std::cout << "Summe betraegt: " << sum << std::endl;

	auto average = static_cast<double>( std::accumulate(daten.begin(), daten.end(), 0)) / daten.size();
	std::cout << "Mittelwert betraegt: " << average << std::endl;

	auto ptr_maximum = std::max_element(daten.begin(), daten.end());
	std::cout << "Maximum betraegt: " << *ptr_maximum << std::endl;

	// Verwendung eines Predicate als Kriterium
	auto anzahl_ungerade = count_if(daten.begin(), daten.end(), IsOdd);
	std::cout << "Anzahl ungerade betraegt: " << anzahl_ungerade << std::endl;

	auto ptr_first_odd = std::find_if(daten.begin(), daten.end(), IsOdd);
	std::cout << "Erste ungerade: " << *ptr_first_odd << std::endl;

	// Anwendung einer binary function auf den ganzen container
	auto product1 = std::accumulate(daten.begin(), daten.end(), 1, multiply);
	std::cout << "Produkt betraegt: " << product1 << std::endl;

	// Mit anonymer binary function (Lambda)
	auto product2 = std::accumulate(daten.begin(), daten.end(), 1, [](int x, int y) { return x * y; });
	std::cout << "Produkt betraegt: " << product2 << std::endl;


}

