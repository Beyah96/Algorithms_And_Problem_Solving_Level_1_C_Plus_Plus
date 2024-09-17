# Problem 47 : Calculate Number of Months to Repay a Loan

## Description
This C++ program calculates the number of months required to repay a loan based on the total loan amount 
and the monthly payment. The user is prompted to input the loan amount and the monthly payment, and the program 
computes how many months it will take to repay the loan, rounding up to the nearest month if necessary. The program 
includes the following functions:
- `ReadValue` to get user input for loan amount and monthly payment,
- `CalculateNumberOfMonths` to calculate the number of months needed to repay the loan,
- `PrintNumberOfMonths` to display the calculated number of months.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for the `ceil()` function used to round up the number of months.
- **Function `ReadValue`**: Prompts the user for input, displays the provided message, and returns the input value as a float.
- **Function `CalculateNumberOfMonths`**: Divides the loan amount by the monthly payment to compute how many months it will take to repay the loan.
- **Function `PrintNumberOfMonths`**: Uses the `ceil()` function to round up the calculated number of months and prints the result.
- **Function `main`**: Manages the program flow by reading the loan amount and monthly payment from the user, calculating the number of months required to repay the loan, and printing the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem47 problem47.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem47
   ```
The program will prompt you to enter your `loan amount` and your `monthly payment`, then display `how many months` it will take to repay the loan

## Example
If you enter `10000` for the loan amount and `500` for the monthly payment, the program will output:
```
20 Months
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

