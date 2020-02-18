#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Description: prints a string in reverse, followed by new line
 * Return: in main
 */

void print_rev(char *s)
{
	int i;
	int c;

	while (s[i] != '\0')
	{
		i++;
	}
	for (c = i - 1; c >= 0; --i)
	{
		_putchar(s[c = i - 1]);
	}
	_putchar('\n');

}
