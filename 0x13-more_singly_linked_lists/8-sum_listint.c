#include "lists.h"

/**
 * sum_listint - calculates sum of all data (n)
 * @head: pointer to first node
 * Return: sum of all data (n)
 * or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum, elem;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		elem = head->n;
		sum += elem;
		head = head->next;
	}

	return (sum);
}
