#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - A function that print a string
* @separator: A string to be printed
* @n: Number of strings
* ...: A varibale number of strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;

	va_list args;

	va_start(args, n);

	for (j = 0; j < n; j++)

	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		} else
			{
				printf("%s", str);
			}

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
