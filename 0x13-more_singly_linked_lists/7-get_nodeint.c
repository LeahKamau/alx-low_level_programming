#include "lists.h"

/**
 * get_nodeint_at_index - gets node at specified index
 * @head: pointer to first node
 * @index: index of node starting at 0
 * Return: node at index specified or
 * null if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
