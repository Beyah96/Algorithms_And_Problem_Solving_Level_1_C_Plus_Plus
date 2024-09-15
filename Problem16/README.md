# Problem 16 : Calculate the Area of a Rectangle using Width and Diagonal

## Description
This C++ program reads the width and diagonal of a rectangle from the user, calculates the area using the Pythagorean theorem, and displays the result. The program includes the following functions:
- `ReadDimensions` to collect the width and diagonal of the rectangle,
- `CalculateAreaBySideAndDiagonal` to compute the area of the rectangle using the width and diagonal,
- `PrintResult` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical calculations.
- **Function `ReadDimensions`**: Prompts the user to enter the width and diagonal of the rectangle and stores them in variables passed by reference.
- **Function `CalculateAreaBySideAndDiagonal`**: Uses the Pythagorean theorem to calculate the height of the rectangle based on the width and diagonal, then multiplies the width by the height to calculate the area. The formula used is:
  Area = width * sqrt(diagonal^2 - width^2)
- **Function `PrintResult`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadDimensions` to input the width and diagonal, `CalculateAreaBySideAndDiagonal` to compute the area, and `PrintResult` to display the result.



## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem16 problem16.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem16
   ```

   The program will prompt you to enter the width and diagonal of the rectangle, then display the calculated area.

## Example

If you enter `3` and `5`, the program will output:
```
The area of your rectangle is: 12
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

