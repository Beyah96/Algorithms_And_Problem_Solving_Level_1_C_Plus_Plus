# Problem 45 : Convert Month Number to Month Name

## Description
This C++ program allows the user to input a month number (from 1 to 12) and converts it into the corresponding 
month name (e.g., 1 for January, 2 for February, etc.). The program uses an enumeration to represent the months 
of the year, and a `switch` statement to return the correct month name based on the input number. It includes 
the following functions:
- `ReadMonthNumber` to get and validate the user input,
- `GetMonthName` to convert the month number into the corresponding month name,
- `PrintMonthName` to display the month name.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` to handle strings.
- **Enum `enMonthsOfYear`**: Defines an enumeration for the months of the year, where each month is assigned a number from 1 (January) to 12 (December).
- **Function `ReadMonthNumber`**: Prompts the user to enter a month number between 1 and 12. If the input is outside this range, the function repeatedly asks the user until a valid number is entered.
- **Function `GetMonthName`**: Uses a `switch` statement to map the input number to the corresponding month name (e.g., `1` returns "January", `2` returns "February").
- **Function `PrintMonthName`**: Displays the corresponding month name based on the user input.
- **Function `main`**: Manages the program flow by calling `ReadMonthNumber` to get the input, converting it using `GetMonthName`, and printing the result using `PrintMonthName`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem45 problem45.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem45
   ```
The program will prompt you to enter a number between `1` and `12`, and it will display the corresponding `month name`.

## Example

If you enter `5`, the program will output:
```
Your chosen month is : May

```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

