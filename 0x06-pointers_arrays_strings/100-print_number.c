#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Description: prints an integer
 * Return: nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n);
	}

	if (n == 0)
		_putchar('0');

	else
		_putchar(n);
}
