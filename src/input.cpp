#include <iostream>
#include <string>
int getUserInput(string prompt) {
    std::cout << "Enter an integer: ";
    int num {};
    std::cin >> num;
    return num;
}