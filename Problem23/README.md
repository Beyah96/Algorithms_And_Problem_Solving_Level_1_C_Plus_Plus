# Problem 23 : Calculate the Area of a Circle Circumscribed around an Arbitrary Triangle

## Description
This C++ program calculates the area of a circle circumscribed around an arbitrary triangle, given the three sides of the triangle. The program prompts the user to input the side lengths, then computes and displays the area of the circumscribed circle. It includes the following functions:
- `ReadTriangleSides` to collect the three side lengths of the triangle,
- `DescribedTriangleCircleArea` to compute the area of the circle circumscribed around the triangle using the given sides,
- `PrintArea` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical calculations.
- **Function `ReadTriangleSides`**: Prompts the user to enter the three sides of the triangle and stores these values in variables passed by reference.
- **Function `DescribedTriangleCircleArea`**: 
  - First, it calculates the semi-perimeter P of the triangle:
    `P = (Side1 + Side2 + Side3) / 2`
  - Then, it uses Heron's formula to compute the radius R of the circumscribed circle:
   `R = (Side1 * Side2 * Side3) / (4 * sqrt(P * (P - Side1) * (P - Side2) * (P - Side3)))`
  - Finally, the area of the circle is calculated as:
   `Area = pi * R^2`
  where `pi` is approximated as 3.14 in this program.
- **Function `PrintArea`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadTriangleSides` to input the triangle sides, `DescribedTriangleCircleArea` to compute the area, and `PrintArea` to display the result.


## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem23 problem23.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem23
   ```

   The program will prompt you to enter the circumference of the circle, then display the calculated area.

## Example

If you enter `3`, `4` and `5` for the sides, the program will output:
```
The area of your circle is: 19.63
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

