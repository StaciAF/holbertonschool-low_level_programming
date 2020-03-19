#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: points to list - head of list to be counted
 *
 * Description: function prints all elements
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	int nodes;

	nodes = 0;
	while (h != '\0')
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
