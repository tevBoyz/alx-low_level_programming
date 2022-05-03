#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees an occupied grid
 * @grid: grid to be de allocated
 * @height: height of grid
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}

