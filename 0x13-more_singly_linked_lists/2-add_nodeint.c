#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of linked list
 * @head: head of current list
 *
 * @n: integer data
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return(newNode);
}
