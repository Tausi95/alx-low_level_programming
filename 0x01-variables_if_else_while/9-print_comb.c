#include <stdio.h>

/**
* main - Entry point to the digit combo program
* Return: 0 always (success)
*/

int main(void)

{

int y = 0;

while (y < 10)

{

putchar(y + '0');
if (y < 9)

{

putchar(',');
putchar(' ');

}

y++;

}

putchar('\n');

return (0);

}
