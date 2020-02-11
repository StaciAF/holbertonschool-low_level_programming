#include "holberton.h"
#define LA 97
#define LZ 122
/**
 * print_alphabet - prints alphabet in lower case
 *
 * Description: prints in all lower case the alphabet a-z
 */
void print_alphabet(void)
{

	char c;
	int newline = '\n';

	for (c = LA; c <= LZ; c++)
		{
		_putchar(c);
		}

	_putchar(newline);
}
