#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d array previously created
 * @grid: 2dimensional grid
 * @height: height dimension of grid
 *
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
