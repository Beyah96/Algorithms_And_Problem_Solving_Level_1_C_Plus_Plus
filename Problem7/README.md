# Problem 7: Half Number

## Description
This C++ program reads an integer from the user, calculates its half, and prints the result in a formatted message. The program includes three main functions:
- `ReadNumber` to collect an integer from the user,
- `CalculateHalfNumber` to compute half of the provided number,
- `PrintResult` to display the result in a formatted message.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Function `ReadNumber`**: Prompts the user to enter an integer and returns it.
- **Function `CalculateHalfNumber`**: Takes an integer as input and returns its half as a `float`. The integer is cast to `float` to ensure division results in a floating-point number.
- **Function `PrintResult`**: Takes an integer, calculates its half using `CalculateHalfNumber`, and formats the result as a string. It then prints the formatted message to the console.
- **Function `main`**: Manages the flow by calling `ReadNumber` to get the integer, `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem7 problem7.cpp
2. **Execute**: Run the compiled program:
    ```bash
    ./problem7

It will prompt you to enter a number. After entering it, the program will display the half of that number.

## Example
If you enter `10` when prompted, the output will be:

```
Half of 10 is 5.00000
```
If you enter `7` when prompted, the output will be:

```
Half of 10 is 3.50000
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
