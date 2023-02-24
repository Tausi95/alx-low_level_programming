#include <stdio.h>

/**
* main - Entry to the program for the fibonacci sequence algorithm
* Return: 0 always success
*/

int main(void)
{

	int a = 1, b = 2;
	int i;

	printf("%d, %d", a, b);
	for (i = 2; i < 98; i++)
	{

		int temp = a + b;

		a = b;
		b = temp;
		printf(", %d", b);
	}

	printf("\n");
	return (0);
}

