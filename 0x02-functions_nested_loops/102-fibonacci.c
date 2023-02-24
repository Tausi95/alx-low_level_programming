#include <stdio.h>
/**
* main - Entry to the fibanocci numbers program
* Return: 0 always success
*/

int main(void)
{
	int i;
	long long fib[50]; /* array to store Fibonacci numbers */

	fib[0] = 1; /* first two numbers in the sequence */
	fib[1] = 2;

	printf("%lld, %lld, ", fib[0], fib[1]);

	/* compute and print the remaining 48 numbers */

	for (i = 2; i < 50; i++)
	{

		fib[i] = fib[i - 1] + fib[i - 2]; /* compute the i-th number */
		printf("%lld", fib[i]); /* print the i - th number */
		if (i < 49)
		{
			printf(", "); /* add comma and space after each number (except the last) */
		}
	}

	printf("\n");
	return (0);
}
