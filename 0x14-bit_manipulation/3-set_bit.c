#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: given integer
 *
 * @index: indexed bit to be changed
 *
 * Return: 1 for success or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
