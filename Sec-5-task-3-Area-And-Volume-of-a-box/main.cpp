#include <iostream>
#include <sstream>
#include <string>

#include "box-calcs.hpp"

void Prompt(const std::string& message)
{
    std::cout << message;
}

double GetDimmension()
{
    std::string line;
    std::getline(std::cin, line);
    double dimmension {};
    std::istringstream stream(line);
    if (!(stream >> dimmension)) {
        throw std::invalid_argument { "Erroneus input!" };
    }

    return dimmension;
}
int main()
{
    try {
        std::cout << "Welcome to box calculator. "
                  << "Please type in width, length and height information:\n";
        Prompt("width: ");
        double width {};
        width = GetDimmension();
        Prompt("length: ");
        double length {};
        length = GetDimmension();
        Prompt("height: ");
        double height {};
        height = GetDimmension();

        std::cout << "The base area is: " << BaseArea(width, length) << '\n'
                  << "The box volume is: " << BoxVolume(width, length, height) << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}