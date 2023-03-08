#include "main.h"

int sqrt_function(int n, int x);

/**
* _sqrt_recursion - a function that returns the square root of a number
* @n: the number to be operated on
* Return: returns the square root of n as an int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_function(n, 0));
}

/**
 * sqrt_function - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @x: iterator
 *
 * Return: the resulting square root
 */
int sqrt_function(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqrt_function(n, x + 1));
}
