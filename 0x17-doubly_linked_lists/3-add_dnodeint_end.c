#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of doubly linked list
 * @head: pointer to head node
 *
 * @n: integer date in node
 *
 * Return: address to new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head  == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)

			temp = temp->next;
	}

	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}
