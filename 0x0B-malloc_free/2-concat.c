#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: Null of s1
 */
char *str_concat(char *s1, char *s2)
{
        char *ptr;
        int i, j, size, t;

        if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }
        for (i = 0; s1[i]; i++)
                ;
        for (j = 0; s2[j]; j++)
                ;
        size = i + j + 1;
        ptr = malloc(size * (sizeof(char));
        if (ptr == NULL)
        {
                return (NULL);
        }
        for (t = 0; t < size; t++)
               t < i ? (ptr[t] = s1[t]) : (ptr[t] = s2[t - i]);
        return (ptr);
}
