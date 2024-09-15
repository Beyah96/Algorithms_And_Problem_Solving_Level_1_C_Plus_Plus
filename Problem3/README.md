
# Problem 3: Check Odd or Even Number

## Description
This C++ program determines whether a given number is odd or even. It consists of three main functions:
- `ReadNumberType` to read a number from the user,
- `CheckNumberType` to determine if the number is odd or even,
- `PrintNumberType` to print the result.

## Code Explanation
- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Enum `enNumberType`**: Defines an enumeration to represent the number type as either `Odd` or `Even`.
- **Function `ReadNumberType`**: Prompts the user to enter a number and returns it.
- **Function `CheckNumberType`**: Takes an integer as input and determines if it is odd or even using the modulo operator. It returns an `enNumberType` enum value indicating the result.
- **Function `PrintNumberType`**: Takes an `enNumberType` enum value and prints whether the number is "Even" or "Odd".
- **Function `main`**: Orchestrates the flow by calling `ReadNumberType` to get the number, `CheckNumberType` to check if it's odd or even, and `PrintNumberType` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem3 problem3.cpp
2. **Execute**: Run the compiled program:
    ```bash
    ./problem3
It will prompt you to enter your name. After entering it, the program will display whether the number is "Even" or "Odd".

## Example
If you enter `7` when prompted, the output will be:
```
Your number is Odd
```

If you enter `4` when prompted, the output will be:
```
Your number is Even
```
## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
