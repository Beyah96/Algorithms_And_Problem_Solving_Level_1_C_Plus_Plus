# Problem 26 : Print Numbers from 2 to N using Three Loops

## Description
This C++ program prints numbers from 1 to a user-defined value \( N \), using three different types of loops: `for`, `while`, and `do-while`. The program reads an integer \( N \) from the user and then prints numbers from 1 to \( N \) using each loop type sequentially. It includes the following functions:
- `ReadNumber` to get the user input,
- `PrintNumberForLoop` to print numbers from 1 to \( N \) using a `for` loop,
- `PrintNumberWhileLoop` to print numbers from 1 to \( N \) using a `while` loop,
- `PrintNumberDoWhileLoop` to print numbers from 1 to \( N \) using a `do-while` loop.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadNumber`**: Prompts the user to enter an integer `N` and returns the value.
- **Function `PrintNumberForLoop`**: Uses a `for` loop to print numbers from `1` to `N`.
- **Function `PrintNumberWhileLoop`**: Uses a `while` loop to print numbers from `1` to `N`. The loop continues as long as the counter is less than or equal to `N`.
- **Function `PrintNumberDoWhileLoop`**: Uses a `do-while` loop to print numbers from `1` to `N`. This loop guarantees that the block executes at least once, even if `N` is less than 1.
- **Function `main`**: Manages the program flow by calling `ReadNumber` to input the number `N`, then calls the three loop functions (`PrintNumberForLoop`, `PrintNumberWhileLoop`, and `PrintNumberDoWhileLoop`) to print numbers from `1` to `N` using each loop.



## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem26 problem26.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem26
   ```

  The program will prompt you to enter a number `N`. It will then print the numbers from `1` to `N` using a `for` loop, a `while` loop, and a `do-while` loop in sequence.

## Example

If you enter `5`, the program will output:
```
**************************************
Print Numbers with for loop :
**************************************
1
2
3
4
5
**************************************
Print Numbers with while loop : 
**************************************
1
2
3
4
5
**************************************
Print Numbers with do while loop : 
**************************************
1
2
3
4
5
```


## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++



