#include "main.h"
#include <stdlib.h>

/**
 * free_gride - Free the grid
 *
 * @grid: The grid
 * @h: The height of the grid
 */

void free_gride(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

/**
 * alloc_grid - Alloc a 2 dimentional array of int
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: The grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free_gride(grid, i);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
