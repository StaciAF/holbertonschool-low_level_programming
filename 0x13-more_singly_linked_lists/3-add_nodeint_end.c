#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of linked list
 * @head: head of current list
 *
 * @n: integer data in each element
 *
 * Return: address of new element at end or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);


	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
