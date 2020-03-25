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
	listint_t *new;
	int i, index;

	index = idx;

	for (i = 0; *head; head = &(*head)->next)
	{
		if (i == index)
			break;
		i++;
	}

	if (i != index)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
