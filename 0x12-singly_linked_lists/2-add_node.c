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
 * add_node - adds a new node at beginning of list
 * @head: pointer to pointer of list
 *
 * @str: content of list - to be copied
 *
 * Description: adds new node at the beginning of list_t list
 * Return: adress of new element or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
