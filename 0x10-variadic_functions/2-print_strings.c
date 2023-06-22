#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - a function that print a string
* @separator: A string to be printed
* @n: number of string
* ...: a varibale number of strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)

	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		} else
			{
				printf("%s", str);
			}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
