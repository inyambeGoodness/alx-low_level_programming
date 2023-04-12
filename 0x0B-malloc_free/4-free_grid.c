#include "main.h"
#include <stdlib.h>

/**
 * free_grid - it frees a 2 dimensional grid.
 * @grid: a multidimensional array of integers.
 * @height: the height of the grid.
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
