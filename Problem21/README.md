# Problem 21 : Calculate the Area of a Circle using Circumference

## Description
This C++ program calculates the area of a circle given its circumference. The program prompts the user to input the circumference, then computes and displays the area of the circle. It includes the following functions:
- `ReadCircumference` to collect the circumference of the circle,
- `CircleAreaByCircumference` to compute the area of the circle using the given circumference,
- `PrintArea` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical calculations.
- **Function `ReadCircumference`**: Prompts the user to enter the circumference of the circle and returns it.
- **Function `CircleAreaByCircumference`**: Calculates the area of the circle using the formula: `Area = (circumference^2)/(4 * pi)` where `pi` is approximated as 3.14 in this program.
- **Function `PrintArea`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadCircumference` to input the circumference, `CircleAreaByCircumference` to compute the area, and `PrintArea` to display the result.


## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem21 problem21.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem21
   ```

   The program will prompt you to enter the circumference of the circle, then display the calculated area.

## Example

If you enter `31.14`, the program will output:
```
The area of your circle is: 78.5
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

