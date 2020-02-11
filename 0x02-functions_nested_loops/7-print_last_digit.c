#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: number to be evaluated
 *
 * Description: prints value of last digit
 * Return: value of last digit
 */

int print_last_digit(int n)
{

	n = n % 10;
	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
	}
	else
	{
	_putchar(n + '0');
	}
	return (n);

}
