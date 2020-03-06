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

	b = malloc(sizeof(int) * (max - min + 1));
	if (b == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
{
	b[i] = min;
}
	return (b);
}
