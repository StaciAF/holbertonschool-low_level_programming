#include "holberton.h"
/**
* print_most_numbers - prints numbers 0 to 9
*
* Description: prints numbers 0 to 9 skipping some numbers
*
*/

void print_most_numbers(void)
{
	int n;

	n = 48;

	for (n = 48; n <= 57;)
	{
		if (n == 50 || n == 52)
		{
			n++;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
