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
	int i, size, start, end  = 0;
	char holder;

	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}
	end = size - 1;
	for (start = 0; start < (size / 2); start++)
	{
		holder = s[start];
		s[start] = s[end];
		s[end] = holder;
		end--;

	}
}
