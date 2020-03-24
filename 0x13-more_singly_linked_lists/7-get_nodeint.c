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
	unsigned int len, i;
	listint_t *temp;

	len = 0;
	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		len++;
		temp = temp->next;

		if (len == index)
		{
			return (temp);
		}
	}

		temp = head;
		for (i = 1; i < len - index + 1; i++)
		{
			temp = temp->next;
			return (head);
		}
		return (NULL);
}
