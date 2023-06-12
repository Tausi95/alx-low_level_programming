#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that duplicates a string
 * @str: string
 * Return: Null or string
 */
char *_strdup(char *str)
{
	char *ptr_str;
	unsigned int x, y;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
		;
	x++;
	if (x < 1)
		return (NULL);
	ptr_str = malloc(sizeof(char) * x);
	if (ptr_str == NULL)
	{
		free(ptr_str);
		return (NULL);
	}
	for (y = 0; y < x; y++)
		ptr_str[y] = str[y];
	ptr_str[y] = '\0';

	return (ptr_str);
}
