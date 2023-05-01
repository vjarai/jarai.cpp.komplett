#include <fstream>
#include <iostream>


void read_file(const std::string& filename, double& value)
{
	std::ifstream ifstream(filename, std::ios::binary | std::ios::_Nocreate);

	if (!ifstream.good())
		throw std::exception("Kann Datei nicht oeffnen.");

	ifstream >> value;
	ifstream.close();
}

void write_file(const std::string& filename, double value)
{
	std::ofstream ofstream;

	ofstream.open(filename, std::ios::binary);

	if (!ofstream.good())
		throw std::exception("Kann Datei nicht oeffnen.");

	ofstream << value << std::endl;
	ofstream.close();

}

int main()
{
	double value = 100;
	std::string filename{ "c:\\temp\\test.dat" };

	write_file(filename, value);

	value = 0;
	read_file(filename, value);
}
