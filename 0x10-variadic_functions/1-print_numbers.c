#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
* Return: return new line characteR
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;

	va_list args;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
