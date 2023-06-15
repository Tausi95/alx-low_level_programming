# 0x0C-More_malloc_free

This repository contains several C code snippets that demonstrate different functionalities using the `malloc` and `free` functions, building upon the concepts covered in the previous `0x0B` repository.

## List of Code Snippets

1. **malloc_checked.c**: Implementation of the `malloc_checked` function, which dynamically allocates memory and checks for allocation errors. It also includes an `_putchar` function for printing error messages.

2. **string_nconcat.c**: Implementation of the `string_nconcat` function, which concatenates two strings with a specified length. It uses the `memcpy` function to copy the characters from the input strings to the resulting string.

3. **array_range.c**: Implementation of the `array_range` function, which creates an array of integers with a specified range. It dynamically allocates memory for the array and populates it with consecutive integers within the specified range.

4. **_realloc.c**: Implementation of the `_realloc` function, which reallocates memory for a previously allocated block. It allows resizing the memory block while preserving its contents. The function uses the `malloc`, `free`, and `memcpy` functions for memory operations.

5. **print_result.c**: Implementation of functions `print_result` and `multiply_numbers`, which perform multiplication of two positive integers and print the result. The `print_result` function converts the result to a string and prints it using the `_putchar` function.

6. **main.c**: An example main file that demonstrates the usage of some of the implemented functions. It includes the necessary function prototypes and the `main` function that takes two positive integers as command-line arguments and performs multiplication using the `multiply_numbers` function.

## Usage

Each code snippet can be compiled and run separately using a C compiler. Below are the compilation commands for each file:

```bash
gcc -Wall -Wextra -pedantic -Werror -o malloc_checked malloc_checked.c
gcc -Wall -Wextra -pedantic -Werror -o string_nconcat string_nconcat.c
gcc -Wall -Wextra -pedantic -Werror -o array_range array_range.c
gcc -Wall -Wextra -pedantic -Werror -o _realloc _realloc.c
gcc -Wall -Wextra -pedantic -Werror -o print_result print_result.c
gcc -Wall -Wextra -pedantic -Werror -o main main.c

