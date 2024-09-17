# Problem 43 : Seconds to Days, Hours, Minutes and Sendons

## Description
This C++ program takes a user-defined number of seconds and converts it into a more readable format of 
days, hours, minutes, and seconds. The program prompts the user to enter a number of seconds and then
breaks down that value into days, hours, minutes, and seconds using basic arithmetic calculations. It includes
the following functions:
- `ReadNumberOfSeconds` to get the user input,
- `GetDurationDetails` to calculate the number of days, hours, minutes, and seconds,
- `PrintTimeComponents` to display the formatted result.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical functions.
- **Struct `stTimeComponents`**: Defines a structure that stores the calculated time components: `Days`, `Hours`, `Minutes`, and `Seconds`.
- **Function `ReadNumberOfSeconds`**: Prompts the user to enter a number of seconds.
- **Function `GetDurationDetails`**: Converts the input number of seconds into days, hours, minutes, and seconds. The function uses constants for seconds in a minute, hour, and day, and performs division and modulo operations to extract the time components.
- **Function `PrintTimeComponents`**: Displays the calculated days, hours, minutes, and seconds in the format `DD:HH:MM:SS`.
- **Function `main`**: Manages the program flow by calling `ReadNumberOfSeconds` to get the input, converting it using `GetDurationDetails`, and printing the result using `PrintTimeComponents`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem43 problem43.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem43
   ```
The program will prompt you to enter a number of `seconds`, and it will display the corresponding `duration` in `days`, `hours`, `minutes` and  `seconds`.
## Example

If you enter `90061` seconds, the program will output:
```
1:1:1:1
```
This represents 1 day, 1 hour, 1 minute, and 1 second.
## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++
