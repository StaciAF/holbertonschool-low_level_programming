#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: pointer to head node of doubly linked list
 *
 * @idx: index of list where new node should be inserted
 *
 * @n: data to be added to new inserted node
 *
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nodecity, *temp;
	int i, index;

	index = idx;
	if (*h == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	if (index == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	i = 1;
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (index == 1)
		return (add_dnodeint(h, n));
	else if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	else if (temp != NULL)
	{
		new_nodecity = malloc(sizeof(dlistint_t));
		if (new_nodecity == NULL)
		{
			free(new_nodecity);
			return (NULL);
		}
		new_nodecity->n = n;
		new_nodecity->next = temp->next;
		new_nodecity->prev = temp;
			if (temp->next != NULL)
			{
				temp->next->prev = new_nodecity;
			}
			temp->next = new_nodecity;
		return (new_nodecity);
	}
	return (NULL);
}
