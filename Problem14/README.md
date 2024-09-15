
# Problem 14 : Swap Two Numbers

## Description
This C++ program reads two integers from the user, swaps their values, and then displays both the original and swapped values. The program includes the following functions:
- `ReadNumbers` to collect two integers from the user,
- `SwapNumbers` to swap the two integers,
- `PrintNumbers` to display the numbers before and after swapping.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadNumbers`**: Prompts the user to enter two integers and stores them in variables passed by reference.
- **Function `SwapNumbers`**: Takes two integers and swaps their values using a temporary variable.
- **Function `PrintNumbers`**: Prints the values of the two integers to the console.
- **Function `main`**: Manages the program flow by calling `ReadNumbers` to input numbers, `PrintNumbers` to display the original numbers, `SwapNumbers` to swap the numbers, and `PrintNumbers` again to display the swapped values.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem14 problem14.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem14
   ```

   The program will prompt you to enter three numbers and then display the maximum of those numbers.

## Example

If you enter `3` and `5`, the program will output:
```
************* Before swap ***************
Your numbers are :
- Number 1 : 3
- Number 2 : 5
************* After swap ***************
Your numbers are :
- Number 1 : 5
- Number 2 : 3
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

