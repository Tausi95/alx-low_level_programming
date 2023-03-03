#include "main.h"

/**
* _strcat - Concatenates two strings
* @src: The destination string
*@dest: The source string
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')

		dest_len++;


	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;

	}

	dest[dest_len + i] = '\0';

	return (dest);
}
