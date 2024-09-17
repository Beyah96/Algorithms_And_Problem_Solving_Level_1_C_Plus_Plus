# Problem 42 :  Convert Duration to Total Seconds

## Description
This C++ program converts a given number of hours into equivalent days and weeks. The user is prompted to enter the total number of hours, and the program then calculates how many days and weeks this corresponds to.

The program includes the following functions:
- `ReadNumberOfHours`: Prompts the user to input the total number of hours.
- `CalculateNumberOfDays`: Converts the given hours into days.
- `CalculateNumberOfWeeks`: Converts the calculated number of days into weeks.
- `PrintNumberOfDaysAndWeeks`: Displays the number of days and weeks calculated from the total hours.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations, `<string>` for string handling, and `<cmath>` for mathematical operations.

- **Function `ReadNumberOfHours`**:
  - Prompts the user to enter the number of hours.
  - Returns the entered value as an integer.

- **Function `CalculateNumberOfDays`**:
  - Takes the number of hours as input.
  - Returns the equivalent number of days as a floating-point number, calculated by dividing the hours by 24.

- **Function `CalculateNumberOfWeeks`**:
  - Takes the number of days as input.
  - Returns the equivalent number of weeks as a floating-point number, calculated by dividing the days by 7.

- **Function `PrintNumberOfDaysAndWeeks`**:
  - Takes the number of days and weeks as input and displays them to the user in a readable format.

- **Function `main`**:
  - Calls `ReadNumberOfHours` to get the number of hours.
  - Calls `CalculateNumberOfDays` to convert hours into days.
  - Calls `CalculateNumberOfWeeks` to convert days into weeks.
  - Finally, calls `PrintNumberOfDaysAndWeeks` to display the calculated number of days and weeks.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem42 problem42.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem42
   ```
The program will prompt you to enter the number of `days`, `hours`, `minutes`, and `seconds`. It will then display the total duration in `seconds`.

If you enter: 
```
Please enter the number of Days: 1
Please enter the number of Hours: 1
Please enter the number of Minutes: 1
Please enter the number of Seconds: 1
```
The program will output:
```
The total duration is seconds: 90061 Seconds
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
* The program assumes that the input values for days, hours, minutes, and seconds are non-negative.
* The conversion formulas are based on standard time units: `1 minute = 60 seconds`, `1 hour = 60 minutes`, and `1 day = 24 hours`.