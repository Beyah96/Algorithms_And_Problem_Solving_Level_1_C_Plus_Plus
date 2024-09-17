# Problem 41 : Conversion of Hours into Days and Weeks

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
   g++ -o problem41 problem41.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem41
   ```
The program will prompt you to enter the number of hours and then display the equivalent number of days and weeks.
## Example

If you enter: 
```
Please enter the number of Hours: 168
```
The program will output:
```
1.0 Weeks
7.0 Days
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

### Notes
* The program assumes that 1 day = 24 hours and 1 week = 7 days.