#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at index
 * @n: integer given
 *
 * @index: position given to set value to 0
 *
 * Return: 1 for success or -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
