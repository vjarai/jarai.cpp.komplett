
#include <iostream>
#include <regex>

int main()
{
    std::cout << "Bitte email eingeben" << std::endl;
        
    std::string subject;
    std::cin >> subject;
    
    try {
        // Einfache E-Mail-Regex (RFC-konformere Varianten sind komplexer)
        std::regex regex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
        if (std::regex_match(subject, regex)) {
            std::cout << "Super, das ist eine korrekte E-Mail-Adresse!\n";
        }
        else {
            std::cout << "Das ist leider keine korrekte E-Mail-Adresse\n";
        }
    }
    catch (std::regex_error& e)
    {
        std::cout << e.what();
    }
}

