# Problem 33 : Grade Calculation Based on Marks

## Description
This C++ program takes an input mark from the user and determines the corresponding grade (A, B, C, D, E, F) based on a predefined percentage scale. The program uses an enumeration to represent grades and displays the final grade as a letter.

The program includes the following functions:
- `ReadMark`: Prompts the user to input their mark.
- `CheckGrade`: Determines the grade based on the user's mark.
- `PrintResult`: Outputs the letter grade to the user.

## Code Explanation

- **Headers**: The program uses `<iostream>` to manage input/output operations and `<string>` for string handling.
- **Enumeration `enGrades`**: Defines the possible grades (A, B, C, D, E, F) with corresponding values (A=0, B=1, etc.).
- **Function `ReadMark`**: Prompts the user to input a mark and returns the value.
- **Function `CheckGrade`**: Takes the input mark and returns the corresponding grade based on the following conditions:
  - Mark ≥ 90 → Grade A
  - Mark ≥ 80 → Grade B
  - Mark ≥ 70 → Grade C
  - Mark ≥ 60 → Grade D
  - Mark ≥ 50 → Grade E
  - Mark < 50  → Grade F
- **Function `PrintResult`**: Converts the grade from the enumeration to the corresponding letter using ASCII values and displays the result to the user.
- **Function `main`**: Calls the functions to read the mark, calculate the grade, and print the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem33 problem33.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem33
   ```
 The program will prompt you to enter a mark and will display the corresponding grade.
## Example

If you enter mark `85` , the program will output:
```
Please enter your mark: 85
Your grade is: B
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

