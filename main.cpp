#include <iostream>
#include "calculator.h"
#include "temperature.h" // Include the temperature header

using namespace std;

int main() {
    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Use Calculator" << endl;
    cout << "2. Use Temperature Converter" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        Calculator calc;
        int num1, num2;
        char operation;

        cout << "\nCalculator Mode:" << endl;
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
    } else if (choice == 2) {
        TemperatureConverter tempConverter;
        int tempChoice;
        double temperature;

        cout << "\nTemperature Converter Mode:" << endl;
        cout << "Choose conversion:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> tempChoice;

        if (tempChoice == 1) {
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Fahrenheit: " << tempConverter.celsiusToFahrenheit(temperature) << endl;
        } else if (tempChoice == 2) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << "Celsius: " << tempConverter.fahrenheitToCelsius(temperature) << endl;
        } else {
            cout << "Invalid temperature conversion choice!" << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}