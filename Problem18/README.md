# Problem 17 : Calculate the Area of a Triangle using Base and Height

## Description
This C++ program calculates the area of a triangle given its base and height. The program prompts the user to input the base and height, then computes and displays the area. It includes the following functions:
- `ReadDemensions` to collect the base and height of the triangle,
- `CalculateTriangleArea` to compute the area of the triangle using the base and height,
- `PrintResult` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` for mathematical calculations.
- **Function `ReadDemensions`**: Prompts the user to enter the base and height of the triangle and stores them in variables passed by reference.
- **Function `CalculateTriangleArea`**: Calculates the area of the triangle using the formula: Area = (base*height)/2.
- **Function `PrintResult`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadDemensions` to input the base and height, `CalculateTriangleArea` to compute the area, and `PrintResult` to display the result.



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

If you enter `5` and `10`, the program will output:
```
The area of your triangle is: 25
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

