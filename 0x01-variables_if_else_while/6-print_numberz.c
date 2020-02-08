#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int zero = 48;
	int ten = 57;

	for (i = zero; i <= ten; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
