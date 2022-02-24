#include <iostream>
#include <string>

int main()
{
    std::cout << "Where do you live? ";
    std::string input;
    std::getline(std::cin, input);
    std::cout << "I've heard great things about "
              << input
              << ". I'd like to go sometime."
              << std::endl;
    return 0;
}