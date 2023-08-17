#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 * @head: points to first node
 * @index: index of node
 *
 * Return: node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	while(head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (idx == index)
			break;
		head = head->next;
		idx++;
	}

	return (head);
}
