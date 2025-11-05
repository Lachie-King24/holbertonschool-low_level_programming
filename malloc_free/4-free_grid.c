#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory from grid in prev func
 * @grid: grid to free
 * @height: height of grid
 * Return: nothing if NULL
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
