#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * Jump_search - a function that searches for a value in an array using the jump serach
 * @value: Value being searched for
 * @array: array to search in
 * @size: size of the array
 *
 * Return: Index of the value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, forw, curr;
	int result = -1;

	if (array == NULL)
		return (result);

	jump = (size_t)sqrt(size);
	curr = 0;

	while (curr < size)
	{
		forw = curr + jump;
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		if (forw >= size - 1 || array[forw] > value)
		{
			printf("value found between indexes [%ld] and [%ld]\n", curr, forw);
			i = curr;

			while (i <= forw && i < size)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return ((int)i);
				i++;
			}
			break;

		}
		curr = forw;
	}
	return (result);
}
