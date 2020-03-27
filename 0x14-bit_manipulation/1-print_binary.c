#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

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
		_putchar('1');
		return;
	}
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	for (cnt = 15; cnt >= 0; cnt--)
	{
		result = n & (1 << cnt);
		if (result)
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}

}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

