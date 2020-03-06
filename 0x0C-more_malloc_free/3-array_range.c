#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: beginning point in array
 *
 * @max: ending point in array
 *
 * Description: function creates array of integers
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *b;
	int i;

	if (min > max)
		return (NULL);

	b = malloc(sizeof(int) * max);
	if (b == NULL)
	{
		free(b);
		return (NULL);
	}

	i = min;
	while (i <= max && b[i] != '\0')
	{
		i++;
	}
	return (b);
}
