#include <stdio.h>
#define LA 97
#define LZ 122
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int newline = '\n';

	for (ch = LA; ch <= LZ; ch++)
	{
		putchar(ch);
	}

	putchar(newline);
	return (0);
}
