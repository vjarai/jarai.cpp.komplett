
#include <iostream>

class Person
{
public:

    std::shared_ptr<Person> _partner;		// Memory Leak, wenn circulare referenz!
    std::weak_ptr<Person> _weak_partner;	// weak_ptr verhindert memory Leak

    Person()
    {
        std::cout << "Person geboren" << std::endl;
    }

    ~Person()
    {
        std::cout << "Person gestorben" << std::endl;
    }

};

int main()
{
    auto person1 = std::make_shared<Person>();
    auto person2 = std::make_shared<Person>();

    // Beide heiraten/kennen sich gegenseitig 
    // cirular reference = > memeory leak = > use weak_ptr!
     person1->_partner = person2;
     person2->_partner = person1;

    // Beide heiraten/kennen sich gegenseitig 
    // cirular reference = > kein memeory leak dank weak_ptr!
    //person2->_weak_partner = person1;
    //person1->_weak_partner = person2;

}

