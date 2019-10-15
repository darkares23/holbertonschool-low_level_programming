#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * alloc_grid - returns a pointer to a 2 
 * dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: 2 dimensional array of integers or null
 */

int **alloc_grid(int width, int height)
{
int height_len, i, width_len, j;
int **grid;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (height_len = 0; height_len < height; height_len++)
{
grid[height_len] = malloc(width * sizeof(int));
if (grid[height_len] == NULL)
{   
for (j = 0; j < height_len; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (width_len = 0; width_len < width; width_len++)
grid[i][width_len] = 0;
}
return (grid);
}
