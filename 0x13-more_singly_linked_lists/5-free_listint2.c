#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: double pointed to link list; to be freed
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
