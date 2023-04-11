#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 *array of integers.
 * @width: Number of rows
 * @height: Number of columns
 *
 * Return:
 * - A two dimensional array
 * - NULL (failure)
 */

int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(width * sizeof(int));
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

		if (grid == NULL)
			return (NULL);
		for (i = 0; i < height; ++i)
		{
			grid[i] = (int *)malloc(height * sizeof(int));
			if (grid[i] == NULL)
				return (NULL);
		}
		return (grid);
	return (NULL);
}
