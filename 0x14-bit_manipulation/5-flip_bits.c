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

	for (z = n ^ m; z != 0; z = z & (z - 1))
		flips++;

	return (flips);
}
