# Problem 48 : Calculate Monthly Installment for a Loan

## Description
This C++ program calculates the monthly installment required to repay a loan within a given number of months. 
The user is prompted to input the total loan amount and the number of months they want to use to settle the loan. 
The program computes the monthly payment by dividing the loan amount by the number of months. The program includes the following functions:
- `ReadValue` to get user input for loan amount and the number of months,
- `CalculateMonthlyInstallmentAmount` to calculate the monthly payment,
- `PrintMonthlyInstallmentAmount` to display the calculated monthly installment amount.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` to handle string messages.
- **Function `ReadValue`**: Prompts the user for input, displays the provided message, and returns the input value as a float.
- **Function `CalculateMonthlyInstallmentAmount`**: Divides the loan amount by the number of months to compute the monthly installment amount.
- **Function `PrintMonthlyInstallmentAmount`**: Displays the calculated monthly installment.
- **Function `main`**: Manages the program flow by reading the loan amount and the number of months from the user, calculating the monthly installment, and printing the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem48 problem48.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem48
   ```
The program will prompt you to enter your `loan amount` and `the number of months`, then display the `required monthly installment`.

## Example
If you enter `10000` for the loan amount and `20` months, the program will output:
```
Your monthly installment amount is : 500
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

