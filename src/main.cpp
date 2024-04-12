#include <iostream>
#include "input.h"

int main(){
    int user_input = getUserInput("Enter an integer: ");
    int num_to_add = getUserInput("Enter a number to add: ");
    std::cout << "The result is: " << user_input + num_to_add << std::endl;
    return 0;
}