#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 99; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
	if (x == 99)
	{
	putchar(10);
	}
	else if (x <= 98)
	putchar(44);
	putchar(32);
	}
	return (0);
}
