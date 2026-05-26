#include <iostream>
#include <string>
#include <limits>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

bool divide(double a, double b, double& result) {
    if (b == 0) {
        return false;
    }

    result = a / b;
    return true;
}

bool isSupportedOperation(const std::string& operation) {
    return operation == "+" || operation == "-" || operation == "*" || operation == "/";
}

int main() {
    double firstNumber;
    double secondNumber;
    std::string operation;

    std::cout << "Simple Calculator" << std::endl;

    std::cout << "Enter first number: ";
    if (!(std::cin >> firstNumber)) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return 1;
    }

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    if (!isSupportedOperation(operation)) {
        std::cout << "Unsupported operation. Please use +, -, * or /." << std::endl;
        return 1;
    }

    std::cout << "Enter second number: ";
    if (!(std::cin >> secondNumber)) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return 1;
    }

    if (operation == "+") {
        std::cout << "Result: " << add(firstNumber, secondNumber) << std::endl;
    } else if (operation == "-") {
        std::cout << "Result: " << subtract(firstNumber, secondNumber) << std::endl;
    } else if (operation == "*") {
        std::cout << "Result: " << multiply(firstNumber, secondNumber) << std::endl;
    } else if (operation == "/") {
        double result = 0;

        if (!divide(firstNumber, secondNumber, result)) {
            std::cout << "Error: division by zero is not allowed." << std::endl;
            return 1;
        }

        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
