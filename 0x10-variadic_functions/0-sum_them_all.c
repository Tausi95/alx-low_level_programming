#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of parameters passed to a function
* ...: a variable number of parameter
* Return: return sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list args;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
