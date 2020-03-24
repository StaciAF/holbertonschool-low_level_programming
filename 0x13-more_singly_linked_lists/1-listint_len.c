#include "lists.h"

/**
 * listint_len - returns the muber of elements in a linked list
 * @h: linked list given
 *
 * Return: number of elements in list
 *
 */

size_t listint_len(const listint_t *h)
{
	int count;

		count = 0;
		while (h != '\0')
		{
			count++;
			h = h->next;
		}
		return (count);
}
