#include <stdio.h>

/**
* main - Entry point of the program for base 16 in lowercase
* Return: 0 on success
*/

int main(void)

{

int y;

for (y = 0; y < 10; y++)
putchar(y + '0');

for (y = 'a'; y < 'g'; y++)
putchar(y);

putchar('\n');


return (0);

}
