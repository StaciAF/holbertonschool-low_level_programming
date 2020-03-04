#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function that frees 2D grid from alloc_grid
 * @grid: given array
 *
 * @height: int of height
 *
 * Description: frees 2 dimensional grid from alloc_grid
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
