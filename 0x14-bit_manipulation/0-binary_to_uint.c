#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of chars to be converted if binary
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int base = 1;
	int i = 0;
	unsigned int result = 0;


	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		result = result + ((b[i] - '0') * base);
		base = base * 2;
		i--;
	}
	return (result);
}
