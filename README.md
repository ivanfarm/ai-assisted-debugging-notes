# AI-Assisted Debugging Notes

A small C++ case study showing how AI tools can support code review, debugging, refactoring and test planning.

## Project Overview

This project compares two versions of a simple C++ calculator:

- buggy_calculator.cpp
- improved_calculator.cpp

The first version contains intentional problems. The second version improves correctness, input validation and error handling.

The project is focused on understanding how AI-assisted development can support a developer during debugging and refactoring, while still requiring human review and technical judgement.

## Technologies Used

- C++
- Standard input and output
- Basic functions
- Input validation
- Manual testing
- AI-assisted code review workflow

## Project Structure

ai-assisted-debugging-notes/

- buggy_calculator.cpp
- improved_calculator.cpp
- debugging_notes.md
- test_cases.md
- README.md
- LICENSE
- .gitignore

## What This Project Demonstrates

- Reading and reviewing existing code
- Identifying logical bugs
- Improving input validation
- Handling division by zero
- Refactoring code for better reliability
- Creating manual test cases
- Documenting the debugging process
- Using AI tools responsibly as a software development assistant

## Main Improvements

The improved version includes:

- Correct addition logic
- Safer division handling
- Input validation for numbers
- Validation for unsupported operations
- Clearer error messages
- More structured program flow

## How to Compile

Using g++:

`g++ improved_calculator.cpp -o calculator`

On Windows PowerShell:

`g++ improved_calculator.cpp -o calculator.exe`

## How to Run

On Linux or macOS:

`./calculator`

On Windows PowerShell:

`.\calculator.exe`

## Example Usage

Input:

First number: 10  
Operation: +  
Second number: 5  

Output:

Result: 15

## AI-Assisted Development Workflow

The AI-assisted workflow used in this project can be summarized as:

1. Review the original code.
2. Identify possible logical errors and missing edge cases.
3. Check the most important risks manually.
4. Refactor the code.
5. Create manual test cases.
6. Document the changes and reasoning.

AI tools were used as a support tool for analysis, explanation and documentation. The final code still required human understanding, verification and manual review.

## Files

### buggy_calculator.cpp

Original version with intentional problems.

### improved_calculator.cpp

Improved version with bug fixes, input validation and safer division handling.

### debugging_notes.md

Explanation of the debugging process and the reasoning behind the improvements.

### test_cases.md

Manual test cases for checking the improved program.

## What I Practiced

- C++ basics
- Functions
- Input handling
- Error handling
- Debugging
- Refactoring
- Test planning
- Technical documentation
- AI-assisted software development

## Possible Improvements

- Add automated unit tests
- Add a menu-based interface
- Support more mathematical operations
- Save calculation history to a file
- Add continuous integration with GitHub Actions
