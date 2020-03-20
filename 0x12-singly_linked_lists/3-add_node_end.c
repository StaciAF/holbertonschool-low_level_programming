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
 * add_node_end - adds a new node at end of list
 * @head: pointer to pointer of list
 *
 * @str: content of list - to be copied
 *
 * Description: adds new node at the beginning of list_t list
 * Return: adress of new element or NULL if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
			temp->next = new;
	}

	return (new);
}
