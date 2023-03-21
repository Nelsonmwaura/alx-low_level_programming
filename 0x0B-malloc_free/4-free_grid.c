#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - it frees a 2Dimensional grid previously created by
* alloc_grid function.
* @grid: the grid to free
* @height: the height of grid
* Return: returns void
*/

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
