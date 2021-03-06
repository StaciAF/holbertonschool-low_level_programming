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
	unsigned long int count = 0;
	unsigned long int x;

	x = n ^ m;

	while (x > 0)
	{
		count = count + (x & 1);
		x >>= 1;
	}

	return (count);
}
