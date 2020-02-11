#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[9] = "Holberton";

	int i = 0;

	while (i <= 9)
	{
		_putchar(c[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
