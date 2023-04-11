#include "main.h"
#include <stdlib.h>

/**
 * free_grid: frees a 2 dimensional array
 * @grid: freed memory block
 * @height: height of the memory block
 * Return: Always void
 */

void free_grid(int **grid, int height)
{
	int x;
	
	for (x = 0; x < height; x++)
	free(grid[x]);
	
	free(grid);
}
