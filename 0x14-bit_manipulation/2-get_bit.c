#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at given index
 * @n: given value
 *
 * @index: index starting from 0
 *
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
		return ((n >> index) & 1);
}
