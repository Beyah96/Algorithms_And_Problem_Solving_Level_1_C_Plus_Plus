# Problem 49 : PIN Code Validation and Balance Display

## Description
This C++ program simulates a simple PIN code validation system. The user is asked to enter a PIN code, and if it is correct (i.e., `1234`), the program displays the user's balance. If the entered PIN is incorrect, the screen color changes to red, and the user is prompted to re-enter the PIN until it is correct. Once the correct PIN is entered, the screen color changes back to green, and the balance is displayed. The program includes the following functions:
- `ReadPINCode` to get the user's PIN code input,
- `CheckPINcode` to validate the entered PIN code,
- `PrintResult` to display the balance or handle the incorrect PIN case by changing the screen color.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` to handle string messages.
- **Function `ReadPINCode`**: Prompts the user to enter their PIN code and returns it as a short integer.
- **Function `CheckPINcode`**: Checks whether the entered PIN code is `1234`. Returns `true` if the PIN is correct, and `false` otherwise.
- **Function `PrintResult`**: 
  - If the PIN is correct, it displays the balance (`7500`).
  - If the PIN is incorrect, the screen color changes to red (`system("color 4F")`) and the user is prompted to re-enter the PIN until it is correct. After entering the correct PIN, the screen color changes back to green (`system("color 2F")`).
- **Function `main`**: Manages the program flow by calling `ReadPINCode` and checking the validity of the PIN using `CheckPINcode`, then handling the result using `PrintResult`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem49 problem49.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem49
   ```
The program will prompt you to enter your `PIN code`. If the entered `PIN` is correct, your `balance` will be displayed. If not, the screen will turn `red`, and you will be asked to re-enter your `PIN` until it is correct.

## Example
Correct PIN:

Input: 1234
Output:
```
Your balance is 7500
```
The screen turns Green.

2. Incorrect PIN:
* Input: Any value other than 1234
* The screen turns red, and the program repeatedly asks for the correct PIN until it is entered.

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

