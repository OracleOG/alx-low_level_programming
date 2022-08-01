#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up allocated space.
 * **grid: pointer to two-dimensional string
 * height: height of the grid to be freed.
 * Return: void.
 **/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
