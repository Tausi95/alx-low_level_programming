0x10. C - Variadic functions

Sure! Here's a brief but well-documented README.md file for the 0x10. C Variadic_functions project:
0x10. C Variadic_functions

This project contains C programs that demonstrate the use of variadic functions. Variadic functions are functions that can accept a variable number of arguments.
Files

    0-sum_them_all.c: Contains the sum_them_all function that returns the sum of a variable number of integers.
    1-print_numbers.c: Contains the print_numbers function that prints a variable number of integers.
    2-print_strings.c: Contains the print_strings function that prints a variable number of strings.
    3-print_all.c: Contains the print_all function that prints a variable number of arguments based on a given format.
    variadic_functions.h: Header file that contains the function prototypes and struct definition used in the project.

Function Documentation
0. int sum_them_all(const unsigned int n, ...)

Returns the sum of a variable number of integers.

    n: The number of integers to sum.
    ...: Variable number of integers to sum.

1. void print_numbers(const char *separator, const unsigned int n, ...)

Prints a variable number of integers.

    separator: The string to be printed between numbers.
    n: The number of integers to print.
    ...: Variable number of integers to print.

2. void print_strings(const char *separator, const unsigned int n, ...)

Prints a variable number of strings.

    separator: The string to be printed between strings.
    n: The number of strings to print.
    ...: Variable number of strings to print.

3. void print_all(const char * const format, ...)

Prints a variable number of arguments based on a given format.

    format: The format string that specifies the types of the arguments.
    ...: Variable number of arguments to print.
