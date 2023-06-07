#include "main.h"

/**
* print_last_digit - a function to generate the last digit of a number
* @n: checks number and print last digit
* Return: 0 if success otherwise 1 if not last digit
*/

int print_last_digit(int n)

{

	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);

	else

		last_digit = n % 10;


	_putchar(last_digit + '0');
	_putchar('\n');

	return (0);
}
