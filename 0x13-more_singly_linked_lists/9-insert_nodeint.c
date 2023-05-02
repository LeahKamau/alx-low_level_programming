#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: points to listint_t linked list
 * @idx: position to insert new node
 * @n: integer
 *
 * Return: address of new node
 * or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	tmp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
	}

	if (tmp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}
