#include "main.h"

/**
* _strlen_recursion - Function that returns the length of a string
* @s: The string  that will be counted
* Return: returns the an int in for as length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
