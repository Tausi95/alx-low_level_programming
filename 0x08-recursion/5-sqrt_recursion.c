#include "main.h"

int sqrt_function(int i, int j);

/**
* _sqrt_recursion - a function that returns the square root value of a number
* @i: the number to be operated on
* Return: returns the square root of i as an int
*/
int _sqrt_recursion(int i)
{
	if (i < 0)
		return (-1);
	return (sqrt_function(i, 0));
}

/**
 * sqrt_function - recurses to find the natural
 * square root of a number
 * @i: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */
int sqrt_function(int i, int j)
{
	if (j * j > i)
		return (-1);
	if (j * j == i)
		return (i);
	return (sqrt_function(i, j + 1));
}
