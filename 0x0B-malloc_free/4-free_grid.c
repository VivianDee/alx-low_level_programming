#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously
 *created by your alloc_grid function.
 * @grid: allocated space to be freed
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
