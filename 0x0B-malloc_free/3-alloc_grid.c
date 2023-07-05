#include "main.h"

/**
 * alloc_grid - creates a 2 dimentional array
 * @width: the length of each list in the array
 * @height: the number of lists in the array
 *
 * Return: pointer to 2-D array and NULL if process fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int *list;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	list = malloc(sizeof(int) * width);
	grid = malloc(sizeof(list) * height);
	if (grid == NULL || list == NULL)
	{
		free(list);
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
