# 0x18-dynamic_libraries

This repository contains a dynamic library named `libdynamic.so` that implements various functions commonly used in C programming. The library is compiled dynamically and can be linked with other programs to provide the functionality of these functions.

## Functions Implemented

The library implements the following functions:

- `_putchar`
- `_islower`
- `_isalpha`
- `_abs`
- `_isupper`
- `_isdigit`
- `_strlen`
- `_puts`
- `_strcpy`
- `_atoi`
- `_strcat`
- `_strncat`
- `_strncpy`
- `_strcmp`
- `_memset`
- `_memcpy`
- `_strchr`
- `_strspn`
- `_strpbrk`
- `_strstr`

## Compilation and Usage

To compile the dynamic library, you can use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o libdynamic.so *.c

About

This library is created as part of a learning journey in C programming. It's meant to showcase the implementation of various functions and the concept of dynamic libraries. Feel free to explore the source code and use the library in your projects.

Created by Chancy Tsonga - alx student
