#include <iostream>
#include "calculator.h"
using namespace std; 
int main() {
    Calculator calc;
    int num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << calc.divide(num1, num2) << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
