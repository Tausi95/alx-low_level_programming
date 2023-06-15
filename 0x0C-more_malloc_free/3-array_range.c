#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: a varibale holding minimum value of integers
 * @max: a variable holidng maximum value of integers
 *
 * Return: array
 */

int  *array_range(int min, int max)
{
	int x, *array, y = max - min + 1;

	if (min > max)
		return (NULL);

	array  = malloc(y * sizeof(*array));

	if (array == 0)
		return (NULL);

	for (x = 0; x < y; x++)
	{
		array[x] = min++;
	}

	return (array);
}
