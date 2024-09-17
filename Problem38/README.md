# Problem 38 : Prime or Composite Number Checker

## Description
This C++ program allows the user to input a positive number and then checks whether the number is prime or composite. A prime number is a number greater than 1 that has no divisors other than 1 and itself. A composite number is a number greater than 1 that has divisors other than 1 and itself.

The program includes the following functions:
- `ReadPositiveNumber`: Prompts the user to enter a positive number and ensures the input is valid.
- `CheckNumber`: Determines if the given number is prime or composite.
- `PrintResult`: Displays whether the number is prime or composite.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations, `<string>` for string manipulations, and `<cmath>` for using mathematical functions like `sqrt`.

- **Enumeration `enPrimeOrComopsiteNumber`**:
  - Defines two possible values:
    - `Prime`: Represents a prime number.
    - `Composite`: Represents a composite number.

- **Function `ReadPositiveNumber`**:
  - Continuously prompts the user to enter a positive number until a valid input is provided.
  - Returns the valid number entered by the user.

- **Function `CheckNumber`**:
  - Determines whether a number is prime or composite:
    - For numbers greater than or equal to 4, it checks divisibility by numbers from 2 up to the square root of the number.
    - If any divisor is found, the number is composite; otherwise, it's prime.
  - Returns the appropriate value (`Prime` or `Composite`).

- **Function `PrintResult`**:
  - Takes the result from `CheckNumber` and prints "Prime Number" if the number is prime, or "Composite Number" if it's composite.

- **Function `main`**:
  - Calls `ReadPositiveNumber` to get a valid number from the user.
  - Calls `CheckNumber` to determine if the number is prime or composite.
  - Calls `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem38 problem38.cpp -lm
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem38
   ```
The program will prompt you to enter a positive number and then determine if it is prime or composite.
## Example

If you enter: `29`
```
Please enter a positive Number: 29
```
The program will output:
```
Prime Number
```
If you enter: `18`
```
Please enter a positive Number: 29
```
The program will output:
```
Composite Number
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
* Numbers less than 2 are neither prime nor composite, but this program treats numbers less than 4 as prime by default for simplicity.
* The function `CheckNumber` optimizes the check by only iterating up to the square root of the number, reducing unnecessary calculations.