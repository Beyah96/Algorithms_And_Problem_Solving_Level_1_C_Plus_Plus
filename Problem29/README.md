# Problem 28 : Sum of Odd Numbers from 1 to N

## Description
This C++ program calculates the sum of all odd numbers between 1 and a user-defined value `N`. The program prompts the user for a number `N`, then calculates the sum of odd numbers in the range from `1` to `N`. It includes the following functions:
- `ReadNumber` to get the user input,
- `CheckNumber` to check if a number is odd or even,
- `SumOddNumbers` to calculate the sum of all odd numbers up to `N`,
- `PrintNumbers` to display the result.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Enum `enOddEven`**: Defines an enumeration to differentiate between odd and even numbers.
- **Function `ReadNumber`**: Prompts the user to enter an integer `N` and returns it.
- **Function `CheckNumber`**: Determines if a given number is odd or even. Returns `Odd` if the number is odd and `Even` otherwise.
- **Function `SumOddNumbers`**: Iterates from 1 to `N`, checks each number to see if it is odd using `CheckNumber`, and sums all the odd numbers.
- **Function `PrintNumbers`**: Displays the sum of odd numbers between 1 and `N`.
- **Function `main`**: Manages the program flow by calling `ReadNumber` to get `N`, then computes and prints the sum of odd numbers up to `N` using `SumOddNumbers` and `PrintNumbers`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem28 problem28.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem28
   ```
  The program will prompt you to enter a number `N`. It will then display the sum of all odd numbers between `1` and `N`.
## Example

If you enter `10`, the program will output:
```
The sum of all odd numbers between 1 and your number is : 25
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++



