#include "lists.h"

/**
 * free_dlistint - frees memory allocated to doubly linked list dlistint_t
 * @head: pointer to head node of doubly linked list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
