#include "holberton.h"
/**
* _puts - prints a string
*
*@str: string to be printed
*
* Description: prints a string followed by new line
* Return: in main
*/

void _puts(char *str)
{
	int i, c;

	i = 0;
	while (str[i] != '\0')
{
	i++;
}

for (c = 0; c < i; c++)
{
	_putchar(str[c]);
}
_putchar('\n');
}
