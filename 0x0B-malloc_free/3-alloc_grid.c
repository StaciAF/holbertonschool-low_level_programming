#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2D array of int
 *
 * @width: width of the grid - columns
 *
 * @height: height of the grid - rows
 *
 * Description: returns a pointer to a 2D array if int
 * Return: pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **new;
	int i, p;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	new = malloc(sizeof(int*) * height);

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		new[i] = malloc(sizeof(int) * width);
		if (new[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(new[i]);
			}
			free(new);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (p = 0; p < width; p++)
			new[i][p] = 0;
	}
	return (new);
}
