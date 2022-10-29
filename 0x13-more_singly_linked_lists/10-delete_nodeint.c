#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list
 * @head: head of a list.
 * @index: index of the list where the node is
 * delted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *plhold = *head;
	unsigned int node;

	if (plhold == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(plhold);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (plhold->next == NULL)
			return (-1);

		plhold = plhold->next;
	}

	tmp = plhold->next;
	plhold->next = tmp->next;
	free(tmp);
	return (1);
}
