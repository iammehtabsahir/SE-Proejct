#include <iostream>
#include "calculator.h" // Include the header file

int main() {
    Calculator calc;
    int num1 = 10;
    int num2 = 5;

    std::cout << "Addition: " << calc.add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(num1, num2) << std::endl;

    return 0;
}