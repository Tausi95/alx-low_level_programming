#include "main.h"
#include <stdio.h>

/**
* main - Entry to the program
* Return: 0 always
*/


int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{

			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
