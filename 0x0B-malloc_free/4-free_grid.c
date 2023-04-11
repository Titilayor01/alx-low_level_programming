#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the two dimensional array to be freed
 * @height: height of the grid
 * @width: width of the grid
 */

void free_grid(int **grid, int height)

{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	for (index = 0; index < width; index++)
		free(grid[index]);

	free(grid);
}
