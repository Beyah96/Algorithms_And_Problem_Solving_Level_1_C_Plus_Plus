# Problem 44 : Convert Day Number to Day Name

## Description
This C++ program allows the user to input a day number (from 1 to 7) and converts it into the corresponding 
day name (e.g., 1 for Sunday, 2 for Monday, etc.). The program uses an enumeration to represent the days of the week, 
and a `switch` statement to return the correct day name based on the input number. It includes the following functions:
- `ReadDayNumber` to get and validate the user input,
- `GetDayName` to convert the day number into the corresponding day name,
- `PrintDay` to display the day name.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` to handle strings.
- **Enum `enDaysOfWeek`**: Defines an enumeration for the days of the week, where each day is assigned a number from 1 (Sunday) to 7 (Saturday).
- **Function `ReadDayNumber`**: Prompts the user to enter a day number between 1 and 7. If the input is outside this range, the function repeatedly asks the user until a valid number is entered.
- **Function `GetDayName`**: Uses a `switch` statement to map the input number to the corresponding day name (e.g., `1` returns "Sunday", `2` returns "Monday").
- **Function `PrintDay`**: Displays the corresponding day name based on the user input.
- **Function `main`**: Manages the program flow by calling `ReadDayNumber` to get the input, converting it using `GetDayName`, and printing the result using `PrintDay`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem44 problem44.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem44
   ```
The program will prompt you to enter a `number` between `1` and `7`, and it will display the corresponding `day name`.

## Example

If you enter `3`, the program will output:
```
The number entered corresponds to : Tuesday
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

