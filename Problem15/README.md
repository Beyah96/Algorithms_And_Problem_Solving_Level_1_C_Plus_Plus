# Problem 15: Calculate the Area of a Rectangle

## Description
This C++ program reads the width and height of a rectangle from the user, calculates the area, and displays the result. The program includes the following functions:
- `ReadDimensions` to collect the width and height of the rectangle,
- `CalculateArea` to compute the area of the rectangle,
- `PrintResult` to display the calculated area.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.
- **Function `ReadDimensions`**: Prompts the user to enter the width and height of the rectangle and stores them in variables passed by reference.
- **Function `CalculateArea`**: Multiplies the width by the height to calculate the area of the rectangle and returns the result.
- **Function `PrintResult`**: Takes the calculated area and prints it in a formatted message.
- **Function `main`**: Manages the program flow by calling `ReadDimensions` to input the width and height, `CalculateArea` to compute the area, and `PrintResult` to display the result.


## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem15 problem15.cpp
   ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem15
   ```

   The program will prompt you to enter the width and height of a rectangle, then display the area.

## Example

If you enter `10` and `5`, the program will output:
```
The area of your rectangle is: 50
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

