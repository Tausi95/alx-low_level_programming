#include "main.h"
#include <stdlib.h>

/**
 * free_grid -A function that frees a grid of integers
 * @grid: The address of the two dimensional grid
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
