#include <iostream>
#include "calculator.h"
#include "temperature.h"
#include "length.h" // Include the length header

using namespace std;

int main() {
    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Use Calculator" << endl;
    cout << "2. Use Temperature Converter" << endl;
    cout << "3. Use Length Converter" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
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
    } else if (choice == 3) {
        LengthConverter lengthConverter;
        int lengthChoice;
        double length;

        cout << "\nLength Converter Mode:" << endl;
        cout << "Choose conversion:" << endl;
        cout << "1. Meters to Feet" << endl;
        cout << "2. Feet to Meters" << endl;
        cout << "3. Kilometers to Miles" << endl;
        cout << "4. Miles to Kilometers" << endl;
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> lengthChoice;

        if (lengthChoice == 1) {
            cout << "Enter length in Meters: ";
            cin >> length;
            cout << "Feet: " << lengthConverter.metersToFeet(length) << endl;
        } else if (lengthChoice == 2) {
            cout << "Enter length in Feet: ";
            cin >> length;
            cout << "Meters: " << lengthConverter.feetToMeters(length) << endl;
        } else if (lengthChoice == 3) {
            cout << "Enter length in Kilometers: ";
            cin >> length;
            cout << "Miles: " << lengthConverter.kilometersToMiles(length) << endl;
        } else if (lengthChoice == 4) {
            cout << "Enter length in Miles: ";
            cin >> length;
            cout << "Kilometers: " << lengthConverter.milesToKilometers(length) << endl;
        } else {
            cout << "Invalid length conversion choice!" << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
