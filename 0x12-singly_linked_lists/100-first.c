#include "lists.h"

void __attribute__((constructor))the_hare(void);

/**
 * the_hare - prints out string  before main is executed
 *
 * Return: nothing. void.
 */

void the_hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
