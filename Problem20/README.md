# Problem 20 : Calculate the Area of a Circle Inscribed in a Square using Side Length

## Description
This C++ program calculates the area of a circle inscribed in a square, given the side length of the square. The program prompts the user to input the side length of the square, then computes and displays the area of the inscribed circle. It includes the following functions:
- `ReadSquareSide` to collect the side length of the square,
- `InsribedCircleInSquareAreaBySide` to compute the area of the circle inscribed in the square using the side length,
- `PrintResult` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical calculations.
- **Function `ReadSquareSide`**: Prompts the user to enter the side length of the square and returns it. Note: The prompt message refers to "radius" but should refer to "side length".
- **Function `InsribedCircleInSquareAreaBySide`**: Calculates the area of the circle inscribed in the square using the formula: `Area = (pi * side^2)/4`.
  where `pi` is approximated as 3.14 in this program.
- **Function `PrintResult`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadSquareSide` to input the side length, `InsribedCircleInSquareAreaBySide` to compute the area, and `PrintResult` to display the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem20 problem20.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem20
   ```

   The program will prompt you to enter the side length of the square, then display the calculated area of the inscribed circle.

## Example

If you enter `4`, the program will output:
```
The area of your circle is: 12.56
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

