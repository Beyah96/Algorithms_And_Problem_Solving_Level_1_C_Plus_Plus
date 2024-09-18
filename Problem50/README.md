# Problem 50 : PIN Code Validation with Limited Attempts

## Description
This C++ program simulates a PIN code validation system where the user has a limited number of attempts (3 tries) to enter the correct PIN. If the user enters the correct PIN (`1234`), the program displays the user's balance and changes the screen color to green. If the PIN is incorrect, the screen color turns red, and the user is informed of the remaining attempts. After 3 failed attempts, the program informs the user that their card is blocked, and they are instructed to call the bank for assistance. The program includes the following functions:
- `ReadPINCode` to get the user's PIN code input,
- `CheckPINcode` to validate the entered PIN code and change the screen color,
- `PrintResult` to handle the correct PIN case or the failed attempts, and block the card after 3 incorrect tries.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for handling string manipulation.
- **Function `ReadPINCode`**: Prompts the user to enter their PIN code and returns it as a short integer.
- **Function `CheckPINcode`**: Checks whether the entered PIN code is `1234`. 
  - If the PIN is correct, it changes the screen color to green (`system("color 2F")`) and returns `true`.
  - If the PIN is incorrect, it changes the screen color to red (`system("color 4F")`) and returns `false`.
- **Function `PrintResult`**: 
  - Manages the PIN validation process. If the PIN is incorrect, the user is informed of how many attempts remain.
  - After 3 incorrect attempts, the program informs the user that their card is blocked.
  - If the correct PIN is entered within the 3 attempts, the user's balance (`7500`) is displayed, and the screen color remains green.
- **Function `main`**: Starts the program by calling `ReadPINCode` and validating it through `CheckPINcode`, then processing the result with `PrintResult`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem50 problem50.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem50
   ```
The program will prompt you to enter your `PIN code`. If the `correct PIN` is entered, your `balance` is displayed. If not, you have up to `3 attempts`  to enter the correct PIN before the `card is blocked`.

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
* Ouptup after 3 wrong attemps:
```
Wrong PIN! You have 2 more try(ies)
Wrong PIN! You have 1 more try(ies)
Wrong PIN! You have 0 more try(ies)
Your card is blocked, Call the bank for help!
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

