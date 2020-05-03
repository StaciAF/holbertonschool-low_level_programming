#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given position, doubly linked list
 * @head: pointer to head node of list
 *
 * @index: given index to have deleted
 *
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *temp;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	while (i != index && *head != NULL)
	{
		prev = *head;
		head = &(*head)->next;
		i++;
	}
	if (*head != NULL)
	{
		temp = *head;

		if (index == 0)
		{
			*head = (*head)->next;
		}
		else
		{
			prev->next = (*head)->next;
		}
		        free(temp);
			return (1);
	}
	return (-1);
}
