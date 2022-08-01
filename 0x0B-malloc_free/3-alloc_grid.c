#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - allocates two dimensional arrays of int
 * @widht: widht of array
 * @height: height of array
 *@Return: Pointer to the array allocated.
 **/

int **alloc_grid(int width, int height)
{
	int x, y;
	int **grd;

	if (width < 1 || height < 1)
		return (NULL);
	grd = malloc(height * sizeof(int *));

	for (x = 0; x < height; x++)
	{
		grd[x] = malloc(width * sizeof(int));
		if (grd[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grd[x]);
			free(grd);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grd[x][y] = 0;
		}
	}

	return (grd);
}
