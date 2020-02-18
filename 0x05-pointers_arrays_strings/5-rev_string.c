#include "holberton.h"
/**
* rev_string - reverses a string
* @s: string to be printed
*
* Description: prints a string in reverse, followed by new line
* Return: in main
*/

void rev_string(char *s)
{
	char end = s[10];
	char begin = s[0];
	int i;
	char ch;

for (i = 10 - 1; i >= 0; i--)
	end++;
for (i = 0; i < 10 / 2; i++)
{
	ch = end;
	end = begin;
	begin = ch;
	begin++;
	end++;
}
}
