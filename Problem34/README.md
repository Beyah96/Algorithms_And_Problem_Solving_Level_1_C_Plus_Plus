# Problem 34 : Sales Commission Calculation

## Description
This C++ program calculates the sales commission based on the total sales entered by the user. The program determines the commission percentage based on predefined sales brackets and then calculates the total commission. It displays the result to the user.

The program includes the following functions:
- `ReadTotalSales`: Prompts the user to enter the total sales.
- `PercentageCalculation`: Determines the commission percentage based on the total sales.
- `PrintComission`: Displays the calculated commission to the user.

## Code Explanation

- **Headers**: The program uses `<iostream>` for input/output operations and `<string>` for potential string manipulations.
- **Function `ReadTotalSales`**: 
  - Prompts the user to input the total sales as a floating-point number.
  - Returns the entered value.
  
- **Function `PercentageCalculation`**:
  - Based on the total sales, the function returns the corresponding commission percentage:
    - Sales > 1,000,000: 1% commission.
    - Sales > 500,000: 2% commission.
    - Sales > 100,000: 3% commission.
    - Sales > 50,000: 5% commission.
    - Sales ≤ 50,000: No commission (0%).
  
- **Function `PrintComission`**:
  - Takes the total sales and the calculated percentage as arguments.
  - Multiplies the total sales by the percentage to compute the commission and displays the result.

- **Function `main`**:
  - Calls `ReadTotalSales` to get the user's input.
  - Uses `PercentageCalculation` to determine the commission percentage.
  - Calls `PrintComission` to print the commission based on the sales.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem34 problem34.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem34
   ```
  The program will prompt you to enter the total sales, and it will display the commission based on the entered value.
## Example

If you enter the total sales as `600000`, the program will output:
```
Please enter your total sales : 600000
Your commission is : 12000
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

