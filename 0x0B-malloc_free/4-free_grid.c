#include "main.h"

/**
 * free_grid - frees a 2-d grid
 * @grid : 2-d grid
 * @height: number of lists in 2-d grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; grid[i][j] != NULL; j++)
			free(grid[i][j]);
		free(grid[i][j]);
		free(grid[i]);
	}
	free(grid);
}
