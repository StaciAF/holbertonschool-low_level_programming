#include "holberton.h"
/**
* print_diagonal - draws a diagonal line
* @n: number given
*
* Description: draws diagonal of given sixe
* Return: in main
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{

		for (i = 0; i <= n; i++)
{
		_putchar(92);
		_putchar(10);
		for (j = 0; j < i; j++)
		{
		_putchar(32);
		}
	}
	}
}
