#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid createed
 * @grid: pointer to pointer
 * @height: height of gold
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
