#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that checks the code for ALX School students.
 * @ac: integer
 * @av: character
 * Return: Null or string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, l, buffl;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = j = l  = buffl = 0;

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	ptr = (char *) malloc(l * sizeof(char) + ac + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buffl++)
			ptr[buffl] = av[i][j];
		ptr[buffl] = '\n';
		buffl++;
	}
	ptr[buffl] = '\0';
	return (ptr);
}
