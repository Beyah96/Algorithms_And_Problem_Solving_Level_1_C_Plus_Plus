# Problem 36 : Simple Calculator

## Description
This C++ program functions as a simple calculator that allows the user to perform one of four basic operations (addition, subtraction, multiplication, or division) on two numbers entered by the user. The user is prompted to input two numbers and then select an operation. The program calculates the result based on the selected operation and displays it.

The program includes the following functions:
- `ReadNumber`: Prompts the user to input a number.
- `ReadOperationType`: Prompts the user to choose an operation (addition, subtraction, multiplication, or division).
- `Calculate`: Performs the chosen operation on the two numbers.
- `PrintResult`: Outputs the result of the operation.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string handling.
  
- **Enumeration `enOperationType`**:
  - Defines the four possible operations:
    - `ADD` (Addition: `+`)
    - `Substract` (Subtraction: `-`)
    - `Multiply` (Multiplication: `*`)
    - `Divide` (Division: `/`)

- **Function `ReadNumber`**:
  - Prompts the user with a custom message (such as "Please enter your first number").
  - Reads and returns the number entered by the user.

- **Function `ReadOperationType`**:
  - Prompts the user to enter the desired operation type (`+`, `-`, `*`, or `/`).
  - Converts the character input into the corresponding `enOperationType` value and returns it.

- **Function `Calculate`**:
  - Takes two numbers and an operation as input and uses a `switch` statement to perform the appropriate calculation:
    - If `ADD`, it returns the sum.
    - If `Divide`, it returns the quotient.
    - If `Multiply`, it returns the product.
    - If `Substract`, it returns the difference.

- **Function `PrintResult`**:
  - Outputs the result of the operation to the user in a formatted message.

- **Function `main`**:
  - Calls `ReadNumber` to get two numbers from the user.
  - Calls `ReadOperationType` to get the chosen operation.
  - Calls `Calculate` to perform the selected operation.
  - Finally, it calls `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem36 problem36.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem36
   ```
  The program will prompt you to enter two numbers and an operation, then display the result.
## Example

If you enter the following values:
```
Please enter your first number: 10
Please enter your second number: 5
Please enter your operation type: *
```
The program will output:
```
The result of your operation is : 50
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
* The program currently assumes valid input for both numbers and operations.
* Division by zero is not handled explicitly and will result in undefined behavior.