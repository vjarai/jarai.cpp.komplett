
#include <iostream>

class Person
{
public:

	std::shared_ptr<Person> _partner;

	//std::weak_ptr<Person> _partner;

	Person()
	{
		std::cout << "Person geboren" << std::endl;
	}

	~Person()
	{
		std::cout << "Person gestorben" << std::endl;
	}

	void heiraten(std::shared_ptr<Person> neuerPartner)
	{
		this->_partner = neuerPartner;
		neuerPartner->_partner = std::shared_ptr<Person>(this);
	}
};

int main()
{
	auto person1 = std::make_shared<Person>();
	auto person2 = std::make_shared<Person>();

	person1->_partner = person2;
	person2->_partner = person1;
}

