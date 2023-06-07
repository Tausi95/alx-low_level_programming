#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the first character of the string
 * This function returns the number of characters in the string pointed
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0; /* initialize a counter variable to 0 */

	/* loop through the string until the null terminator is reached */
	while (*s != '\0')
	{

		length++; /* increment the counter for each character */
		s++; /* move to the next character */
	}


	return (length); /* return the final count */
}
