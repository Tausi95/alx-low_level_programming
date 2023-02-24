#include <stdio.h>

/**
* main - Entry to the program
* Return: 0 always
*/

int main(void)
{

	int a = 1, b = 2;

	int sum_even = 2;


	while (b <= 4000000)
	{

		int temp = a + b;

		a = b;
		b = temp;
		if (b % 2 == 0)
		{
			sum_even += b;
		}
	}

	printf("%d\n", sum_even);
	return (0);
}
