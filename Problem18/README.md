# Problem 18 : Calculate the Area of a Circle using Radius

## Description
This C++ program calculates the area of a circle given its radius. The program prompts the user to input the radius, then computes and displays the area. It includes the following functions:
- `ReadRadius` to collect the radius of the circle,
- `CalculateCircleArea` to compute the area of the circle using the radius,
- `PrintResult` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical calculations.
- **Function `ReadRadius`**: Prompts the user to enter the radius of the circle and returns it.
- **Function `CalculateCircleArea`**: Calculates the area of the circle using the formula: `Area = pi * radius^2`
  where `pi` is approximated as 3.14 in this program.
- **Function `PrintResult`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadRadius` to input the radius, `CalculateCircleArea` to compute the area, and `PrintResult` to display the result.


## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem18 problem18.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem18
   ```

   The program will prompt you to enter the radius of the circle, then display the calculated area.

## Example

If you enter `4` the program will output:
```
The area of your circle is: 50.24
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

