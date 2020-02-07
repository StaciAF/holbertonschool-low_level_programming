#include <stdio.h>
#define LA 97
#define LZ 122
#define UA 65
#define UZ 90
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = LA; ch <= LZ; ch++)
	{
	putchar(ch);
	}
	for (ch = UA; ch <= UZ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
