
# Problem 2: Read Name and Print It

## Description
This C++ program demonstrates how to read a user's name from the standard input and print it in a formatted message. It includes two main functions: `ReadName` to obtain the user's input and `PrintName` to display it.

## Code Explanation
- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Function `ReadName`**: Prompts the user to enter their name and returns it as a `string`. It uses `getline` to read the entire line of input.
- **Function `PrintName`**: Takes a `string` argument and prints it in a formatted message.
- **Function `main`**: Calls `ReadName` to get the user's name and then passes it to `PrintName` to display it.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem2 problem2.cpp
2. **Execute**: Run the compiled program:
    ```bash
    ./problem2
It will prompt you to enter your name. After entering it, the program will display:

```
Your name is : [Your Name]
```
## Example
If you enter Alice when prompted, the output will be:
```
Your name is : Alice
```
## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
