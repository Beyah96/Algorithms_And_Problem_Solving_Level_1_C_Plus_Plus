# Problem 9: Sum of 3 Numbers

## Description
This C++ program reads three integers from the user, calculates their sum, and prints the result. The program includes three main functions:
- `ReadNumbers` to collect the three integers,
- `SumNumbers` to calculate the sum of the three integers,
- `PrintResult` to display the total sum.


## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Function `ReadNumbers`**: Prompts the user to enter three integers. It stores the values in an array of size 3 passed as an argument.
- **Function `SumNumbers`**: Takes an array of three integers and calculates their sum by iterating through the array and adding each element to a running total. It returns the total sum.
- **Function `PrintResult`**: Takes an array of three integers and prints the sum by calling `SumNumbers`.
- **Function `main`**: Manages the flow by calling `ReadNumbers` to get the integers, and `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem9 problem9.cpp
2. **Execute**: Run the compiled program:
    ```bash
    ./problem9

It will prompt you to enter three numbers. After entering them, the program will display the sum of these numbers.

## Example
If you enter `3`,`4` and `5` when prompted, the output will be:
```
The total sum of given numbers is : 12
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
