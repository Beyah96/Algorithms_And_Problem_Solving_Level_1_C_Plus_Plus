# Problem 6: Read and Print Full Name

## Description
This C++ program reads an individual's first name and last name, and then prints the full name in a specified order. The program includes three main functions:
- `ReadInfo` to collect the individual's first and last names,
- `GetFullName` to construct the full name in either the normal or reversed order,
- `PrintInfo` to display the full name.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Struct `stInfo`**: Defines a structure to hold the individual's first and last names.
- **Function `ReadInfo`**: Prompts the user to enter their first and last names. It returns an `stInfo` structure with the gathered data.
- **Function `GetFullName`**: Takes an `stInfo` structure and a `bool` indicating the order. If `reversed` is `true`, it returns the full name in the format "FirstName LastName". If `reversed` is `false`, it returns "LastName FirstName".
- **Function `PrintInfo`**: Takes a `string` containing the full name and prints it.
- **Function `main`**: Manages the flow by calling `ReadInfo` to gather the names, `GetFullName` to format the full name in the specified order, and `PrintInfo` to display the result.



## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem6 problem6.cpp
2. **Execute**: Run the compiled program:
    ```bash
    ./problem6

It will prompt you to enter your first name and last name. After entering them, the program will display your full name in the specified order.

## Example
If you enter `John` for the first name and `Doe` for the last name, and reversed is set to `true`, the output will be:
```
Your full name is : John Doe

```
If you enter `John` for the first name and `Doe` for the last name, and reversed is set to `false`, the output will be:
```
Your full name is : Doe John
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
