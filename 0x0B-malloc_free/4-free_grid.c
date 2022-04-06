#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees memory occupied by grid
 * @grid: the location to be freed
 * @height: numbers of rows of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	if (grid == 0 || height == 0)
		return;
	for (index = 0; index <= height ; index++)
	{
		free(grid[i]);
	}

	free(grid);

}
