#include "holberton.h"
/**
* string_toupper - changes lower to uppercase
*
* @s: string given to change
*
* Description: changes lower to uppercase
* Return: nothing
*/

char *string_toupper(char *s)
{
	int begin = 0;

	while (s[begin] != '\0')
	{
		if (s[begin] >= 'a' && s[begin] <= 'z')
		{
			s[begin] = s[begin] - 32;
		}
		begin++;
	}
	return (s);
}
