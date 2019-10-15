#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid:  grid
 * @height: height of grid
 * Return: 2 dimensional array of integers or null
 */

void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}