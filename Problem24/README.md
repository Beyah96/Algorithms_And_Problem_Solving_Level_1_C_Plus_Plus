# Problem 24 : Validate Age

## Description
This C++ program validates whether a user's age falls within a specified range. The program prompts the user to input their age, checks if it is within the acceptable range (18 to 45), and then prints a message indicating whether the age is valid or invalid. It includes the following functions:
- `ReadAge` to collect the user's age,
- `ValidateAge` to check if the age falls within the valid range (18 to 45),
- `PrintResult` to display whether the age is valid or not.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadAge`**: Prompts the user to enter their age and returns the value.
- **Function `ValidateAge`**: Takes the user's age and checks whether it falls within a given range. In this case, the valid range is between 18 and 45 (inclusive). It returns `true` if the age is valid, otherwise it returns `false`.
- **Function `PrintResult`**: Prints a message indicating whether the age is valid or invalid based on the result of `ValidateAge`.
- **Function `main`**: Manages the program flow by calling `ReadAge` to input the age, `ValidateAge` to check if the age is valid, and `PrintResult` to display the result.


## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem24 problem24.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem24
   ```

  The program will prompt you to enter your age, then display whether the age is valid (within the range of 18 to 45) or invalid.

## Example

If you enter `20`, the program will output:
```
Validate age !
```
If you enter `55`, the program will output:
```
Invalid age !
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

