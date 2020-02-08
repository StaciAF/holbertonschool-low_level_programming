#include <stdio.h>
#define LA 97
#define LZ 122
#define LE 101
#define LQ 113
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
		if (ch != LE && ch != LQ)
		{
			putchar(ch);
		}
	}
	putchar(newline);
	return (0);
}
