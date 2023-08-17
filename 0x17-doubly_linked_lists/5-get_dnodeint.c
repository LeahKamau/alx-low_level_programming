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
	dlistint_t *temp;
	unsigned int idx = 0;

	temp = head;

	while(temp->prev != NULL)
		temp = temp->prev;

	while (idx != index && temp)
	{
		temp = temp->next;
		idx++;
	}

	if (idx == index)
		return (temp);
	else
		return (NULL);
}
