#include <stdio.h>

/**
*main-a program that print size of variables using the printf function.
*Return: 0(success)
*/

int main(void)

{

char a;

int b;

long int c;

long long int d;

float f;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));

printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));

printf("size of long int: %ld byte(s)\n", (long)sizeof(c));

printf("size of long long int: %lld byte(s)\n", (long long)sizeof(d));

printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);

}
