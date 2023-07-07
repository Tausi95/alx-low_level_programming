#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Return: None
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 0)
		{
			mask = mask >> 1;
			continue;
		}

		if ((n & mask) != 0)
		{
			flag = 1;
			_putchar('1');
		}
		else
		{
			flag = 1;
			_putchar('0');
		}

		mask = mask >> 1;
	}

	if (flag == 0)
	_putchar('0');
}
