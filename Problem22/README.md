# Problem 22 : Calculate the Area of a Circle Inscribed in an Isosceles Triangle

## Description
This C++ program calculates the area of a circle inscribed in an isosceles triangle, given the side and base lengths of the triangle. The program prompts the user to input these values, then computes and displays the area of the inscribed circle. It includes the following functions:
- `ReadTriangleSides` to collect the side and base lengths of the isosceles triangle,
- `InscribedInIsoscelesTriangleCircleArea` to compute the area of the circle inscribed in the isosceles triangle using the given dimensions,
- `PrintArea` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical calculations.
- **Function `ReadTriangleSides`**: Prompts the user to enter the side and base lengths of the isosceles triangle and stores these values in variables passed by reference.
- **Function `InscribedInIsoscelesTriangleCircleArea`**: Calculates the area of the circle inscribed in the isosceles triangle using the formula:`Area = (pi * base^2 * (2 * side - base))/ (4 * (2 * side + base))`
  where `pi` is approximated as 3.14 in this program.
- **Function `PrintArea`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadTriangleSides` to input the side and base, `InscribedInIsoscelesTriangleCircleArea` to compute the area, and `PrintArea` to display the result.
## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem22 problem22.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem22
   ```

   The program will prompt you to enter the circumference of the circle, then display the calculated area.

## Example

If you enter `5` for the side and `6` for the base, the program will output:
```
The area of your circle is: 18.84
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

