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
	int i = 0;
	int c = 0;
	int sl = 0;

	while (str[sl] != '\0')
	{
		sl++;
	}
		i = 0;
	while (str[i] != '\0')
		i++;
	for (c = 0; c < i; c++)
	{
		if (c < sl / 2)
			;
		else
			_putchar(str[c]);
	}
	_putchar('\n');


}
