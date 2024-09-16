# Problem 32: Power of a Number

## Description
This C++ program calculates the result of raising a user-defined number to a given power. The user is prompted to enter a base number and an exponent (power). The program computes the result and displays it to the user.

The program includes the following functions:
- `ReadNumberAndPower`: Reads the base number and the power from the user.
- `CalculatePower`: Computes the result by raising the base number to the given power using a loop.
- `PrintPower`: Displays the calculated result to the user.

## Code Explanation

- **Headers**: The program includes `<iostream>` to manage input/output operations.
- **Function `ReadNumberAndPower`**: Prompts the user to enter both the base number and the power. It reads these values by reference, allowing the main program to use them.
- **Function `CalculatePower`**: Computes the result of the base number raised to the power using a loop. It initializes the result as 1 and multiplies it by the base number `Power` times.
- **Function `PrintPower`**: Outputs the computed result to the user.
- **Function `main`**: Serves as the entry point of the program, calling `ReadNumberAndPower` to collect user input, calculating the power using `CalculatePower`, and then printing the result with `PrintPower`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem32 problem32.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem32
   ```
  The program will prompt you to enter a base number and a power, then it will display the result of raising the base number to the given power.
## Example

If you enter the base number `2` and the power `3`, the program will output:
```
The factorial of your number is : 8
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

