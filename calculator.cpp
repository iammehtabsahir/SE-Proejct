#include "calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

double Calculator::divide(int a, int b) {
    if (b == 0) {
        // Handle division by zero appropriately (e.g., throw an exception, return a special value)
        return 0.0; // Returning 0.0 for simplicity
    }
    return static_cast<double>(a) / b;
}
