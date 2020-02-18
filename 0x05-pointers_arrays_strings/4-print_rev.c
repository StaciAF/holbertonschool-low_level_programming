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

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
