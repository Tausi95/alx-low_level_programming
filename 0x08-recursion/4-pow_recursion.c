#include "main.h"

/**
* _pow_recursion - a function that returns the value of x raised to the
* power of y
* @x: the base integer
* @y: the exponent
*Return: returns x raised to the power of y as an int
*/
int _pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y % 2 == 0)
	{
		int temp = _pw_recursion(x, y / 2);
		return (temp * temp)
	}
	else
	{
		int temp = _pow_recursion(x, y / 2);
		return (x * temp * temp);
	}
}
