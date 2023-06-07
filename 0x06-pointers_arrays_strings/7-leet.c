#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	char *leet_str = str;
	char *letters = "aeotlAEOTL";
	char *leet_codes = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				leet_str[i] = leet_codes[j];
				break;
			}
		}
	}

	return (leet_str);
}
