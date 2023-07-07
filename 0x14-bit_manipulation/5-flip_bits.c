#include <stdio.h>

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference != 0)
	{
		if ((difference & 1) == 1)
			count++;

		difference >>= 1;
	}

	return (count);
}
