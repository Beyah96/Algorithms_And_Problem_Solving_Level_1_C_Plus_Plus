# Problem 35: Piggy Bank Content

## Description
This C++ program calculates the total amount of money in a piggy bank based on the number of different coins (pennies, nickels, dimes, quarters, and dollars) entered by the user. The program computes the total number of pennies and converts it to dollars for easier representation.

The program includes the following functions:
- `ReadCoins`: Prompts the user to input the quantity of each type of coin.
- `CalculatePennies`: Converts all the coins to their equivalent in pennies.
- `CalculateDollars`: Converts the total number of pennies into dollars.
- `PrintDetails`: Displays the total amount in both pennies and dollars.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulations.
  
- **Structure `stPiggyBankContent`**:
  - A structure that holds the number of each type of coin in the piggy bank:
    - Pennies
    - Nickels (5 cents)
    - Dimes (10 cents)
    - Quarters (25 cents)
    - Dollars (100 cents)

- **Function `ReadCoins`**:
  - Prompts the user to input the number of pennies, nickels, dimes, quarters, and dollars in the piggy bank.
  - Returns a `stPiggyBankContent` structure containing these values.

- **Function `CalculatePennies`**:
  - Takes a `stPiggyBankContent` structure as input.
  - Converts all the coins to their equivalent value in pennies and returns the total number of pennies.
  - Calculation logic:
    - Pennies: `1 penny = 1 cent`
    - Nickels: `1 nickel = 5 cents`
    - Dimes: `1 dime = 10 cents`
    - Quarters: `1 quarter = 25 cents`
    - Dollars: `1 dollar = 100 cents`

- **Function `CalculateDollars`**:
  - Takes the total number of pennies and converts it to dollars (since 100 pennies = 1 dollar).
  - Returns the total amount in dollars as a floating-point number.

- **Function `PrintDetails`**:
  - Prints the total number of pennies and the equivalent dollar amount.

- **Function `main`**:
  - Calls `ReadCoins` to get the coin data from the user.
  - Uses `CalculatePennies` to compute the total number of pennies.
  - Calls `CalculateDollars` to convert the total pennies into dollars.
  - Finally, it prints the total pennies and dollars using `PrintDetails`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem35 problem35.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem35
   ```
  The program will prompt you to enter the number of pennies, nickels, dimes, quarters, and dollars. It will then calculate and display the total value in both pennies and dollars.
## Example

If you enter the following values:
```
Please enter the number of Pennies: 5
Please enter the number of Nickels: 10
Please enter the number of Dimes: 8
Please enter the number of Quarters: 4
Please enter the number of Dollars: 2
```
The program will output:
```
Total Pennies 605 Pennies
Total Dollars 6.05 Dollars
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
The program assumes valid integer inputs for the number of coins.
