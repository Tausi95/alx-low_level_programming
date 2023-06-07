#include <stdio.h>

/**
* main - Entry to the program for the fibonacci sequence algorithm
* Return: 0 always success
*/

int main(void)
{

unsigned long long a = 1, b = 2, temp;
	int i;

	printf("%llu, %llu", a, b);

	for (i = 2; i < 98; i++)
	{

		temp = a + b;

		a = b;
		b = temp;
		printf(", %llu", b);
	}

	printf("\n");
	return (0);
}
