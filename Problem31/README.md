# Project 31: Calculate Powers of 2, 3, and 4 Without Using Loops or Built-in Functions

## Description

This C++ program calculates the square (power of 2), cube (power of 3), and the fourth power (power of 4) of a user-defined integer without using loops or built-in power functions. The program is designed with three simple mathematical functions:
- `PowerOfTwo` to compute the square of the given number,
- `PowerOfThree` to compute the cube by multiplying the result of `PowerOfTwo` by the number,
- `PowerOfFour` to compute the fourth power by multiplying the result of `PowerOfThree` by the number.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Function `ReadNumber`**: Prompts the user to enter an integer.
- **Function `PowerOfTwo`**: Returns the square of the given number by multiplying the number by itself.
- **Function `PowerOfThree`**: Returns the cube of the number by multiplying the number by the result of `PowerOfTwo`.
- **Function `PowerOfFour`**: Returns the fourth power of the number by multiplying the number by the result of `PowerOfThree`.
- **Function `PrintPowers`**: Displays the square, cube, and fourth power of the number using the previously defined functions.
- **Function `main`**: Controls the flow by calling `ReadNumber` to get the number, and `PrintPowers` to display the calculated powers.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o project31 project31.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem31
   ```
  The program will prompt you to enter a number. After entering it, the program will display the square, cube, and fourth power of the number.

## Example

If you enter `5`, the program will output:
```
2 to the power of Two is : 4
2 to the power of Three is : 8
2 to the power of Four is : 16
```

If you enter `5`, the program will output:
```
5 to the power of Two is : 25
5 to the power of Three is : 125
5 to the power of Four is : 625
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++



