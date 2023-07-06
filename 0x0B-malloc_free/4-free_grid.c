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
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
