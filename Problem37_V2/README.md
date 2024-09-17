# Problem 37_v2: Sum of Numbers Until Sentinel Value (`-99`)

## Description
This C++ program prompts the user to enter numbers one by one and calculates the sum of these numbers. The process continues until the user inputs the sentinel value `-99`, which terminates the input. The sum is then displayed as the result.

The program includes the following functions:
- `ReadNumber`: Prompts the user to input a number with a custom message.
- `SumNumbers`: Reads numbers, accumulates their sum, and stops when `-99` is entered.
- `PrintResult`: Displays the final sum to the user.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for constructing custom messages.

- **Function `ReadNumber`**:
  - Accepts a `Message` string that is displayed to the user as a prompt.
  - Reads and returns the number entered by the user.

- **Function `SumNumbers`**:
  - Initializes a `Sum` variable to `0` and uses a counter (`Counter`) to track the number of entries.
  - Continuously prompts the user to enter numbers using the `ReadNumber` function.
  - The loop adds each number to the sum and stops when the sentinel value `-99` is entered.
  - The function returns the total sum of all numbers entered (excluding `-99`).

- **Function `PrintResult`**:
  - Takes the computed sum as input and prints the result in a formatted message.

- **Function `main`**:
  - Calls `SumNumbers` to compute the total sum of the numbers.
  - Finally, it calls `PrintResult` to display the sum.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem37_v2 problem37_v2.cpp  
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem37_v2
   ```
  The program will prompt the user to enter numbers continuously until `-99` is entered. It will then display the sum of the entered numbers.
## Example

If you enter the following values:
```
Please enter the Number 1 : 10
Please enter the Number 2 : 20
Please enter the Number 2 : -99
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
* The program prompts the user for each number with an incremented message like "Please enter the number 1", "Please enter the number 2", and so on.
* The program sums the numbers as they are entered and stops as soon as -99 is entered.
* The sentinel value -99 is not included in the sum calculation.