#include "holberton.h"
/**
* print_line - draws a staight line in the terminal
* @n: number given
*
* Description: draws straightline in terminal
* Return: in main
*/

void print_line(int n)
{
	int i;

for (i = 0; i < n; i++)
{
	_putchar('_');
}
_putchar('\n');
}
