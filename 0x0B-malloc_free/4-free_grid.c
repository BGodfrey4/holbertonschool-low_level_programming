#include "main.h"
#include <stdlib.h>

/**
*free_grid - is just free grids allocated memory.
*@grid: is just the grid.
*@height: is the grids height.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
