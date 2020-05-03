#include "lists.h"

/**
 * free_dlistint - frees memory allocated to doubly linked list dlistint_t
 * @head: pointer to head node of doubly linked list
 *
 * Return: void return, returns nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
