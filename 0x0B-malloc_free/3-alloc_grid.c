#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - it will allocate a grid of zeros.
*@width: is just the grids width.
*@height: this is the grid's height.
*Return: is just the pointer to the grid.
*/

int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	for (h = 0; h < height; h++)
{
	grid[h] = malloc(sizeof(int) * width);
	if (grid[h] == NULL)
{
	for (; h >= 0; h--)
{
	free(grid[h]);
}
	free(grid);
	return (NULL);
}
}
	for (h = 0; h < height; h++)
	for (w = 0; w < width; w++)
	grid[h][w] = 0;
	return (grid);
}
