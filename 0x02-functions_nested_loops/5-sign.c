#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: the integer to check
 *
 * Description: checks integer and prints corresponding sign
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{

	if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else
		_putchar('-');
	return (-1);
}
