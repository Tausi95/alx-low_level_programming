#include "main.h"
#include <stdlib.h>
/**
* create_array - A function that creates an array of characters and
* initializes it with a specific char
* @size: The size of the array
* @c: The character to create the array
* Return: returns a pointer to the array,
* returns NULL if size = 0 or if malloc fails
*/

char *create_array(unsigned int size, char c)
{
	/* Check if size is 0 */
	char *arr;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory to the array arr*/

	arr = malloc(size * sizeof(char));

	/* Check if allocation was successful */
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Initialize the array, arr with the specified char */
	for (j = 0; j < size; j++)
	{
		arr[j] = c;
	}

	return (arr);
}
