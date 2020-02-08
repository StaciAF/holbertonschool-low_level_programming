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

	for (ch = LZ; ch >= LA; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
