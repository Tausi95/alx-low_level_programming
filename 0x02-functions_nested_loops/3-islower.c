#include "main.h"

/**
* _islower - checks for lowercase character
* Return: 1 if c is lowercase otherwise return 0
*@c: the caracter to check
*/

int _islower(int c)

{


	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
