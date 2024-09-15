# Problem 8: Pass or Fail Based on Mark

## Description
This C++ program reads a student's mark, checks if they passed or failed, and prints the result. The program uses an enumeration to represent the pass or fail status, and includes three main functions:
- `ReadMark` to collect the student's mark,
- `CheckMark` to determine if the mark indicates a pass or fail,
- `PrintResult` to display whether the student passed or failed based on the mark.


## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Enum `enPassFail`**: Defines an enumeration with two possible values: `Pass` and `Fail`, representing the student's result.
- **Function `ReadMark`**: Prompts the user to enter their mark and returns it as an integer.
- **Function `CheckMark`**: Takes an integer representing the student's mark as input and returns `enPassFail::Fail` if the mark is less than 50, and `enPassFail::Pass` otherwise.
- **Function `PrintResult`**: Takes the student's mark, calls `CheckMark` to determine the result, and prints either "Pass" or "Fail" based on the mark.
- **Function `main`**: Manages the flow by calling `ReadMark` to get the mark, and `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem8 problem8.cpp
2. **Execute**: Run the compiled program:
    ```bash
    ./problem8

It will prompt you to enter a mark. After entering it, the program will display either "Pass" if the mark is 50 or higher, or "Fail" if the mark is less than 50.

## Example
If you enter `75` when prompted, the output will be:
```
Pass
```
If you enter `45` when prompted, the output will be:

```
Fail
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
