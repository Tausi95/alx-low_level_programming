#include <stdio.h>

/**
*main - Entry to the simple alphabet print program
*Return: 0 (Always success)
*/

int main(void)

{
char a;

for (a = 'a'; a <= 'z'; ++a)

{

if (a == 'e' || a == 'q')
continue;

putchar(a);

}

putchar('\n');

return (0);

}
