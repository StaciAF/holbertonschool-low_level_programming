#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string one to be compared
 *
 * @s2: string two to be compared
 *
 * Description: compares two strings
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int sum;
	int i = 0;

	if (s1[i] != s2[i])
	{
		sum = s1[i] - s2[i];
	}
	else
		sum = 0;
	return (sum);
}
