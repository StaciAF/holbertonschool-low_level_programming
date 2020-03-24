#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list
 * @h: given list to be printed
 *
 * Return: the number of nodes in a list
 *
 */


size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

		return (i);
}
