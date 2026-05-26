#include <iostream>
#include <string>

double add(double a, double b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double firstNumber;
    double secondNumber;
    std::string operation;

    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    if (operation == "+") {
        std::cout << "Result: " << add(firstNumber, secondNumber) << std::endl;
    } else if (operation == "-") {
        std::cout << "Result: " << subtract(firstNumber, secondNumber) << std::endl;
    } else if (operation == "*") {
        std::cout << "Result: " << multiply(firstNumber, secondNumber) << std::endl;
    } else if (operation == "/") {
        std::cout << "Result: " << divide(firstNumber, secondNumber) << std::endl;
    } else {
        std::cout << "Unknown operation" << std::endl;
    }

    return 0;
}
