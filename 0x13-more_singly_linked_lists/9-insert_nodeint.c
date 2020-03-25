#include "lists.h"

/**
 * insert_nodeint_at_index - inserys a new node at a given index position
 * @head: linked list given
 *
 * @idx: index of the list where new node should be added
 *
 * @n: integer data in list
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *new, *node;
	int i, index;
	index = idx;
	i = 0;

	while(i != index)
	{
		i++;
		new = new->next;
		prev = new;
	}

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
        node->n = n;
	node->next = new;
	if (i == 0)
		*head = node;
	else
		prev->next = node;

	return (*head);
}
