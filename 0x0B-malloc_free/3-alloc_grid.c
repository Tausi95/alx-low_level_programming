#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that allocates memory for a grid of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: Null or the grid
 */
int **alloc_grid(int width, int height)
{
        int **ptr;
        int i, j;

        i = j = 0;
        if (height <= 0)
        {
                return (NULL);
        }
        ptr = (int **)malloc(height * sizeof(ptr));
        if (ptr == NULL)
        {
                free(ptr);
                return (NULL);
        }
        for (i = 0; i < height; i++)
        {
                ptr[i] = malloc(width * sizeof(int));
                if (ptr[i] == NULL)
                {
                        for (j = 0; j < width; j++)
                                free(ptr[j]);
                        free(ptr);
                        return (NULL);
                }
                for (j = 0; j < width; j++)
                {
                        ptr[i][j] = 0;
                }
        }
        return (ptr);


}
