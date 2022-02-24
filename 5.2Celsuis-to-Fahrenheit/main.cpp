#include <iostream>
#include <sstream>
#include <string>

#include "CelsiusToFahrenheit.hpp"

double GetInputInCelsiusDegrees()
{
    std::cout << "Enter value in Celsius degrees to be converted to Fahrenheit: ";
    double celsius_degrees { -271.0 };
    std::string input_line;
    std::getline(std::cin, input_line);
    std::istringstream stream(input_line);
    if (!(stream >> celsius_degrees)) {
        throw std::invalid_argument { "erroneous input!" };
    }

    return celsius_degrees;
}

int main()
{
    try {
        double celsius_deg = GetInputInCelsiusDegrees();
        std::cout << celsius_deg
                  << " degrees Celsius is "
                  << CelsiusToFahrenheit(celsius_deg)
                  << " degrees Fahrenheit"
                  << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
