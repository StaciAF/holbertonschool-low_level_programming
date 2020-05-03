#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in doubly linked list
 *
 * @head: pointer to head node of doubly linked list
 *
 * Return: sum of all integer data or 0 if empty
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sumdinger = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sumdinger = sumdinger + head->n;
		head = head->next;
	}
	return (sumdinger);
}
