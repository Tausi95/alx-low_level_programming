#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if:
 * - There is one or more chars in the string @b that is not 0 or 1
 * - @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i, len;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += (b[i] - '0') * base;
		base *= 2;
	}

	return (result);
}
