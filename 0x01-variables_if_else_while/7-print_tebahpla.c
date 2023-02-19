#include <stdio.h>

/**
* main - Entry point for the reverse alphabet program
* Return: 0 always (success)
*/

int main(void)

{

char x;

for (x = 'z'; x >= 'a'; x--)
putchar(x);

putchar('\n');

return (0);

}
