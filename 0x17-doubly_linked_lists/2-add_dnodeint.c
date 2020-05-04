#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of doubly linked list
 * @head: pointer to head node of linked list
 *
 * @n: data stored in node
 *
 * Return: NULL for malloc fail, else address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}
