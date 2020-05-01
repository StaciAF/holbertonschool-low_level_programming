#include "lists.h"

/**
 * dlistint_len - returns the number of elements in doubly linked list
 * @h: pointer to head node of doubly linked list
 *
 * Returns: number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != '\0')
	{
		count++;
		h = h->next;
	}
	return (count);
}
