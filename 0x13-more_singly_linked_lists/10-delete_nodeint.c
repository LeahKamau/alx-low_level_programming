#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of a list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	prev = *head;


	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
			prev = prev->next;
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	tmp = prev->next;

	if (index != 0)
	{
		prev->next = tmp->next;
		free(tmp);
	}
	else
	{
		free(prev);
		*head = tmp;
	}

	return (1);
}
