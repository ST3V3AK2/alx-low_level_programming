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

	grid = malloc(sizeof(list) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
