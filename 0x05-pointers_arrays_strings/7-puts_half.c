#include "holberton.h"
/**
* puts_half - prints half of a string
* @str: string given
*
* Description: function that prints half of a string followed by new line
* Return: in main
*/

void puts_half(char *str)
{
	int c = 0;
	int sl = 0;

	while (str[sl] != '\0')
	{
		sl++;
	}

	if (sl % 2 == 0)
	{
		c = sl / 2;
	}
	else
c = sl - ((sl - 1) / 2);

while (c < sl)
{
	_putchar(str[c]);
	c++;
}
	_putchar('\n');
}
