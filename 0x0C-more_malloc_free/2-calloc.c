#include <stdlib.h>
/**
 * _calloc -A function that allocates memory for an array using malloc function
 * @nmemb: array size
 * @size: bytes of each
 *
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == 0)
		return (NULL);

	for (j = 0; j < nmemb * size; j++)
		array[j] = 0;

	return ((void *)array);
}
