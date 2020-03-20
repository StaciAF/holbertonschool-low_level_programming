#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list to be freed of memory
 *
 * Description: frees malloced list space
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
