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
	for (c = 0; c < sl; c++)
	{
		if (c % 2 == 0)
		{
			if (c < sl / 2)
			{
				;
			}
			else
			{
				_putchar(str[c]);
			}
		}
		else
		{
			if (c < (sl + 1) / 2)
			{
				;
			}
			else
			{
				_putchar(str[c]);
			}
		}
	}
	_putchar('\n');


}
