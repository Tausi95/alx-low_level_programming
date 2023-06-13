#include "main.h"
/**
* _islower - a function that checks for lowercase characters
*@c: A character to be checked
* Return: return 1 if lowercase, otherwose 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1); /* c is lowercase here */

	return (0); /* c is not lowercase here */
}

