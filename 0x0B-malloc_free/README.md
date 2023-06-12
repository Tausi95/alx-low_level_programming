0x0B-malloc_free

This repository contains C programs that demonstrate the usage of dynamic memory allocation and deallocation using the malloc and free functions.
Files:

    create_array.c: A function that creates an array of characters and initializes it with a specific character.
        char *create_array(unsigned int size, char c)

    _strdup.c: A function that duplicates a string.
        char *_strdup(char *str)

    str_concat.c: A function that concatenates two strings.
        char *str_concat(char *s1, char *s2)

    alloc_grid.c: A function that allocates memory for a grid of integers.
        int **alloc_grid(int width, int height)

    free_grid.c: A function that frees the memory allocated for a grid of integers.
        void free_grid(int **grid, int height)

    argstostr.c: A function that concatenates all the arguments of the program into a single string.
        char *argstostr(int ac, char **av)

    strtow.c: A function that splits a string into words and returns an array of pointers to these words.
        char **strtow(char *str)

Description:

The programs in this repository showcase various aspects of memory management in C using dynamic memory allocation. They illustrate how to allocate memory for arrays, duplicate strings, concatenate strings, allocate memory for 2D arrays, and deallocate the memory when it is no longer needed using the malloc and free functions.

Feel free to explore the programs and use them as examples for understanding and practicing dynamic memory allocation in C.
Compilation:

To compile the programs, use a C compiler such as GCC with the following command:

gcc -Wall -Wextra -Werror -pedantic <filename.c> -o <output_file>
