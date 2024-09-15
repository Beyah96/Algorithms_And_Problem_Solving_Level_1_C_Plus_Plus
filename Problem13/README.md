
# Problem 13 : The Maximum of Three Numbers

## Description
This C++ program reads three integers from the user, compares them, and determines which one is the largest (the maximum). The program includes the following functions:
- `ReadNumbers` to collect three integers from the user,
- `MaxOfTwoNumbers` to find the larger of two numbers,
- `MaxOfThreeNumbers` to determine the largest of the three numbers,
- `PrintResult` to display the maximum number.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadNumbers`**: Prompts the user to enter three integers and stores them in variables passed by reference.
- **Function `MaxOfTwoNumbers`**: Compares two integers and returns the larger one.
- **Function `MaxOfThreeNumbers`**: Calls `MaxOfTwoNumbers` twice to find the maximum of the three numbers.
- **Function `PrintResult`**: Takes the maximum number and prints it to the console.
- **Function `main`**: Manages the program flow by calling `ReadNumbers` to input numbers, `MaxOfThreeNumbers` to find the maximum, and `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem13 problem13.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem13
   ```

   The program will prompt you to enter three numbers and then display the maximum of those numbers.

## Example
If you enter `60`, `70`, and `80`, the program will output:
```
The max of your numbers is:  80
```

If you enter `40`, `30`, and `20`, the program will output:
```
The max of your numbers is: 40
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++
