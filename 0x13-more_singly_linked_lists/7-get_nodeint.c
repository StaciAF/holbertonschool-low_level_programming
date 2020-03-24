#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: linked list given
 *
 * @index: the index of the node; starts at 0
 *
 * Return: node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;


		for (len = 0; len < index; len++)
		{
			if (head == NULL)
				return (NULL);

			head = head->next;
		}
			return (head);
}
