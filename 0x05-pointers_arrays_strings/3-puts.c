#include "main.h"

/**
* _puts - prints a string followed by a new line character
* @str: prints string charachers
* Return: null
*/

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
