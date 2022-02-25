#include <exception>

constexpr double BaseArea(double width, double length)
{
    if (width < 0.0 || length < 0.0) {
        throw std::invalid_argument("Negative dimmension passed");
    }

    return width * length;
}

constexpr double BoxVolume(double width, double length, double height)
{
    double volume = BaseArea(width, length) * height;
    if (volume < 0) {
        throw std::invalid_argument("Negative dimmension passed!");
    }

    return volume;
}