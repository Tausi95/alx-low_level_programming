#include <stdlib.h>
#include <string.h>

/**
* char *string_nconcat - A fuction that concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: The variable with the length of a string
* Return: return a number if successful
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	size_t length_1, length_2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_1 = strlen(s1);
	length_2 = strlen(s2);

	if (n >= length_2)
		n = len2;

	result = (char *) malloc(length_1 + n + 1);
	if (result == NULL)
		return (NULL);

	memcpy(result, s1, length_1);
	memcpy(result + length_1, s2, n);
	result[length_1 + n] = '\0';

	return (result);
}
