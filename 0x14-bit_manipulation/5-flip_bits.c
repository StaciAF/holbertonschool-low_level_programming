#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - counts how many bits flipped to get to new number
 * @n: first number to be compared
 *
 * @m: second number to be compared
 *
 * Return: count of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned int z;

	if (m == 0 || n == 0)
		return (0);

	for (z = n ^ m; z != 0; z = z >> 1)
		flips = flips + (z & 1);

	return (flips);
}
