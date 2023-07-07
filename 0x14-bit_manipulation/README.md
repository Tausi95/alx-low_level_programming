0x14 Bit Manipulation in C

This repository contains C functions for performing bit manipulation operations. Bit manipulation involves working with individual
bits within binary representations of data. The provided functions offer functionality such as converting binary to unsigned int,
printing the binary representation of a number, extracting the value of a bit at a specific index, setting a bit to 1 at a given index, 
Clearing a bit to 0 at a given index, and counting the number of bits that need to be flipped to transform one number to another.

Functions

    unsigned int binary_to_uint(const char *b): Converts a binary number represented as a string to an unsigned int.
    void print_binary(unsigned long int n): Prints the binary representation of a number.
    int get_bit(unsigned long int n, unsigned int index): Returns the value of a bit at a given index.
    int set_bit(unsigned long int *n, unsigned int index): Sets the value of a bit to 1 at a given index.
    int clear_bit(unsigned long int *n, unsigned int index): Sets the value of a bit to 0 at a given index.
    unsigned int flip_bits(unsigned long int n, unsigned long int m): Returns the number of bits needed to flip to get from one number to another.

Usage

To use these functions, include the main.H header file and call the desired function with appropriate parameters. Each function has a specific purpose and
return value as described in its documentation.
