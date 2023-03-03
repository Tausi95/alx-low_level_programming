#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: integer inpuT
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
