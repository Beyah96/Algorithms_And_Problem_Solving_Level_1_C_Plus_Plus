# Problem 25 : Read Age in Range

## Description
This C++ program prompts the user to input their age and validates whether it falls within a specified range (18 to 45). If the inputted age is not valid, the program will keep asking the user to enter a valid age until they do so. It then displays the validated age. The program includes the following functions:
- `ReadAge` to collect the user's age,
- `ValidateAge` to check if the age falls within the valid range,
- `GetAge` to repeatedly prompt for a valid age until the input is within the acceptable range,
- `PrintAge` to display the chosen and validated age.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadAge`**: Prompts the user to enter their age and returns the value.
- **Function `ValidateAge`**: Checks whether the user's age falls within the specified range (18 to 45). It returns `true` if the age is valid and `false` otherwise.
- **Function `GetAge`**: Calls `ReadAge` in a loop until the user inputs an age within the valid range, determined by `ValidateAge`. Once a valid age is entered, it is returned.
- **Function `PrintAge`**: Displays the valid age that was selected by the user.
- **Function `main`**: Manages the program flow by defining the age range (18 to 45), calling `GetAge` to get a valid age, and then using `PrintAge` to display the final result.


## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem25 problem25.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem25
   ```

  The program will prompt you to enter your age. If the entered age is not between 18 and 45, it will keep asking until a valid age is provided, then display the chosen age.

## Example

If you enter `16` the program will continue to prompt you for an age. Once you enter `20` , the program will output:
```
Your chosen age is: 25
```
If you enter `55`, the program will output:
```
Invalid age !
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

