#include "main.h"

/**
* print_sign - a function that prints sign of character
* Return: 1 and + if n > 0 otherwise -1 and - if n < 0
* @n: checks the sign of a character either positive or negative
*/

int print_sign(int n)

{
	if (n > 0)

	{

		_putchar('+');
		return (1);

	}

	else if (n == 0)

	{

		_putchar('0');
		return (0);

	}

	else

	{
		_putchar('-');
		return (-1);

	}

}
