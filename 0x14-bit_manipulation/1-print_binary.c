#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to be converted to binary
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	int cnt, result;
	unsigned long int num = n;

	if (num == 1)
	{
		printf("1");
		return;
	}
	if (num == 0)
	{
		printf("0");
		return;
	}

	for (cnt = 15; cnt >= 0; cnt--)
	{
		result = n & (1 << cnt);
		if (result)
		{
			printf("1");
		}
		else
			printf("0");
	}

}
