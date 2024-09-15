# Problem 12: The Maximum of Two Numbers

## Description
This C++ program reads two integers from the user, compares them, and determines which one is larger (the maximum). The program includes the following functions:
- `ReadNumbers` to collect two integers from the user,
- `MaxOfNumbers` to determine the larger of the two numbers,
- `PrintResult` to display the maximum number.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadNumbers`**: Prompts the user to enter two integers and stores them in variables passed by reference.
- **Function `MaxNumber`**: Compares the two integers and returns the larger one.
- **Function `PrintResult`**: Takes the maximum number and prints it to the console.
- **Function `main`**: Manages the program flow by calling `ReadNumbers` to input numbers, `MaxNumber` to find the maximum, and `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem12 problem12.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem12
   ```

   The program will prompt you to enter two numbers and then display the maximum of those numbers.

## Example
If you enter `60` and `70` the program will output:
```
The max of your numbers is: 70
```

If you enter `3` and `20`, the program will output:
```
The max of your numbers is: 20
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++
