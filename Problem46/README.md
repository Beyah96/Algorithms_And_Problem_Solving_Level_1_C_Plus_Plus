# Problem 46 : Print Letters from A to Z

## Description
This C++ program prints all the uppercase letters from 'A' to 'Z'. It uses a loop to iterate through 
the ASCII values of the uppercase letters and prints each letter on a new line. The program includes 
the following functions:
- `PrintLetterAtoZ` to print all uppercase letters from 'A' to 'Z'.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>`, although `<cmath>` is not used in this case.
- **Function `PrintLetterAtoZ`**: Uses a `for` loop to iterate through the ASCII values of the letters 'A' to 'Z'. The ASCII value of 'A' is 65, so the loop starts from 65 and ends at 90, printing each corresponding character.
- **Function `main`**: Calls the `PrintLetterAtoZ` function to print the uppercase alphabet.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem46 problem46.cpp
  ```
2. **Execute**: Run the compiled program:
   ```bash
   ./problem45
   ```
The program will print all uppercase letters from `A` to `Z`, each on a new line.

## Example
```
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z
```

## Requirements
- C++ compiler
- Basic understanding of input/output and conditional logic in C++

