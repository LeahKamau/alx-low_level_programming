#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: points to listint_t linked list
 *
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += (head->n);
		head = head->next;
	}

	return (sum);
}
