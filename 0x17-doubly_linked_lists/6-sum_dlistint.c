#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t
 * @head: points to first node
 *
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
