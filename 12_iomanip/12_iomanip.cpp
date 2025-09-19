
#include <iostream>
#include <iomanip>

int main()
{
    double pi = 3.141592653589793;

    // Default output
    std::cout << "Default: " << pi << '\n';

    // Set precision to 3 digits after decimal
    std::cout << "Precision(3): " << std::fixed << std::setprecision(3) << pi << '\n';

    // Show sign for positive numbers
    std::cout << std::showpos << "Showpos: " << pi << '\n';

    // Right align, width 10, fill with '_'
    std::cout << std::right << std::setw(10) << std::setfill('_') << pi << '\n';

    // Hexadecimal output for integers
    int value = 255;
    std::cout << "Hex: " << std::hex << value << '\n';

    // Reset formatting
    std::cout << std::dec << std::noshowpos << std::setfill(' ') << std::endl;
}

