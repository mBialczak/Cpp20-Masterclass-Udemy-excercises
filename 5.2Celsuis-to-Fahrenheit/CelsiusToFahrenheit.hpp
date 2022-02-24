#pragma once
#include <exception>

inline double CelsiusToFahrenheit(double degrees_celsius)
{
    if (degrees_celsius < -270.0) {
        throw std::invalid_argument("temperature below absolute zero passed");
    }

    return (9.0 / 5.0) * degrees_celsius + 32;
}