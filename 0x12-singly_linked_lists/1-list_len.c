#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * @h: points to list - head of list to be counted
 *
 * Description: function prints number elements
 * Return: number of elements
 */

size_t list_len(const list_t *h)
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
