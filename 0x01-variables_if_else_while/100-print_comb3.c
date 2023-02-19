#include <stdio.h>

/**
* main - Entry of the program for 2 number digt comb
* Return: 0 always (success)
*/

int main(void)

{

int n = 0;

while (n < 100)

{

int first_digit = n / 10;
int second_digit = n % 10;

if (first_digit < second_digit)

{

putchar(first_digit + '0');
putchar(second_digit + '0');

if (n < 89)

{

putchar(',');
putchar(' ');

}

}

n++;

}

putchar('\n');

return (0);

}
