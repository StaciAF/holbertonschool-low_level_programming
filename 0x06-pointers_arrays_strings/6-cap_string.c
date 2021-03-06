#include "holberton.h"
/**
 * cap_string - capitalizes all words
 * @s: string to be printed
 *
 * Description: capitalizes all words in a string
 * Return: in main
 */
char *cap_string(char *s)
{
	int i;

	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		     || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
		     || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		     || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		     || s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;

	}
	return (s);
}
