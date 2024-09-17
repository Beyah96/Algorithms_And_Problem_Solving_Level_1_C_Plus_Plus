# Problem 40 : Total Bill Calculation with Service Fee and Sales Tax

## Description
This C++ program calculates the total amount of a bill after applying a 10% service fee and a 16% sales tax. The user is prompted to input the initial bill value, and the program computes the final amount after applying both the service fee and the sales tax.

The program includes the following functions:
- `ReadBillValue`: Prompts the user to input the initial bill value.
- `CalculateServicesFee`: Computes the service fee as 10% of the initial bill value.
- `CalculateSalesTax`: Computes the total amount including sales tax, applied on top of the service fee.
- `PrintTotalBill`: Displays the total bill after applying both the service fee and the sales tax.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for message handling.

- **Function `ReadBillValue`**:
  - Prompts the user to enter the bill value.
  - Returns the bill value as a `float`.

- **Function `CalculateServicesFee`**:
  - Takes the initial bill value as input.
  - Returns the bill value with a 10% service fee added.

- **Function `CalculateSalesTax`**:
  - Takes the bill value with the service fee as input.
  - Returns the final bill after applying a 16% sales tax on top of the service fee.

- **Function `PrintTotalBill`**:
  - Takes the final bill amount as input and displays the total bill to the user.

- **Function `main`**:
  - Calls `ReadBillValue` to get the initial bill.
  - Calls `CalculateServicesFee` to apply the service fee.
  - Calls `CalculateSalesTax` to apply the sales tax.
  - Finally, calls `PrintTotalBill` to display the total bill amount.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem40 problem40.cpp

  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem40
   ```
The program will prompt you to enter the `bill value` and then display the `total bill` after adding both the service fee and the sales tax.
## Example

If you enter: 
```
Please enter the bill value: 100
```
The program will output:
```
The total Bill after sales tax and services fee is: 127.6
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
* The program applies a fixed 10% service fee and a 16% sales tax.
* The sales tax is applied on top of the bill after adding the service fee.