#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string parameter
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palind - empty string
 * @ptr_str: pointer to string
 * @p: position
 * Return: boolean
 */

int palind(char *ptr_strs, int p)
{
	if (p < 1)
	{
		return (1);
	}

	if (*ptr_str == *(ptr_str + p))
	{
		return (palind(ptr_str + 1, p - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palind(s, len - 1));

}
