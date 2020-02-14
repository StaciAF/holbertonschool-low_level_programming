#include "holberton.h"
/**
* print_square - prints a square
* @size: size of square
*
* Description: prints a square of a specific
*/

void print_square(int size)
{
	int i = 0;

		for (i = 0; i > size; i++)
	{
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
