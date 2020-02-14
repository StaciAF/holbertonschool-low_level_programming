#include "holberton.h"
/**
* print_triangle - prints a triangle
* @size: states size of triangle
*
* Description: prints triangles followed by new line
* Return: in main
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = size - i; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
