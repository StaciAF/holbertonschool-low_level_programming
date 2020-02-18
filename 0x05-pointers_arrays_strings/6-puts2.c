#include "holberton.h"
/**
* puts2 - prints every other character
* @str: given string
*
* Description: prints every other char in a string followed by new line
* Return: in main
*/

void puts2(char *str)
{
	int i = 0;
	int c = 0;

	if (c % 2 == 0)
		;
else
	i = 0;
	while (str[i] != '\0')
		i++;
	for (c = 0; c < i; c++)
	{
		if (c % 2 != 0)
			;
		else
		_putchar(str[c]);
	}
	_putchar('\n');
}
