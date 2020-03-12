#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * int_index - searches for an integer
 *
 * @array: array to be searched for integer
 *
 * @size: size of given array
 *
 * @cmp: pointer to the function to be used to compare int values
 *
 * Return: Index of first matching element or -1 for failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]))
		return (i);
	}
		return (-1);
}
