#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int com = 44;
	int newline = '\n';
	int sp = 32;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
		putchar(com);
		putchar(sp);
		}
		num++;
	}
	putchar(newline);
	return (0);
}
