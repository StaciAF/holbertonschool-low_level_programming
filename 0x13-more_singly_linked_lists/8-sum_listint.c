#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: linked list to be added
 *
 * Return: sum of all data (n) or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int sum;

	if (head == NULL)
		return (0);

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
