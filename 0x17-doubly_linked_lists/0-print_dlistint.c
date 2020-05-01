#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: point to head node of list
 *
 * Return: The number of nodes in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != '\0')
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
