# Debugging Notes

## Project Purpose

This small case study demonstrates how AI tools can support the software development process without replacing the developer's own understanding.

The original program is a simple C++ calculator. It contains several intentional issues that are common in beginner-level software projects.

The goal was to review the code, identify problems, improve reliability and document the debugging process clearly.

## Original Issues

### 1. Incorrect addition logic

In the original version, the add function returned subtraction instead of addition.

Original behavior:

add(10, 5) returned 5

Expected behavior:

add(10, 5) should return 15

Fix:

The return statement was changed from a - b to a + b.

### 2. Division by zero was not handled

The original divide function directly returned a / b without checking whether b was zero.

Problem:

Division by zero can cause incorrect behavior or runtime issues.

Fix:

The improved version uses a boolean function that returns false if the second number is zero.

### 3. Unsupported operations were handled too late

The original program allowed the user to enter any operation and only checked it at the end.

Fix:

The improved version validates the operation before asking for the second number.

### 4. Invalid number input was not checked

The original program did not verify whether the user actually entered valid numbers.

Fix:

The improved version checks input using std::cin and stops the program with a clear message if the input is invalid.

## How AI Tools Were Used

AI tools can be useful for:

- Reviewing code structure
- Finding possible edge cases
- Explaining why a bug happens
- Suggesting safer control flow
- Helping create test cases
- Improving documentation

In this project, AI assistance was used as a support tool for analysis and documentation. The final code still required human review, manual understanding and decision-making.

## Developer Reflection

This project helped me practice reading code critically instead of only writing new code. Debugging is not only about fixing syntax errors. It also requires thinking about edge cases, user input, program flow and how the application behaves when something goes wrong.

The main lesson is that AI tools are most useful when the developer can ask precise questions, verify the output and understand the final solution.
