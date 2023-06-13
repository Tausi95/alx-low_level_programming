#include "main.h"

/**
* _isalpha - a function that checks the alphabetic character in a program
* @c: The alphabet character to be checked
* Return: return 1 if c is a letter, lowercase or uppercase, otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1); /* c is an alphabetic character in the prog */

	return (0); /* c is not an alphabetic character in the prog */
}
