#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees Mem for previous Task
 *@grid: the previous grid
 *@height: size of column
 *
 * Return: Pointer to grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
