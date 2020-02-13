#include "holberton.h"
/**
* times_table - prints the 9 times table
*
* Description - starts with 0 prints 9 times table
* Return: in main function
*/


void times_table(void)
{
	int side, top, x;

for (side = 0; side <= 9; side++)
{
	_putchar('0');

	for (top = 1; top <= 9; top++)
	{
		_putchar(',');
		_putchar(' ');
		x = top * side;
	if ((x / 10) == 0)
	{
		_putchar(' ');
		_putchar(x + '0');
	}
	else
	{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
			}
	if (top == 9)
	{
		_putchar('\n');
	}
	}
}
}
