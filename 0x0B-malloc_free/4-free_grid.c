#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: pointer to 2 dimensional grid
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
