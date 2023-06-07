#include "main.h"

/**
* factorial - a function that returns the factorial of a given number
* @x: the number to be calculated
* Return: returns the value of x as an int 
*/
int factorial(int x) /* function definition */
{
	if (x < 0)
		return (-1);
	if (x == 0)
		return (1);
	return (x * factorial(x - 1));
}
