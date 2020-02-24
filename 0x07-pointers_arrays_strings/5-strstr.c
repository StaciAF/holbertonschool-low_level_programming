#include "holberton.h"
#define NULL 0
/**
 * _strstr - function that locates a substring
 * @haystack: first string to be compared
 *
 * @needle: string for substring
 *
 * Description: function mimics strstr
 * Return: pointer to substring; NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}
