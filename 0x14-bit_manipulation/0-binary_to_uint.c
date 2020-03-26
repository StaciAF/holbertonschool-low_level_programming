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
/**
unsigned int binary_to_uint(const char *b)
{
	const char *new = b;
	unsigned int dec_value = 0;
	int base = 1;
	int len;
	int i;

	if (b == NULL)
		return (0);

	for (len = 0; b;)
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
			dec_value = decimal * 2;
		base = base * 2;
	}
	return (dec_value);
}
*/
