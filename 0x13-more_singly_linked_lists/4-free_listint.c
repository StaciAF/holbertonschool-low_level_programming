#include "lists.h"

/**
 * free_listint - function that free allocated memory from linked list
 * @head: list to be freed
 *
 * Returns: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
