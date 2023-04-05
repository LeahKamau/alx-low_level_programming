#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at specified index
 * @head: pointer to first node
 * @idx: specified index
 * @n: element data (n)
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; (i < (idx - 1)) && (tmp != NULL); i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	new->next = tmp->next;
	tmp = new;

	return (tmp);
}
