#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - prints all natural numbers from n to 98
*@n: number to be input
*
* Description: adds new line to printed numbers
*/

void print_to_98(int n)
{
	int a;
	if (n < 98)
	{
		for (a = n; a < 99; a++)
		{
			if (a != 98)
			{
				printf("%i, ", a);
			}
			else
			{
				printf("%i\n", a);
			}
		}
	}

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%i, ", a);
			}
			else
			{
				printf("%i\n", a);
			}
		}
	}
	else
	{
		if (n == 98)
		{
			printf("%i\n", n);
		}
	}
}
