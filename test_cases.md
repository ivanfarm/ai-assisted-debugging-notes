# Test Cases

## Purpose

This file describes manual test cases for the improved calculator program.

The goal is to check normal calculations, invalid operations, invalid input and division by zero.

## Test Case 1: Addition

Input:

First number: 10  
Operation: +  
Second number: 5  

Expected output:

Result: 15

Status:

Passed

## Test Case 2: Subtraction

Input:

First number: 10  
Operation: -  
Second number: 5  

Expected output:

Result: 5

Status:

Passed

## Test Case 3: Multiplication

Input:

First number: 4  
Operation: *  
Second number: 3  

Expected output:

Result: 12

Status:

Passed

## Test Case 4: Division

Input:

First number: 20  
Operation: /  
Second number: 4  

Expected output:

Result: 5

Status:

Passed

## Test Case 5: Division by Zero

Input:

First number: 10  
Operation: /  
Second number: 0  

Expected output:

Error: division by zero is not allowed.

Status:

Passed

## Test Case 6: Unsupported Operation

Input:

First number: 10  
Operation: %  

Expected output:

Unsupported operation. Please use +, -, * or /.

Status:

Passed

## Test Case 7: Invalid First Number

Input:

First number: abc  

Expected output:

Invalid input. Please enter a valid number.

Status:

Passed

## Test Case 8: Invalid Second Number

Input:

First number: 10  
Operation: +  
Second number: abc  

Expected output:

Invalid input. Please enter a valid number.

Status:

Passed

## Summary

The improved version handles both normal use cases and common error cases more safely than the original version.
