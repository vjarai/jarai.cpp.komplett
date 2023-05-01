
#include <iostream>
#include <regex>

int main()
{
    std::string subject("This is a test");

    try {
        std::regex re("\\w+");
        std::sregex_iterator next(subject.begin(), subject.end(), re);
        std::sregex_iterator end;

        while (next != end) {
            std::smatch match = *next;
            std::cout << match.str() << "\n";
            ++next;
        }
    }
    catch (std::regex_error& e) // Syntax error in the regular expression
    {
        std::cout << e.what();
    }
}

