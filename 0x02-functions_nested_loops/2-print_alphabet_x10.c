#include "holberton.h"
#define LA 97
#define LZ 122
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Description: function prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int newline = '\n';
	int i;

	i  = 0;
	while (i <= 9)
	{
	for (c = LA; c <= LZ; c++)
	{
		_putchar(c);
	}
	i++;
	_putchar(newline);
	}

}
