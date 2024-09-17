# Problem 37: Sum of Numbers Until Sentinel Value

## Description
This C++ program continuously reads numbers entered by the user and computes their sum. The process continues until the user inputs `-99`, which is used as a sentinel value to terminate the input. Once the sentinel value is detected, the program returns the sum of all numbers entered before `-99`.

The program includes the following functions:
- `ReadNumber`: Prompts the user to input a number.
- `SumNumbers`: Repeatedly reads numbers from the user and sums them until the sentinel value `-99` is entered.
- `PrintResult`: Displays the final sum to the user.

## Code Explanation

- **Headers**: The program uses `<iostream>` for input/output operations and `<string>` for potential string manipulations.

- **Function `ReadNumber`**:
  - Prompts the user to input a number.
  - Returns the number entered by the user.

- **Function `SumNumbers`**:
  - Initializes a sum variable (`Sum`) to `0`.
  - Continuously reads numbers using the `ReadNumber` function and adds them to the sum.
  - The loop stops when the user enters `-99`, and the function returns the sum of the numbers entered.

- **Function `PrintResult`**:
  - Takes the computed sum as input and prints the result in a formatted message.

- **Function `main`**:
  - Calls `ReadNumber` to start the process.
  - Calls `SumNumbers` to compute the total sum of the numbers.
  - Finally, it calls `PrintResult` to display the sum.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem37 problem37.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem37
   ```
  The program will prompt the user to enter numbers continuously until `-99` is entered. It will then display the sum of the entered numbers.
## Example

If you enter the following values:
```
Please enter a Number: 10
Please enter a Number: 20
Please enter a Number: -99
```
The program will output:
```
Sum result : 30
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
* The sentinel value used to stop the input is -99. You can modify this value in the program if necessary.
* The program sums the numbers as they are entered and stops as soon as -99 is entered.