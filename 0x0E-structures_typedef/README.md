0X0E. C - STRUCTURES, TYPEDEF

This repository contains a C program that defines a struct dog with its basic information such as name, age, and owner. It also provides functions to initialize, print, create, and free instances of the dog structure.
Files

    dog.h: Header file that contains the definition of the struct dog and function prototypes.
    dog.c: Source file that implements the functions defined in dog.h.
    main.c: Source file that demonstrates the usage of the dog structure and its associated functions.
    README.md: This file, providing an overview of the project.

Usage

To use the dog structure and its functions, follow these steps:

    Include the dog.h header file in your C program: #include "dog.h".
    Compile your program with dog.c and main.c: gcc dog.c main.c -o program.
    Run the compiled program: ./program.

Function Descriptions

    void init_dog(struct dog *d, char *name, float age, char *owner): Initializes a variable of type struct dog with the given name, age, and owner values.
    void print_dog(struct dog *d): Prints the values of a struct dog variable, including its name, age, and owner.
    dog_t *new_dog(char *name, float age, char *owner): Creates a new dog_t struct with the specified name, age, and owner. Returns a pointer to the newly created struct.
    void free_dog(dog_t *d): Frees the memory allocated for a dog_t struct, including the name and owner strings.

Contributions

Contributions to this project are welcome! If you find any issues or have suggestions for improvements, please feel free to create an issue or submit a pull request 
