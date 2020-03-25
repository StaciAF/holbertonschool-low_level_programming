#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: linked list given
 *
 * @index: index of node to be deleted
 *
 * Return: 1 for success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *temp;
	unsigned int i = 0;

	while (i != index && *head != NULL)
	{
		prev = *head;
		head = &(*head)->next;
		i++;
	}

	if (*head != NULL)
	{
		temp = *head;

		if (prev == NULL)
		{
			*head = (*head)->next;
		}
		else
			prev->next = (*head)->next;
		free(temp);
		return (1);
	}
	return (-1);
}
