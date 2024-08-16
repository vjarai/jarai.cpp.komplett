
#include <iostream>
#include <regex>

int main()
{
    std::string subject("This is a test");

    try {
        std::regex regex("\\w+");
        std::sregex_iterator iterator(subject.begin(), subject.end(), regex);
        std::sregex_iterator end;

        while (iterator != end) {
            std::smatch match = *iterator;
            std::cout << match.str() << "\n";
            ++iterator;
        }
    }
    catch (std::regex_error& e) // Syntax error in the regular expression
    {
        std::cout << e.what();
    }
}

