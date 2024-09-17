# Problem 39 : Change Calculation

## Description
This C++ program calculates the remainder that needs to be returned to the customer after a payment. The user is prompted to enter the total bill amount and the cash paid. The program then computes the difference between the cash paid and the total bill, which represents the change to be returned to the customer.

The program includes the following functions:
- `ReadValue`: Prompts the user to input a value with a custom message.
- `Calculate`: Computes the remainder (change to be returned) based on the total bill and the cash paid.
- `PrintRemainder`: Displays the calculated remainder.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for handling custom messages.

- **Function `ReadValue`**:
  - Takes a `Message` string as input, which is used to prompt the user for input.
  - Reads and returns the entered value.

- **Function `Calculate`**:
  - Calls `ReadValue` twice to get the total bill and the cash paid.
  - Computes the remainder (change) by subtracting the total bill from the cash paid.
  - Returns the calculated remainder.

- **Function `PrintRemainder`**:
  - Takes the remainder as input and prints it to the user with a descriptive message.

- **Function `main`**:
  - Calls `Calculate` to get the remainder.
  - Calls `PrintRemainder` to display the calculated remainder.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem39 problem39.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem39
   ```
The program will prompt you to enter the `total bill` and the `cash paid`, then it will display the change to be returned.
## Example

If you enter: 
```
Please enter the total paid: 45.75
Please enter the cash paid: 50.00
```
The program will output:
```
The remainder to be paid back is : 4.25
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
* The program assumes that the cash paid is always greater than or equal to the total bill. No error handling is provided for cases where the cash paid is less than the total bill.