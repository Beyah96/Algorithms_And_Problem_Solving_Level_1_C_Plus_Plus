
# Problem 11 : Pass or Fail Based on Average

## Description
This C++ program reads three integers from the user, calculates their sum, computes their average, and determines if the user has "passed" or "failed" based on the average. The program includes the following functions:
- `ReadNumbers` to collect three integers from the user,
- `CalculateSum` to compute the sum of the integers,
- `CalculateAverage` to calculate the average,
- `IsPassed` to decide whether the user passes or fails based on the average,
- `PrintResult` to display "Pass" or "Fail."

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Enumeration `enPassed`**: Defines two possible results: `Pass` or `Fail`.
- **Function `ReadNumbers`**: Prompts the user to enter three integers, storing them in an array.
- **Function `CalculateSum`**: Calculates the sum of the three integers by iterating through the array.
- **Function `CalculateAverage`**: Divides the sum of the numbers by 3 to compute the average.
- **Function `IsPassed`**: Evaluates if the average is 50 or greater, returning `Pass`; otherwise, it returns `Fail`.
- **Function `PrintResult`**: Takes the decision (`Pass` or `Fail`) and prints the result to the console.
- **Function `main`**: Orchestrates the program flow by calling the above functions to read numbers, compute the sum and average, determine the pass/fail result, and print the outcome.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem10 problem10.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem10
   ```

   The program will prompt you to enter three numbers and then display whether you "Pass" or "Fail" based on the calculated average.

## Example
If you enter `60`, `70`, and `80`, the program will output:
```
Your average is: 70
Pass
```

If you enter `40`, `30`, and `20`, the program will output:
```
Your average is: 30
Fail
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++
