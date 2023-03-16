#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free up a 2d grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
