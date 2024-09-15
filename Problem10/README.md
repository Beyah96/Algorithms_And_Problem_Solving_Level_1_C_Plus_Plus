# Problem 10 : Calculate Average of Three Numbers

## Description
This C++ program reads three integers from the user, calculates their sum, and computes the average of the three numbers. The program includes four main functions:
- `ReadNumbers` to collect the three integers,
- `SumNumbers` to calculate the sum of the three integers,
- `AverageNumbers` to compute the average based on the sum,
- `PrintResult` to display the average.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Function `ReadNumbers`**: Prompts the user to enter three integers. It stores the values in an array of size 3 passed as an argument.
- **Function `SumNumbers`**: Takes an array of three integers and calculates their sum by iterating through the array and adding each element to a running total. It returns the total sum.
- **Function `AverageNumbers`** :the average by dividing the sum by 3, and returns the result as a floating-point number.
- **Function `PrintResult`**: Takes the calculated average and prints it in a formatted message.
- **Function `main`**: Manages the flow by calling `ReadNumbers` to get the integers, `SumNumbers` to compute the sum, `AverageNumbers` to calculate the average, and `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem10 problem10.cpp
2. **Execute**: Run the compiled program:
    ```bash
    ./problem10

It will prompt you to enter three numbers. After entering them, the program will display the average of these numbers.

## Example
If you enter `3`,`4` and `5` when prompted, the output will be:
```
The average of your numbers is : 4
```
If you enter `10`,`20` and `30` when prompted, the output will be:
```
The average of your numbers is : 20
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
