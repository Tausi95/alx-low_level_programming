#include <stdio.h>

/**
* main - Entry point of the numbering program
* Return: 0 on success
*/

int main(void)

{

int num;

num = 0;
while (num < 10)

{

putchar(num + '0');

num++;

}

putchar('\n');


return (0);

}
