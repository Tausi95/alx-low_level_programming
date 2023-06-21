# 0x0F. C - Function Pointers

This repository contains C programs that demonstrate the usage of function pointers and related concepts.

## Files

- `main.c`: The main program that demonstrates the functionality of the implemented functions.
- `main.h`: Header file containing function prototypes and necessary includes.
- `3-calc.c`: File containing implementation of arithmetic operations and `get_op_func` function.
- `3-calc.h`: Header file containing function prototypes for arithmetic operations and `get_op_func`.
- `function_pointers.h`: Header file containing function prototypes for the function pointer examples.
- `README.md`: This file.

## Description

- `main.c`:
  - The `main` function serves as the entry point of the program.
  - It takes command-line arguments to perform arithmetic operations using function pointers.
  - If the correct number of arguments is not provided, it displays an error and exits.
  - It calls the `get_op_func` function to select the appropriate arithmetic operation based on the operator provided.
  - The result is printed to the standard output.

- `main.h`:
  - This header file contains function prototypes and necessary includes for the `main.c` program.

- `3-calc.c`:
  - This file contains the implementation of arithmetic operations and the `get_op_func` function.
  - The arithmetic operations (`op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`) perform addition, subtraction, multiplication, division, and modulus operations, respectively.
  - The `get_op_func` function selects the correct arithmetic operation based on the operator provided as an argument.
  - It returns a function pointer to the selected operation.

- `3-calc.h`:
  - This header file contains function prototypes for arithmetic operations and the `get_op_func` function in `3-calc.c`.

- `function_pointers.h`:
  - This header file contains function prototypes for the function pointer examples (`print_name`, `array_iterator`, `int_index`) described in the prompt.

## Usage

To compile and run the programs, follow these steps:

1. Open a terminal and navigate to the directory containing the source files.
2. Use the following command to compile the program:
3. gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 3-calc.c -o calc


