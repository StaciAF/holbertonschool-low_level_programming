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
	putchar(44);
}
	if (x != 99)
	{
	putchar(32);
	}
	else
	{
	putchar(10);
	}
	return (0);
}
