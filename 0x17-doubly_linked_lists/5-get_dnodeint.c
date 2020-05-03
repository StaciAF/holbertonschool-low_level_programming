#include "lists.h"

/**
 * dnodeint_at_index - returns the indexed node in a doubly linked list
 * @head: pointer to head of doubly linked list
 *
 * @index: given node index to be returned
 *
 * Return: value of indexed node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;

	if (head == NULL)
		return (NULL);

	for (len = 0; len < index; len++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
