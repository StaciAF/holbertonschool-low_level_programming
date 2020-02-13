#include "holberton.h"
/**
* more_numbers - prints 0 to 14
*
* Description: prints 0 to 14 ten times
* Return: in main
*/

void more_numbers(void)
{
	int n;
	int j = 0;


	while (j <= 10)
	{
		j++;
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		{
			_putchar(n / 10 + '0');
		}
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
	}
}
