#include "main.h"

/**
 * free_grid - frees a 2 dimentional array
 * @grid: 2 dimentional array
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
