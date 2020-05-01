#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string taken to check length
 *
 * Description: returns the length of given string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

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

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
