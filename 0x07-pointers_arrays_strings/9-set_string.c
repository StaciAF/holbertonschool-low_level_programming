#include "holberton.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: given pointer
 *
 * @to: pointer set here
 *
 * Description: sets the value of a pointer to a char
 * Return: in main - void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
