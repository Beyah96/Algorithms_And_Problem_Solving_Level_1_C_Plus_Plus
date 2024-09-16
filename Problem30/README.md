# Problem 30 : Factorial of a Number

## Description
This C++ program calculates the factorial of a user-defined non-negative integer `N`. 
The program prompts the user to enter a non-negative number and then calculates its factorial.
It includes the following functions:
- `ReadNumber` to get the user input and validate that it is non-negative,
- `NumberFactorial` to calculate the factorial of the given number,
- `PrintFactorial` to display the calculated factorial.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadNumber`**: Prompts the user to enter an integer `N` and ensures that the number is non-negative.
- **Function `NumberFactorial`**: Calculates the factorial of the given number `N` using a loop. The factorial of `0` is set to `1`.
- **Function `PrintFactorial`**: Displays the factorial of the number.
- **Function `main`**: Manages the program flow by calling `ReadNumber` to get `N`, then computes and prints the factorial of `N` using `NumberFactorial` and `PrintFactorial`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem30 problem30.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem30
   ```
  The program will prompt you to enter a non-negative number `N`. It will then display the factorial of `N`.
## Example

If you enter `5`, the program will output:
```
The factorial of your number is : 120
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++



