#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - A function that helps to count the number of words in a string
 * @s: String to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, words;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}
/**
 * **strtow - A fucntion that splits a string into words
 * @str: A string to be split
 * Return: Pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, w, c = 0, start, end;

	while (*(str + len))
		len++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (w + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
