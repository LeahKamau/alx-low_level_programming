#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of
 * listint_t linked list
 *
 * @head: points to listint_t linked list
 * @index: index of node to be returned
 *
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count  = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
