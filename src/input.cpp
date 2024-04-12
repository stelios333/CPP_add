#include <iostream>

int getUserInput(std::string prompt) {
    std::cout << prompt;
    int num {};
    std::cin >> num;
    return num;
}