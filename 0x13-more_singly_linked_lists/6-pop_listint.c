#include "lists.h"

/**
 * pop_listint - deletes head node and returns the head node's data
 * @head: first node in linked list
 *
 * Return: n or 0 if empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *remove;
	int data;

	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
		remove = *head;
		*head = (*head)->next;
		data = remove->n;
		free(remove);
	}
	return (data);
}
